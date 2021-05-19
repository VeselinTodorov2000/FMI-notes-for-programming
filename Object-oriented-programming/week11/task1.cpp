#include <iostream>
#include <cstring>

class Word
{
    private:
    char word[20];

    public:
    Word()
    {
        word[0] = '\0';
    }
    
    Word(const char* _word)
    {
        if(strlen(_word) > 20)
        {
            strcpy_s(word, 20, _word);
        }
        else
        {
            strcpy(word, _word);
        }
    }

    Word(const Word& other)
    {
        if(strlen(other.word) > 20)
        {
            strcpy_s(word, 20, other.word);
        }
        else
        {
            strcpy(word, other.word);
        }
    }

    char operator[](size_t i) const
    {
        return word[i % 20];
    }

    Word operator+(const char symbol) const
    {
        if(strlen(this->word) == 20)
        {
            return Word();
        }

        Word newWord;
        strcpy(newWord.word, word);
        size_t length = strlen(newWord.word);
        newWord.word[length] = symbol;
        newWord.word[length + 1] = '\0';
        return newWord;
    } 

    Word& operator+=(const char symbol) 
    {
        if(strlen(this->word) == 20)
        {
            return *this;
        }
        size_t length = strlen(word);
        word[length] = symbol;
        word[length + 1] = '\0';
        
        return *this;       
    }

    bool operator<(const Word& other) const
    {  
        return strcmp(word, other.word) < 0;
    }

    bool operator==(const Word& other) const
    {
        return strcmp(word, other.word) == 0;
    }

    bool operator>(const Word& other) const
    {
        return !(*this < other) && !(*this == other);
    }

    void print()
    {
        std::cout << word << std::endl;
    } 

    size_t getSize() const
    {
        return strlen(word);
    }  

    const char* getWord() const
    {
        return word;
    }
};

//operator + -> operator +=
//this = this + symbol

//operator += -> operator +
//newobject <- this->word
//newobject += symbol
