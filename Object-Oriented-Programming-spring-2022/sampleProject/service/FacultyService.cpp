#pragma once
#include "../repository/FacultyDao.cpp"

class FacultyService
{
    private:
    FacultyDao dao;

    public:
    bool addNewFaculty(std::string filename, const Faculty& newFaculty) 
    {
        dao.save(filename, newFaculty);
    }

    bool addNewFaculty(std::string filename, std::string facultyName, size_t yearOfEstablishment) 
    {
        Faculty newFaculty = Faculty(facultyName, yearOfEstablishment);
        return addNewFaculty(filename, newFaculty);      
    }

    Faculty read(std::string filename)
    {
        return dao.find(filename);
    }
};