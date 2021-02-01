#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3ub(255, 255, 255);
glPointSize(5.0);

glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2i(100, 50);
glVertex2i(120, 50);
glVertex2i(120, 70);
glVertex2i(100, 70);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 100);
glVertex2i(120, 50);
glVertex2i(140, 50);
glVertex2i(140, 70);
glVertex2i(120, 70);
glEnd();

glBegin(GL_QUADS);
glColor3ub (96, 96, 96);
glVertex2i(100, 70);
glVertex2i(120, 70);
glVertex2i(120, 130);
glVertex2i(100, 130);
glEnd();

glBegin(GL_QUADS);
glColor3ub (160, 160, 160);
glVertex2i(120, 70);
glVertex2i(140, 70);
glVertex2i(140, 110);
glVertex2i(120, 110);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2i(140, 90);
glVertex2i(160, 90);
glVertex2i(160, 110);
glVertex2i(140, 110);
glEnd();

glBegin(GL_QUADS);
glColor3ub (96, 96, 96);
glVertex2i(160, 70);
glVertex2i(180, 70);
glVertex2i(180, 110);
glVertex2i(160, 110);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2i(160, 50);
glVertex2i(180, 50);
glVertex2i(180, 70);
glVertex2i(160, 70);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 100);
glVertex2i(180, 50);
glVertex2i(200, 50);
glVertex2i(200, 70);
glVertex2i(180, 70);
glEnd();

glBegin(GL_QUADS);
glColor3ub (160, 160, 160);
glVertex2i(180, 70);
glVertex2i(200, 70);
glVertex2i(200, 130);
glVertex2i(180, 130);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2i(80, 90);
glVertex2i(100, 90);
glVertex2i(100, 150);
glVertex2i(80, 150);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2i(100, 130);
glVertex2i(120, 130);
glVertex2i(120, 150);
glVertex2i(100, 150);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 100);
glVertex2i(120, 110);
glVertex2i(180, 110);
glVertex2i(180, 150);
glVertex2i(120, 150);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 100);
glVertex2i(180, 130);
glVertex2i(200, 130);
glVertex2i(200, 150);
glVertex2i(180, 150);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 0);
glVertex2i(200, 90);
glVertex2i(220, 90);
glVertex2i(220, 150);
glVertex2i(200, 150);
glEnd();

glBegin(GL_QUADS);
glColor3ub (255, 255, 0);
glVertex2i(100, 150);
glVertex2i(200, 150);
glVertex2i(200, 170);
glVertex2i(100, 170);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 100);
glVertex2i(80, 150);
glVertex2i(100, 150);
glVertex2i(100, 170);
glVertex2i(80, 170);
glEnd();

glBegin(GL_QUADS);
glColor3ub (0, 0, 100);
glVertex2i(200, 150);
glVertex2i(220, 150);
glVertex2i(220, 170);
glVertex2i(200, 170);
glEnd();

glBegin(GL_QUADS);
glColor3ub (250, 150, 50);
glVertex2i(80, 170);
glVertex2i(100, 170);
glVertex2i(100, 190);
glVertex2i(80, 190);
glEnd();

glBegin(GL_QUADS);
glColor3ub (250, 150, 50);
glVertex2i(200, 170);
glVertex2i(220, 170);
glVertex2i(220, 190);
glVertex2i(200, 190);
glEnd();

glBegin(GL_QUADS);
glColor3ub (96, 96, 96);
glVertex2i(100, 170);
glVertex2i(200, 170);
glVertex2i(200, 190);
glVertex2i(100, 190);
glEnd();

glBegin(GL_QUADS);
glColor3ub (96, 96, 96);
glVertex2i(80, 190);
glVertex2i(100, 190);
glVertex2i(100, 210);
glVertex2i(80, 210);
glEnd();

glBegin(GL_QUADS);
glColor3ub (96, 96, 96);
glVertex2i(200, 190);
glVertex2i(220, 190);
glVertex2i(220, 210);
glVertex2i(200, 210);
glEnd();

glBegin(GL_QUADS);
glColor3ub (96, 96, 96);
glVertex2i(100, 190);
glVertex2i(120, 190);
glVertex2i(120, 210);
glVertex2i(100, 210);
glEnd();

glBegin(GL_QUADS);
glColor3ub (96, 96, 96);
glVertex2i(180, 190);
glVertex2i(200, 190);
glVertex2i(200, 210);
glVertex2i(180, 210);
glEnd();

glBegin(GL_QUADS);
glColor3ub (64, 64, 64);
glVertex2i(120, 190);
glVertex2i(180, 190);
glVertex2i(180, 210);
glVertex2i(120, 210);
glEnd();

glBegin(GL_QUADS);
glColor3ub (96, 96, 96);
glVertex2i(100, 210);
glVertex2i(200, 210);
glVertex2i(200, 230);
glVertex2i(100, 230);
glEnd();

glBegin(GL_QUADS);
glColor3ub (200, 100, 0);
glVertex2i(120, 230);
glVertex2i(140, 230);
glVertex2i(140, 250);
glVertex2i(120, 250);
glEnd();

glBegin(GL_QUADS);
glColor3ub(250, 150, 50);
glVertex2i(140, 230);
glVertex2i(180, 230);
glVertex2i(180, 250);
glVertex2i(140, 250);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2i(120, 250);
glVertex2i(140, 250);
glVertex2i(140, 310);
glVertex2i(120, 310);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 100);
glVertex2i(140, 250);
glVertex2i(160, 250);
glVertex2i(160, 290);
glVertex2i(140, 290);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 100);
glVertex2i(160, 250);
glVertex2i(180, 250);
glVertex2i(180, 310);
glVertex2i(160, 310);
glEnd();

glFlush ();
}

void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 300.0, 0.0, 400.0);
}


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (300, 400);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
