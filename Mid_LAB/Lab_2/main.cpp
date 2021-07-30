#include <windows.h>
#include <GL/glut.h>

void initGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(-0.5f,  0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.5f, -2.0f);
    glVertex2f(-0.5f, -2.0f);
    glVertex2f(-0.5f,  0.4f);
    glVertex2f(0.5f, 0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.15f, -2.0f);
    glVertex2f(-0.15f, -2.0f);
    glVertex2f(-0.15f,  0.2f);
    glVertex2f(0.15f, 0.2f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.20f, -0.21f);
    glVertex2f(-0.4f, -0.21f);
    glVertex2f(-0.4f, 0.0f);
    glVertex2f(-0.20f, 0.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.20f, -0.21f);
    glVertex2f(0.4f, -0.21f);
    glVertex2f(0.4f,  0.0f);
    glVertex2f(0.20f, 0.0f);
    glEnd();



    glFlush();
}
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Task 1");
    glutInitWindowSize(640, 320);
    glutInitWindowPosition(50,50);
    glutDisplayFunc(display);
    initGL();
    glutMainLoop();
    return 0;
}
