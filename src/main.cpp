#include <cstdio>
#include <GLFW/glfw3.h>
#include "OGPConfig.h"

int main(int argc, char** argv){

    printf("The Version of software is %d.%d\n", OGP_VERSION_MAJOR, OGP_VERSION_MINOR);


    GLFWwindow* mainWindow;

    if(!glfwInit()){
        return -1;
    }

    mainWindow = glfwCreateWindow(640, 480, "OpenGL Project", NULL, NULL);

    if(mainWindow == nullptr){
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(mainWindow);

    while(!glfwWindowShouldClose(mainWindow)){

        glClear(GL_COLOR_BUFFER_BIT);

        glBegin(GL_TRIANGLES);
        glVertex2d(-0.5f, -0.5f);
        glVertex2d( 0.0f,  0.5f);
        glVertex2d( 0.5f, -0.5f);
        glEnd();

        glfwSwapBuffers(mainWindow);

        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}