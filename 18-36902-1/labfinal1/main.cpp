#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
GLfloat position = 0.0f;
GLfloat speed =0.1f;

GLfloat positionRocket=0.0f;
GLfloat triSpeed=0.1f;
GLfloat triPosition=0.0f;

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
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}
	glutPostRedisplay();
}
void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    speed = 0.0f;
    break;
case 'w':
    speed += 0.1f;
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
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.00f, -0.85f);
    glVertex2f(- 0.08f, -0.95f);
    glVertex2f(0.00f,  -0.99f);
    glVertex2f( 0.08f,  -0.95f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.00f, -0.85f);
    glVertex2f(- 0.05f, -0.95f);
    glVertex2f(0.00f,  -0.97f);
    glVertex2f( 0.05f,  -0.95f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.5f, 0.0f);
    glVertex2f(-0.05f, -0.9f);
    glVertex2f( 0.05f, -0.9f);
    glVertex2f( 0.05f,  -0.6f);
    glVertex2f(-0.05f,  -0.6f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.05f,-0.6f);
    glVertex2f(0.05f, -0.6f);
    glVertex2f(0.0f, -0.5f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.05f,-0.65f);
    glVertex2f(-0.05f, -0.75f);
    glVertex2f(-0.1f, -0.75f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.05f,-0.65f);
    glVertex2f(0.05f, -0.75f);
    glVertex2f(0.1f, -0.75f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.05f,-0.80f);
    glVertex2f(-0.05f, -0.9f);
    glVertex2f(-0.12f, -0.9f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.05f,-0.80f);
    glVertex2f(0.05f, -0.9f);
    glVertex2f(0.12f, -0.9f);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f,triPosition, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.6f, 0.8f);
    glVertex2f(-0.4f,0.8f);
    glVertex2f(-0.5f, 0.6f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.5f, 0.5f, 1.0f);
    glVertex2f(0.5f,0.8f);
    glVertex2f(0.6f, 0.8f);
    glVertex2f(0.4f, 0.7f);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.5f, 1.0f);
    glVertex2f(0.0f,0.8f);
    glVertex2f(0.2f, 0.8f);
    glVertex2f(-0.2f, 0.7f);
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
