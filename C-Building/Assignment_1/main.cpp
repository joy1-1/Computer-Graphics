#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#define PI 3.1416

void display(){
glClearColor(1.0f,1.0f,1.0f,1.0f);
glClear(GL_COLOR_BUFFER_BIT);

 int i;

	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.735f;//Joy
	int triangleAmount = 40;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(181,213,223);
    glVertex2f(x,y);
    for(i = 0; i <= triangleAmount;i++) {
    glVertex2f
			(
                x + (radius * cos(i * twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

 //Antina
 glBegin(GL_QUADS);
 glColor3ub(33,47,61);
 glVertex2f(-0.2,0.705);
 glVertex2f(-0.204,0.705);
 glVertex2f(-0.204,0.8);
 glVertex2f(-0.2,0.8);
 glEnd();

 //MainBase
 glBegin(GL_QUADS);
 glColor3ub(25,51,0);
 glVertex2f(-1,-0.9);
 glVertex2f(-1,-1);
 glVertex2f(1,-1);
 glVertex2f(1,-0.9);
 glEnd();

 //BuildingBase
 glBegin(GL_QUADS);
 glColor3ub(157,203,218);
 glVertex2f(-0.23,-0.7);
 glVertex2f(-0.23,-0.9);
 glVertex2f(0.23,-0.9);
 glVertex2f(0.23,-0.7);
 glEnd();

 //FloorBase
 glBegin(GL_QUADS);
 glColor3ub(0,102,204);
 glVertex2f(-0.23,-0.76);
 glVertex2f(-0.23,-0.84);
 glVertex2f(0.23,-0.84);
 glVertex2f(0.23,-0.76);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.536,-0.5);
 glVertex2f(-0.435,-0.59);
 glVertex2f(0.435,-0.59);
 glVertex2f(0.536,-0.5);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.67,-0.3);
 glVertex2f(-0.615,-0.4);
 glVertex2f(0.615,-0.4);
 glVertex2f(0.67,-0.3);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.734,-0.02);
 glVertex2f(-0.709,-0.19);
 glVertex2f(0.709,-0.19);
 glVertex2f(0.734,-0.02);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.728,0.1);
 glVertex2f(-0.706,0.2);
 glVertex2f(0.706,0.2);
 glVertex2f(0.728,0.1);
 glEnd();

 glBegin(GL_POLYGON);
 glColor3ub(0,102,204);
 glVertex2f(-0.66,0.32);
 glVertex2f(-0.59,0.44);
 glVertex2f(0.59,0.44);
 glVertex2f(0.66,0.32);
 glEnd();

 glLoadIdentity();

 glFlush();

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("AIUB C Building");
	glutInitWindowSize(680, 480);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
