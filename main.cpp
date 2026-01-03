/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>



#include "road.h"
#include "signal.h"
//#include "car.h"
//#include "house.h"

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawRoad();
    drawSignal();
    //drawCar();
    //drawHouse();

    glFlush();
}

void init()
{
    glClearColor(0.5, 0.8, 1.0, 1.0); // sky color
    gluOrtho2D(0, 1000, 0, 600);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(100, 50);
    glutCreateWindow("Traffic Signal System");
    //glutCreateWindow("Road Test");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
