#pragma once
#ifndef SHADER_CLASS_H
#define SHADER_CLASS_H

#include <iostream>
#include <GL/glew.h>


//declaring the function that reads the contents of a shader file
std::string get_file_contents(const char* filename);

class Shader{

public:
	// Reference ID of the Shader Program
	GLint shaderProgramID;
	
	// Constructor that build the Shader Program from 2 different shaders
	Shader(const char* vertexFile, const char* fragmentFile);

	// Activates the Shader Program
	void Activate();
	// Deletes the Shader Program
	void Delete();
};

#endif