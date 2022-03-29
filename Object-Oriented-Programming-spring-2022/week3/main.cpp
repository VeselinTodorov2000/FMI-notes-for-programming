#include <iostream>
#include "menu.cpp"
#include "NoteBlock.h"
#include "NoteBlock.cpp"
#include <cassert>

int main()
{
    NoteBlock noteblock;
    noteblock.loadNotes();
    
    Menu m;
    m.menuDialog();
    assert(m.chooseOption() != INVALID);
    
    noteblock.saveNotes();
    return 0;
}