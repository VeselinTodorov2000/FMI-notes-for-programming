#pragma once
#include "Note.h"

struct NoteBlock {
    private:
    const char fileName[20] = "Notes.txt"; 
    int notesCount = 0;
    Note notes[10];

    public:
    NoteBlock();
    void loadNotes();
    void saveNotes();
    void addNote();
    void deleteNote();
};