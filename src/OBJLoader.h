#ifndef OBJLOADER_H
#define OBJLOADER_H

#define GLEW_STATIC
#include <GL/glew.h>

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <array>

#include "RawModel.h"
#include "Loader.h"

typedef std::array<GLfloat, 3> vector3f;
typedef std::array<float, 2> vector2f;
typedef std::array<std::string, 3> faceArray;

class OBJLoader
{
private:
    //static void insertIntoVector2f(std::vector<vector2f>* vec, std::istringstream* ss);

    template<typename T>
    static void insertIntoFloatVector(std::vector<T>* vec, std::istringstream* ss,
                                      size_t arraySize);

    static void insertIntoStringVector(std::vector<std::string>* vec, std::istringstream* ss);

public:
    static RawModel* loadObjModel(const GLchar* fileName, Loader& loader);
};

#endif // OBJLOADER_H