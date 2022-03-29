#pragma once
#include <iostream>
#include <fstream>
#include "NoteBlock.h"

NoteBlock::NoteBlock() {

}

void NoteBlock::loadNotes()
{

}

void NoteBlock::saveNotes()
{
    std::ofstream out(fileName);
    for(int i = 0; i < notesCount; i++) 
    {
        out << notes[i].ticket << std::endl;
        out << notes[i].content << std::endl;
        out << std::endl;
    }
    out.close();
}

void NoteBlock::addNote()
{
    if(notesCount == 10) {
        return;
    }    
    char ticket[20];
    std::cout << "Ticket:";
    std::cin.getline(ticket, 20);
    char content[100];
    std::cout << "Content:";
    std::cin.getline(content, 100);

    notes[notesCount++] = Note(ticket, content); 
    std::cout << "Note added successfully" << std::endl;
}

void NoteBlock::deleteNote()
{
    char ticket[20];
    std::cout << "Ticket:";
    std::cin.getline(ticket, 20);

    for(int i = 0; i < notesCount; i++)
    {
        if(strcmp(ticket, notes[i].ticket) == 0)
        {
            Note n = notes[i];
            notes[i] = notes[notesCount - 1];
            notes[notesCount - 1] = n;
            notesCount--;
        }
    }
}