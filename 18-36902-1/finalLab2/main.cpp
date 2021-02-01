
#include <cstdio>
#include<iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;

int X1, Y1, r;

void plot(int x, int y)
{
	glBegin(GL_POINTS);
	glVertex2i(x+X1, y+Y1);
	glEnd();
}


void myInit (void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


void midPointCircleAlgo()
{
	int x = 0;
	int y = r;
	float decision = 1 - r;
	plot(x, y);

	while (y > x)
	{
		if (decision < 0)
		{
			x++;
				int d=0;
				decision+=2*(x)+ 1;

		}
		else
		{
			y--;
			x++;
				int d= ((y-1)*(y-1))-(y*y);
				decision+=2*(x+1)+d-((y-1)-y)+1;


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
	glPointSize(1.0);

	midPointCircleAlgo();

	glFlush ();
}

 main(int argc, char** argv)
{
	cout << "Enter the coordinates of the center:\n";

	cout << "X-coordinate   : ";
	 cin >> X1;
	cout << "\nY-coordinate : ";
	 cin >>Y1;
	cout << "\nEnter radius : ";
	cin >> r;


	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (640, 480);
	glutInitWindowPosition (100, 150);
	glutCreateWindow ("  ");
	glutDisplayFunc(myDisplay);
	myInit ();
	glutMainLoop();

}
