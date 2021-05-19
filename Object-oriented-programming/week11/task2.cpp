#include <iostream>
#include <cstring>
#include "task1.cpp"
#include <fstream>

class Sentence
{
    protected:
    char* sentence;

    public:
    Sentence()
    {
        sentence = nullptr;
    }

    Sentence(const Sentence& other)
    {
        sentence = new char[strlen(other.sentence) + 1];
        strcpy(sentence, other.sentence);
    }
    
    Sentence& operator=(const Sentence& other)
    {
        if(this != &other)
        {
            delete[] sentence;
            sentence = new char[strlen(other.sentence) + 1];
            strcpy(sentence, other.sentence);
        }
        return *this;
    }

    ~Sentence()
    {
        delete[] sentence;   
    }

    Sentence& addWord(const Word& other)
    {
        Sentence s;
        s.sentence = new char[strlen(this->sentence) + other.getSize() + 1];
        strcpy(s.sentence, this->sentence);
        strcat(s.sentence, other.getWord());

        delete[] sentence;
        *this = s;
        return *this; 
    }

    std::ostream& output(std::ostream& out, const Sentence& s) const
    {
        out << s.sentence << std::endl;
        return out;
    }

    bool isValidEnglishSentence()
    {
        return isValidEnglishSentenceHelper(this->sentence);
    }

    private:
    bool isValidEnglishSentenceHelper(char* sentence)
    {
        if(*sentence == '\0')
        {
            return true;
        }
        return (('A' <= *sentence && *sentence <= 'Z') ||
               ('a' <= *sentence && *sentence <= 'z') ||
               *sentence == '.' ||
               *sentence == ' ' ||
               *sentence == ',' ||
               *sentence == '!') && isValidEnglishSentenceHelper(sentence + 1);
    }    
};
