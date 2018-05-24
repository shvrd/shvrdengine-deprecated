//
// Created by thekatze on 04/04/18.
//

#ifndef SHVRDENGINE_SRC_SHADER_H
#define SHVRDENGINE_SRC_SHADER_H


#include "GLSLProgram.h"

/**
 * A wrapper for GLSLPrograms for use in the ResourceManager
 */
class Shader {
    GLSLProgram *boundGLSLProgram;
    // std::map<std::string, GLuint> uniforms;

public:
    Shader(std::string vertexShaderPath, std::string fragmentShaderPath);

    ~Shader() = default;

    GLSLProgram *getGLSLProgram() { return this->boundGLSLProgram; }



    static Shader *getDefaultShader();
};


#endif //SHVRDENGINE_SRC_SHADER_H
