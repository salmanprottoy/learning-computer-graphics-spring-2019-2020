#include<cstdio>
#include<iostream>
#include<GL/gl.h>
#include<GL/glut.h>

using namespace std;

int r=100,x0=0,y0=0;

void plot(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2i(x+x0, y+y0);
	glEnd();
}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(10.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-320.0, 320.0, -240.0, 240.0);
}

void midPointCircle()
{
	int x=0;
	int y=r;
	float d=5/4-r;
	plot(x,y);

	while (y>x)
	{
		if (d<0)
		{
			x++;
			d=d+2*x+1;
		}
		else
		{
			y--;
			x++;
			d=d+2*(x-y)+1;
		}
		plot(x, y);
		plot(x, -y);
		plot(-x, y);
		plot(-x, -y);
		plot(y, x);
		plot(-y, x);
		plot(y, -x);
		plot(-y, -x);
	}

}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (0.0, 0.0, 0.0);
	glPointSize(15.0);

	midPointCircle();
    glFlush ();

	glBegin(GL_QUADS);
	glVertex2i(-110,-120);
	glVertex2i(-80,-120);
	glVertex2i(60,120);
	glVertex2i(30,120);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2i(30,-70);
	glVertex2i(60,-70);
	glVertex2i(60,120);
	glVertex2i(30,120);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2i(-20,-10);
	glVertex2i(60,-10);
	glVertex2i(60,30);
	glVertex2i(-20,30);
	glEnd();

	glBegin(GL_LINES);
    glColor3f(255,255,255);
    glVertex2i(30,-50);
	glVertex2i(80,-10);
	glEnd();

	glFlush ();

}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (640, 480);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}

