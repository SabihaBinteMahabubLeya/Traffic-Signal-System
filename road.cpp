#include <GL/glut.h>
#include "road.h"

void drawRoad()
{
    // ===== Horizontal Road =====
    glColor3f(0.2f, 0.2f, 0.2f); // dark gray
    glBegin(GL_QUADS);
        glVertex2i(0, 250);
        glVertex2i(1000, 250);
        glVertex2i(1000, 350);
        glVertex2i(0, 350);
    glEnd();

    // ===== Vertical Road =====
    glBegin(GL_QUADS);
        glVertex2i(450, 0);
        glVertex2i(550, 0);
        glVertex2i(550, 600);
        glVertex2i(450, 600);
    glEnd();

    // ===== Road Divider (Horizontal) =====
    glColor3f(1.0f, 1.0f, 1.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
        glVertex2i(0, 300);
        glVertex2i(450, 300);

        glVertex2i(550, 300);
        glVertex2i(1000, 300);
    glEnd();

    // ===== Road Divider (Vertical) =====
    glBegin(GL_LINES);
        glVertex2i(500, 0);
        glVertex2i(500, 250);

        glVertex2i(500, 350);
        glVertex2i(500, 600);
    glEnd();
}
