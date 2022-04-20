#include <iostream>
#include <cstring>

struct Hour
{
    size_t hour;
    size_t minute;

    Hour() : hour(0), minute(0) {}
    Hour(size_t hour, size_t minute)
    {
        this->hour = hour < 24 ? hour : 0;
        this->minute = minute < 60 ? minute : 0; 
    }
    Hour& operator=(const Hour& other)
    {
        this->hour = other.hour;
        this->minute = other.minute;
    }
    
    bool operator>=(const Hour& start)
    {
        return hour >= start.hour && minute >= start.minute;
    }
        
    bool operator<(const Hour& start)
    {
        return !((*this)>=start);
    }

    bool between(const Hour& start, const Hour& end) 
    {
        return this->operator>=(start) && this->operator<(end);
    }
};

class Task
{
    private:
    const static size_t MAX_PRIORITY = 10;

    char* description;
    size_t priority;
    bool status;
    size_t taskLength;
    Hour timestamp;

    void copy(const Task& other)
    {
        this->description = new char[strlen(other.description) + 1];
        strcpy(this->description, other.description);
        this->setPriority(other.priority);
        this->setTaskLength(other.taskLength);
        this->status = false;
        this->timestamp = other.timestamp;
    }

    void destroy()
    {
        delete[] description;
    }

    public:
    Task()
    {
        description = nullptr;
        priority = 1;
        status = false;
        taskLength = 0;
        timestamp = Hour();
    }

    Task(const char* description, size_t priority, size_t taskLength, Hour timestamp)
    {
        this->description = new char[strlen(description) + 1];
        strcpy(this->description, description);
        this->setPriority(priority);
        this->setTaskLength(taskLength);
        this->status = false;
        this->timestamp = timestamp;
    }

    Task(std::istream& input)
    {
        input >> description >> priority >> status >> taskLength >> timestamp.hour >> timestamp.minute;
    }

    Task(const Task& other)
    {
        copy(other);
    }

    Task& operator=(const Task& other)
    {
        if(this != &other)
        {
            destroy();
            copy(other);
        }
        return *this;
    }

    ~Task()
    {
        destroy();
    }

    const char* getDescription() const
    {
        return description;
    }

    size_t getPriority() const
    {
        return priority;
    }

    bool getStatus() const
    {
        return status;
    }

    size_t getTaskLength() const
    {
        return taskLength; 
    }

    Hour getTimestamp() const
    {
        return timestamp;
    }
    
    void setPriority(size_t priority)
    {
        this->priority = priority <= MAX_PRIORITY ? priority : 1;
    }

    void setTaskLength(size_t taskLength)
    {
        this->taskLength = taskLength;
    }

    void finishTask()
    {
        this->status = true;
    }

    bool operator>(Task other)
    {
        if(this->priority == other.priority)
        {
            return this->taskLength > other.taskLength;
        }
        return this->priority > other.priority;
    }

    friend std::ostream& operator<<(std::ostream& out, const Task& task)
    {
        out << task.description << " "
            << task.priority << " "
            << task.status << " "
            << task.taskLength << " "
            << task.timestamp.hour << " "
            << task.timestamp.minute << std::endl;

        return out;
    }
};

enum Month{
    UNDEFINED,
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL, 
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

class MonthlyPlanner
{
    private:
    struct DayOfMonthTasks {
        Task* tasksForTheDay;
        size_t numberOfTasks;
    };
    DayOfMonthTasks tasksEveryDay[31];
    Month month;

    void copy(const MonthlyPlanner& other)
    {
        this->month = other.month;
        for(int i = 0; i < 31; i++)
        {
            this->tasksEveryDay[i].numberOfTasks = other.tasksEveryDay[i].numberOfTasks;
            this->tasksEveryDay[i].tasksForTheDay = new Task[other.tasksEveryDay[i].numberOfTasks];
            for(int j = 0; j < tasksEveryDay[i].numberOfTasks; j++)
            {
                this->tasksEveryDay[i].tasksForTheDay[j] = other.tasksEveryDay[i].tasksForTheDay[j];
            }
        }
    }

    void destroy()
    {
        for(int i = 0; i < 31; i++)
        {
            delete[] this->tasksEveryDay[i].tasksForTheDay;
        }
    }

    public:
    MonthlyPlanner()
    {
        month = UNDEFINED;
    }

    MonthlyPlanner(const MonthlyPlanner& other)
    {
        copy(other);
    }

    MonthlyPlanner& operator=(const MonthlyPlanner& other)
    {
        if(this != &other)
        {
            destroy();
            copy(other);
        }
        return *this;
    }

    ~MonthlyPlanner() 
    {
        destroy();
    }

    void addTask(Task& task, size_t day)
    {
        if(task.getTimestamp().hour*60 + (task.getTimestamp().minute + task.getTaskLength()) > 1440)
        {
            return;
        }

        size_t numberOfTasksForThisDay = tasksEveryDay[day - 1].numberOfTasks;
        for(int i = 0; i < numberOfTasksForThisDay; i++) 
        {
            Hour taskStart = tasksEveryDay[day-1].tasksForTheDay[i].getTimestamp();
            Hour taskEnd = tasksEveryDay[day-1].tasksForTheDay[i].getTimestamp();
            taskEnd.minute += tasksEveryDay[day-1].tasksForTheDay[i].getTaskLength() % 60;
            taskEnd.hour += tasksEveryDay[day-1].tasksForTheDay[i].getTaskLength() / 60;
            if(task.getTimestamp().between(taskStart, taskEnd))
            {
                if(task > tasksEveryDay[day-1].tasksForTheDay[i])
                {
                    return;
                }

                //remove tasksEveryDay[day-1].tasksForTheDay[i]
                //insert task
            }
        }       
    }
    
    void printUnfinishedTasks(size_t day) const
    {
        size_t numberOfTasksForThisDay = tasksEveryDay[day - 1].numberOfTasks;
        for(int i = 0; i < numberOfTasksForThisDay; i++) 
        {
            if(!tasksEveryDay[day-1].tasksForTheDay[i].getStatus())
            {
                std::cout << tasksEveryDay[day-1].tasksForTheDay[i] << std::endl;
            }
        }
    }

    void markTaskFinished(size_t day, Hour time)
    {
        size_t numberOfTasksForThisDay = tasksEveryDay[day - 1].numberOfTasks;
        for(int i = 0; i < numberOfTasksForThisDay; i++) 
        {
            if(tasksEveryDay[day-1].tasksForTheDay[i].getTimestamp().hour == time.hour &&
                tasksEveryDay[day-1].tasksForTheDay[i].getTimestamp().minute == time.minute)
            {
                tasksEveryDay[day-1].tasksForTheDay[i].finishTask();
            }
        }
    }
    friend std::ostream& operator<<(std::ostream& out, const MonthlyPlanner& task);
    // friend std::istream& operator>>(std::istream& in);   
};

int main()
{
    return 0;
}