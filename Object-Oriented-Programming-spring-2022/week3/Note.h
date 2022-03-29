#pragma once
#include <cstring>

struct Note {
    char ticket[20];
    char content[100];

    Note() 
    {
        strcpy(this->ticket, "");
        strcpy(this->content, "");
    }

    Note(const char* ticket, const char* content) 
    {
        strcpy(this->ticket, ticket);
        strcpy(this->content, content);
    }
};