#pragma once
#include "../dto/FacultyDto.cpp"
#include "../../models/Faculty.cpp"

class FacultyMapper 
{
    public:
    Faculty mapDtoToEntity(FacultyDto dto)
    {
        Faculty faculty = Faculty(nullptr, 0);
        faculty.setName(dto.getName());
    }

    FacultyDto mapEntityToDto(Faculty entity)
    {
        FacultyDto dto = FacultyDto(nullptr);
        dto.setName(entity.getName());
    }  
};