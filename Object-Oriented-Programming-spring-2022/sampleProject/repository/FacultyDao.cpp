#pragma once
#include <fstream>
#include "../models/Faculty.cpp"

class FacultyDao
{
    private:
    static std::ifstream input;
    static std::ofstream output;

    public:
    //Create
    static bool save(std::string outputFile, const Faculty& newObject);
    //Read
    static Faculty find(std::string inputFile);
    //Update
    static bool update(std::string outputFile, const Faculty& updated);
    //Delete
    static bool _delete(std::string outputFile, std::string facultyName);
};