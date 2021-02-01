#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
GLfloat position = 0.0f;
GLfloat speed = 0.1f;

GLfloat positionRocket = 0.0f;
GLfloat triSpeed1 = 0.1f;
GLfloat triSpeed2 = 0.2f;
GLfloat triSpeed3 = 0.16f;
GLfloat triPosition1 = 0.0f;
GLfloat triPosition2 = 0.0f;
GLfloat triPosition3 = 0.0f;
GLfloat firePositionX = 0.0f;
GLfloat firePositionY = 0.0f;
GLfloat fireSpeed = 0.0f;

void update(int value) {

    if(position > 1.0)
        position = -1.2f;
    if(triPosition1<-1)
    {
        triPosition1=1.2f;
    }
    if(triPosition2<-1)
    {
        triPosition2=1.2f;
    }
    if(triPosition3<-1)
    {
        triPosition3=1.2f;
    }


    position += speed;
    triPosition1+= -triSpeed1;
    triPosition2+= -triSpeed2;
    triPosition3+= -triSpeed3;
    firePositionY+= fireSpeed;

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
			triSpeed1 += 0.1f;
			triSpeed2 += 0.1f;
			triSpeed3 += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}
	glutPostRedisplay();
}
void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    triSpeed1 = 0.0f;
    triSpeed2 = 0.0f;
    triSpeed3 = 0.0f;
    break;
case 'w':
    triSpeed1 += 0.1f;
    triSpeed2 += 0.1f;
    triSpeed3 += 0.1f;
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
case 'f':
    fireSpeed=0.1f;
    if(firePositionY>1)
    {
        firePositionX=positionRocket;
        firePositionY=0.0f;
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
    glTranslatef(0.0f,triPosition1, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.50f, 0.60f);
    glVertex2f(-0.55f, 0.80f);
    glVertex2f(-0.45f, 0.80f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f,triPosition2, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.50f, 0.20f);
    glVertex2f(0.55f, 0.40f);
    glVertex2f(0.45f, 0.40f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f,triPosition3, 0.0f);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, 0.40f);
    glVertex2f(0.05f, 0.60f);
    glVertex2f(-0.05f, 0.60f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(firePositionX,firePositionY, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.05f, -0.60f);
    glVertex2f(0.05f, -0.70f);
    glVertex2f(-0.05f, -0.70f);
    glVertex2f(-0.05f, -0.60f);
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
