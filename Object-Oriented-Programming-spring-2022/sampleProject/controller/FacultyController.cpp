#pragma once
#include "../service/FacultyService.cpp"
#include "../controller/mapper/FacultyMapper.cpp"

class FacultyController
{
    private:
    FacultyService service;
    FacultyMapper mapper;

    public:
    bool addNewFaculty(std::string filename, std::string facultyName, size_t yearOfEstablishment) 
    {
        return service.addNewFaculty(filename, facultyName, yearOfEstablishment);      
    }
    
    FacultyDto read(std::string filename) 
    {
        return mapper.mapEntityToDto(service.read(filename));  
    }
};