#include <iostream>
#include "task2.cpp"

class EnglishSentence : public Sentence
{
    public:
    EnglishSentence(const Sentence& s)
    {
        if(s.isValidEnglishSentence())
        {
            this->sentence(s);
        }
        else
        {
            sentence = nullptr;
        }
    }
};

void addAndPrint (Sentence** sentences, size_t sentenceCnt, Word* words, size_t wordCnt)
{
    for(int i = 0; i < sentenceCnt; i++)
    {
        for(int j = 0; j < wordCnt; j++)
        {
            sentences[i]->addWord(words[j]);
        }
    }

    for(int i = 0; i < sentenceCnt; i++)
    {
        sentences[i].output(std::cout, sentences[i]);
    }
}