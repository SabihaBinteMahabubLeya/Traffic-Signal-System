#include <GL/glut.h>
#include <cmath>
#include "signal.h"

void drawSignal()
{
    int x = 455; // left corner X position
    int y = 370; // left corner Y position

    // Signal stand
    glColor3f(0, 0, 0); // black
    glBegin(GL_QUADS);
        glVertex2i(x - 20, y - 40);
        glVertex2i(x + 20, y - 40);
        glVertex2i(x + 20, y + 100);
        glVertex2i(x - 20, y + 100);
    glEnd();

    // Red light
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
            glVertex2f(x + 0 + 15*cos(i*3.14159/180.0), y + 60 + 15*sin(i*3.14159/180.0));
    glEnd();

    // Yellow light
    glColor3f(1, 1, 0);
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
            glVertex2f(x + 0 + 15*cos(i*3.14159/180.0), y + 30 + 15*sin(i*3.14159/180.0));
    glEnd();

    // Green light
    glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
        for(int i=0;i<360;i++)
            glVertex2f(x + 0 + 15*cos(i*3.14159/180.0), y + 0 + 15*sin(i*3.14159/180.0));
    glEnd();
}
