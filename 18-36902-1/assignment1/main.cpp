#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
GLfloat position = 0.0f;
GLfloat speed = 0.1f;

GLfloat positionRocket = 0.0f;
GLfloat triSpeed = 0.1f;
GLfloat triPosition = 0.0f;

void update(int value) {

    if(position > 1.0)
        position = -1.2f;
    if(triPosition<-1)
    {
        triPosition=1.2;
    }

    position += speed;
    triPosition+= -triSpeed;

	glutPostRedisplay();

	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			triSpeed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}
	glutPostRedisplay();
}
void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    triSpeed = 0.0f;
    break;
case 'w':
    triSpeed += 0.1f;
    break;
case 'r':
    if(positionRocket<1)
    {
         positionRocket+=0.1;
    }

    break;
case 'l':
    if(positionRocket>-1)
    {
         positionRocket+= -0.1;
    }
    break;
glutPostRedisplay();
	}
}

void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(positionRocket,0.0f, 0.0f);

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.30f, -0.90f);
    glVertex2f(0.30f, -1.0f);
    glVertex2f(-0.30f, -1.0f);
    glVertex2f(-0.30f, -0.90f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(0.15f, -0.70f);
    glVertex2f(0.15f, -0.90f);
    glVertex2f(-0.15f, -0.90f);
    glVertex2f(-0.15f, -0.70f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, -0.70f);
    glVertex2f(-0.05f, -0.70f);
    glVertex2f(-0.05f, -0.60f);
    glEnd();

    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.0f,triPosition, 0.0f);

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.50f, 0.60f);
    glVertex2f(-0.55f, 0.80f);
    glVertex2f(-0.45f, 0.80f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.50f, 0.20f);
    glVertex2f(0.55f, 0.40f);
    glVertex2f(0.45f, 0.40f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.40f);
    glVertex2f(0.05f, 0.60f);
    glVertex2f(-0.05f, 0.60f);
    glEnd();

    glPopMatrix();
    glFlush();
}
int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
