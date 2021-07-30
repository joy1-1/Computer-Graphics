#include <windows.h>
#include <GL/glut.h>
#include <iostream>
using namespace std;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glScalef(.9,.9,0);
    glTranslatef(0.0,-0.2,0);

    glBegin(GL_LINE_LOOP);
        glVertex3f(0,0,0);
        glVertex3f(-.1,.15,0);
        glVertex3f(-.16,.15,0);
        glVertex3f(-.19,.25,0);
        glVertex3f(-.1,.25,0);
        glVertex3f(-.17,.35,0);
        glVertex3f(-.24,.37,0);
        glVertex3f(-.27,.45,0);
        glVertex3f(-.12,.45,0);
        glVertex3f(-.2,.55,0);
        glVertex3f(.2,.55,0);
        glVertex3f(.12,.45,0);
        glVertex3f(.27,.45,0);
        glVertex3f(.24,.37,0);
        glVertex3f(.17,.37,0);
        glVertex3f(.1,.25,0);
        glVertex3f(.19,.25,0);
        glVertex3f(.16,.15,0);
        glVertex3f(.1,.15,0);
    glEnd();

    glLoadIdentity();

    glScalef(.5,.5,1);
    glTranslatef(1.5,1.2,0);

    glBegin(GL_LINE_LOOP);
        glVertex3f(0,0,0);
        glVertex3f(-.1,.15,0);
        glVertex3f(-.16,.15,0);
        glVertex3f(-.19,.25,0);
        glVertex3f(-.1,.25,0);
        glVertex3f(-.17,.35,0);
        glVertex3f(-.24,.37,0);
        glVertex3f(-.27,.45,0);
        glVertex3f(-.12,.45,0);
        glVertex3f(-.2,.55,0);
        glVertex3f(.2,.55,0);
        glVertex3f(.12,.45,0);
        glVertex3f(.27,.45,0);
        glVertex3f(.24,.37,0);
        glVertex3f(.17,.37,0);
        glVertex3f(.1,.25,0);
        glVertex3f(.19,.25,0);
        glVertex3f(.16,.15,0);
        glVertex3f(.1,.15,0);
    glEnd();
    glLoadIdentity();


    glScalef(.5,.5,1);
    glTranslatef(-1.5,1.2,0);

    glBegin(GL_LINE_LOOP);
        glVertex3f(0,0,0);
        glVertex3f(-.1,.15,0);
        glVertex3f(-.16,.15,0);
        glVertex3f(-.19,.25,0);
        glVertex3f(-.1,.25,0);
        glVertex3f(-.17,.35,0);
        glVertex3f(-.24,.37,0);
        glVertex3f(-.27,.45,0);
        glVertex3f(-.12,.45,0);
        glVertex3f(-.2,.55,0);
        glVertex3f(.2,.55,0);
        glVertex3f(.12,.45,0);
        glVertex3f(.27,.45,0);
        glVertex3f(.24,.37,0);
        glVertex3f(.17,.37,0);
        glVertex3f(.1,.25,0);
        glVertex3f(.19,.25,0);
        glVertex3f(.16,.15,0);
        glVertex3f(.1,.15,0);
    glEnd();
    glLoadIdentity();


    glScalef(.5,.5,1);
    glTranslatef(-1.5,-1.2,0);

    glBegin(GL_LINE_LOOP);
        glVertex3f(0,0,0);
        glVertex3f(-.1,.15,0);
        glVertex3f(-.16,.15,0);
        glVertex3f(-.19,.25,0);
        glVertex3f(-.1,.25,0);
        glVertex3f(-.17,.35,0);
        glVertex3f(-.24,.37,0);
        glVertex3f(-.27,.45,0);
        glVertex3f(-.12,.45,0);
        glVertex3f(-.2,.55,0);
        glVertex3f(.2,.55,0);
        glVertex3f(.12,.45,0);
        glVertex3f(.27,.45,0);
        glVertex3f(.24,.37,0);
        glVertex3f(.17,.37,0);
        glVertex3f(.1,.25,0);
        glVertex3f(.19,.25,0);
        glVertex3f(.16,.15,0);
        glVertex3f(.1,.15,0);
    glEnd();
    glLoadIdentity();


    glScalef(.5,.5,1);
    glTranslatef(1.5,-1.2,0);

    glBegin(GL_LINE_LOOP);
        glVertex3f(0,0,0);
        glVertex3f(-.1,.15,0);
        glVertex3f(-.16,.15,0);
        glVertex3f(-.19,.25,0);
        glVertex3f(-.1,.25,0);
        glVertex3f(-.17,.35,0);
        glVertex3f(-.24,.37,0);
        glVertex3f(-.27,.45,0);
        glVertex3f(-.12,.45,0);
        glVertex3f(-.2,.55,0);
        glVertex3f(.2,.55,0);
        glVertex3f(.12,.45,0);
        glVertex3f(.27,.45,0);
        glVertex3f(.24,.37,0);
        glVertex3f(.17,.37,0);
        glVertex3f(.1,.25,0);
        glVertex3f(.19,.25,0);
        glVertex3f(.16,.15,0);
        glVertex3f(.1,.15,0);
    glEnd();
    glLoadIdentity();

    glFlush();
}


int main(int argc, char** argv)
 {
  glutInit(&argc, argv);
  glutCreateWindow("OpenGL Setup Test");
  glutInitWindowSize(320, 320);
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
