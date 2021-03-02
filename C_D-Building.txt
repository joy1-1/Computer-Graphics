#include <windows.h>
#include <GL/glut.h>
#include<GL/glut.h>
#include<math.h>>
#include<cstdio>
# define PI 3.1416


GLfloat position=0.0f;   //Moving animation
GLfloat speed=0.01f;

void update(int value)
{
    GLfloat speed=0.09f;
    if (position>1.0)
        position= -1.0f;
    position +=speed;
    glutPostRedisplay();
    glutTimerFunc(100,update,0);
}

void init()
{
    glClearColor(0.0f,0.0f,0.0f,1.0f);  //for moving function
}


void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_QUADS);  //background
    glColor3ub(210, 250, 249);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,1.0);
    glEnd();


    glBegin(GL_QUADS);  //road
    glColor3ub(102, 97, 96);
    glVertex2f(-1.0,0.1);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,0.1);
    glEnd();

    glLineWidth(14);
    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,0.09);
    glVertex2f(1.0,0.09);
    glEnd();


    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glEnd();



    glLineWidth(7);
    glBegin(GL_LINES);      //Road  midle line yellow
    glColor3ub(251, 229, 0);
    glVertex2f(-0.9,-0.13);
    glVertex2f(-0.7,-0.13);
    glVertex2f(-0.5,-0.13);
    glVertex2f(-0.3,-0.13);
    glVertex2f(-0.1,-0.13);
    glVertex2f(0.1,-0.13);
    glVertex2f(0.3,-0.13);
    glVertex2f(0.5,-0.13);
    glVertex2f(0.7,-0.13);
    glVertex2f(0.9,-0.13);
    glEnd();

      glBegin(GL_QUADS);  //field
    glColor3ub(14, 101, 24);
    glVertex2f(-1.0,-0.366);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.366);
    glEnd();



    glBegin(GL_QUADS);    //D
    glColor3ub(135,206,250);
    glVertex2f(0.0,0.85);
    glVertex2f(0.0,0.11);
    glVertex2f(0.84,0.11);
    glVertex2f(0.84,0.85);
    glEnd();



    glBegin(GL_QUADS);  //side building1
    glColor3ub(220,220,220);
    glVertex2f(0.84,0.8);
    glVertex2f(0.84,0.11);
    glVertex2f(0.91,0.11);
    glVertex2f(0.91,0.8);
    glEnd();


    glBegin(GL_QUADS);  //side building2
    glColor3ub(135,206,250);
    glVertex2f(-0.15,0.8);
    glVertex2f(-0.15,0.11);
    glVertex2f(0.0,0.11);
    glVertex2f(0.0,0.85);
    glEnd();

     glBegin(GL_QUADS);  //side building2
    glColor3ub(192,192,192);
    glVertex2f(-0.15,0.8);
    glVertex2f(-0.15,0.77);
    glVertex2f(0.0,0.82);
    glVertex2f(0.0,0.85);
    glEnd();

     glBegin(GL_QUADS);  //side building2
    glColor3ub(192,192,192);
    glVertex2f(-0.15,0.8);
    glVertex2f(-0.15,0.11);
    glVertex2f(-0.14,0.11);
    glVertex2f(-0.14,0.8);
    glEnd();

      glBegin(GL_QUADS);  //side building2
    glColor3ub(192,192,192);
    glVertex2f(-0.06,0.8);
    glVertex2f(-0.06,0.64);
    glVertex2f(0.0,0.67);
    glVertex2f(0.0,0.85);
    glEnd();





    glBegin(GL_QUADS);    //Dline 1
    glColor3ub(102, 97, 96);
    glVertex2f(0.05,0.12);
    glVertex2f(0.05,0.11);
    glVertex2f(0.84,0.11);
    glVertex2f(0.84,0.12);
    glEnd();

     glBegin(GL_QUADS);    //Dlne 2
    glColor3ub(175,238,238);
    glVertex2f(0.0,0.18);
    glVertex2f(0.0,0.12);
    glVertex2f(0.98,0.12);
    glVertex2f(0.98,0.18);
    glEnd();

    glBegin(GL_QUADS);    //Dline 3
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.2);
    glVertex2f(0.0,0.18);
    glVertex2f(0.84,0.18);
    glVertex2f(0.84,0.2);
    glEnd();

    glBegin(GL_QUADS);    //Dline 4
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.27);
    glVertex2f(0.0,0.25);
    glVertex2f(0.84,0.25);
    glVertex2f(0.84,0.27);
    glEnd();

    glBegin(GL_QUADS);    //Dline 5
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.34);
    glVertex2f(0.0,0.32);
    glVertex2f(0.84,0.32);
    glVertex2f(0.84,0.34);
    glEnd();

    glBegin(GL_QUADS);    //Dline 6
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.41);
    glVertex2f(0.0,0.39);
    glVertex2f(0.84,0.39);
    glVertex2f(0.84,0.41);
    glEnd();

    glBegin(GL_QUADS);    //Dline 7
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.48);
    glVertex2f(0.0,0.46);
    glVertex2f(0.84,0.46);
    glVertex2f(0.84,0.48);
    glEnd();

    glBegin(GL_QUADS);    //Dline 8
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.55);
    glVertex2f(0.0,0.53);
    glVertex2f(0.84,0.53);
    glVertex2f(0.84,0.55);
    glEnd();

    glBegin(GL_QUADS);    //Dline 9
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.62);
    glVertex2f(0.0,0.60);
    glVertex2f(0.84,0.60);
    glVertex2f(0.84,0.62);
    glEnd();

    glBegin(GL_QUADS);    //Dline 10
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.85);
    glVertex2f(0.0,0.67);
    glVertex2f(0.84,0.67);
    glVertex2f(0.84,0.85);
    glEnd();

    glBegin(GL_QUADS);    //Dline 11
    glColor3ub(102, 97, 96);
    glVertex2f(0.09,0.69);
    glVertex2f(0.09,0.72);
    glVertex2f(0.84,0.72);
    glVertex2f(0.84,0.69);
    glEnd();

    glBegin(GL_QUADS);    //Dline 12
    glColor3ub(102, 97, 96);
    glVertex2f(0.09,0.77);
    glVertex2f(0.09,0.74);
    glVertex2f(0.84,0.74);
    glVertex2f(0.84,0.77);
    glEnd();

      glBegin(GL_QUADS);    //Dline 13
    glColor3ub(102, 97, 96);
    glVertex2f(0.09,0.82);
    glVertex2f(0.09,0.79);
    glVertex2f(0.84,0.79);
    glVertex2f(0.84,0.82);

    glBegin(GL_QUADS);    //Dline 14
    glColor3ub(192,192,192);
    glVertex2f(0.0,0.85);
    glVertex2f(0.0,0.11);
    glVertex2f(0.04,0.11);
    glVertex2f(0.04,0.85);
    glEnd();

     glBegin(GL_QUADS);    //Dl5
    glColor3ub(192,192,192);
    glVertex2f(0.8,0.85);
    glVertex2f(0.8,0.11);
    glVertex2f(0.84,0.11);
    glVertex2f(0.84,0.85);
    glEnd();



    glBegin(GL_QUADS);  //side building1
    glColor3ub(220,220,220);
    glVertex2f(0.84,0.82);
    glVertex2f(0.84,0.11);
    glVertex2f(0.97,0.11);
    glVertex2f(0.97,0.82);
    glEnd();


    glBegin(GL_QUADS);    //Dline 16
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.27);
    glVertex2f(0.86,0.22);
    glVertex2f(0.89,0.22);
    glVertex2f(0.89,0.27);
    glEnd();

    glBegin(GL_QUADS);    //Dline 17
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.35);
    glVertex2f(0.86,0.3);
    glVertex2f(0.89,0.3);
    glVertex2f(0.89,0.35);
    glEnd();

     glBegin(GL_QUADS);    //Dline 18
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.43);
    glVertex2f(0.86,0.38);
    glVertex2f(0.89,0.38);
    glVertex2f(0.89,0.43);
    glEnd();

     glBegin(GL_QUADS);    //Dline 19
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.43);
    glVertex2f(0.86,0.41);
    glVertex2f(0.89,0.41);
    glVertex2f(0.89,0.43);
    glEnd();

    glBegin(GL_QUADS);    //Dline 20
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.51);
    glVertex2f(0.86,0.46);
    glVertex2f(0.89,0.46);
    glVertex2f(0.89,0.51);
    glEnd();

    glBegin(GL_QUADS);    //Dline 21
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.59);
    glVertex2f(0.86,0.54);
    glVertex2f(0.89,0.54);
    glVertex2f(0.89,0.59);
    glEnd();

      glBegin(GL_QUADS);    //Dline 22
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.67);
    glVertex2f(0.86,0.62);
    glVertex2f(0.89,0.62);
    glVertex2f(0.89,0.67);
    glEnd();

    glBegin(GL_QUADS);    //Dline 23
    glColor3ub(102, 97, 96);
    glVertex2f(0.86,0.75);
    glVertex2f(0.86,0.7);
    glVertex2f(0.89,0.7);
    glVertex2f(0.89,0.75);
    glEnd();

    glBegin(GL_QUADS);    //Dline 24
    glColor3ub(154, 10, 10);
    glVertex2f(0.04,0.18);
    glVertex2f(0.04,0.11);
    glVertex2f(0.06,0.11);
    glVertex2f(0.06,0.18);
    glEnd();

    glBegin(GL_QUADS);    //Dline 24
    glColor3ub(154, 10, 10);
    glVertex2f(0.82,0.18);
    glVertex2f(0.82,0.11);
    glVertex2f(0.84,0.11);
    glVertex2f(0.84,0.18);
    glEnd();

    glBegin(GL_QUADS);    //Dline 24
    glColor3ub(154, 10, 10);
    glVertex2f(0.42,0.18);
    glVertex2f(0.42,0.11);
    glVertex2f(0.44,0.11);
    glVertex2f(0.44,0.18);
    glEnd();

    //cbuilding field

    glBegin(GL_QUADS);    //Dline 24
    glColor3ub(14, 91, 4);
    glVertex2f(-1.0,0.2);
    glVertex2f(-1.0,0.11);
    glVertex2f(-0.3,0.11);
    glVertex2f(-0.3,0.2);
    glEnd();

     glBegin(GL_TRIANGLES);
    glColor3ub(14, 91, 4);
    glVertex2f(-0.3,0.11);
    glVertex2f(-0.3,0.2);
     glVertex2f(-0.15,0.11);

    glEnd();

    //DIMmmmmmmmmmmmmmmm road

     glBegin(GL_QUADS);    //Dline 24
    glColor3ub(102, 97, 96);
    glVertex2f(-0.65,0.2);
    glVertex2f(-0.65,0.11);
    glVertex2f(-0.45,0.11);
    glVertex2f(-0.45,0.22);

    glEnd();

     glBegin(GL_QUADS);    //Dline 24
    glColor3ub(192,192,192);
    glVertex2f(-0.65,0.35);
    glVertex2f(-0.65,0.2);
    glVertex2f(-0.45,0.2);
    glVertex2f(-0.45,0.35);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);      //Road line
    glColor3ub(135,206,250);
    glVertex2f(-0.63,0.32);
    glVertex2f(-0.63,0.2);
    glVertex2f(-0.6,0.32);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.57,0.32);
    glVertex2f(-0.57,0.2);
    glVertex2f(-0.56,0.32);
    glVertex2f(-0.56,0.2);
    glVertex2f(-0.54,0.32);
    glVertex2f(-0.54,0.2);
    glVertex2f(-0.53,0.32);
    glVertex2f(-0.53,0.2);
    glVertex2f(-0.50,0.32);
    glVertex2f(-0.50,0.2);
    glVertex2f(-0.47,0.32);
    glVertex2f(-0.47,0.2);
    glEnd();


    //dimmmmmmmmmmmmmmmmmmmmm

    int i;         // Clock Inside part

    GLfloat x=-0.55f; GLfloat y=.52f; GLfloat radius =.23f;
    int triangleAmount = 100;


    GLfloat twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub( 192,192,192 );
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
   // glFlush();

     int j;         // clock outside circle

    GLfloat x1=-0.55f; GLfloat y1=.52f; GLfloat radius1 =.20f;
    int triangleAmount1 = 100;


    GLfloat twicePi1 = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub( 135,206,250 );
        glVertex2f(x1, y1);
        for(j = 0; j <= triangleAmount1;j++) {
            glVertex2f(
                    x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
                y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
            );
        }
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_LINES);      //dimm line
    glColor3ub(192,192,192);
    glVertex2f(-0.73,0.61);
    glVertex2f(-0.73,0.39);
    glVertex2f(-0.7,0.66);
    glVertex2f(-0.7,0.38);
    glVertex2f(-0.67,0.69);
    glVertex2f(-0.67,0.35);
    glVertex2f(-0.64,0.72);
    glVertex2f(-0.64,0.32);
    glVertex2f(-0.61,0.73);
    glVertex2f(-0.61,0.3);
    glVertex2f(-0.58,0.73);
    glVertex2f(-0.58,0.3);
    glVertex2f(-0.55,0.73);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.52,0.73);
    glVertex2f(-0.52,0.3);
    glVertex2f(-0.49,0.73);
    glVertex2f(-0.49,0.3);
    glVertex2f(-0.46,0.72);
    glVertex2f(-0.46,0.31);
    glVertex2f(-0.43,0.71);
    glVertex2f(-0.43,0.33);
    glVertex2f(-0.4,0.69);
    glVertex2f(-0.4,0.35);
    glVertex2f(-0.37,0.67);
    glVertex2f(-0.37,0.37);
    glEnd();

    glLineWidth(15);
    glBegin(GL_LINES);      //Road line
    glColor3ub(192,192,192);
    glVertex2f(-0.65,0.71);
    glVertex2f(-0.45,0.71);
    glVertex2f(-0.7,0.67);
    glVertex2f(-0.4,0.67);
    glVertex2f(-0.72,0.65);
    glVertex2f(-0.39,0.65);
    glVertex2f(-0.76,0.57);
    glVertex2f(-0.33,0.57);
     glVertex2f(-0.76,0.48);
    glVertex2f(-0.33,0.48);
     glVertex2f(-0.73,0.4);
    glVertex2f(-0.38,0.4);

    glEnd();

      glLineWidth(20);
    glBegin(GL_LINES);      //wall3
    glColor3ub(178, 114, 2);
    glVertex2f(-0.85,0.11);
    glVertex2f(-0.85,0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(9, 205, 9);
    glVertex2f(-0.95,0.3);
    glVertex2f(-0.75,0.3);
    glVertex2f(-0.85,0.5);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(9, 205, 9);
    glVertex2f(-0.93,0.4);
    glVertex2f(-0.76,0.4);
    glVertex2f(-0.85,0.6);
    glEnd();




glLoadIdentity();
    glPushMatrix();

    glPopMatrix();

                                            //******************88****************************************************************



glFlush();
}



int main(int argc, char** argv) {
glutInit(&argc, argv);
glutCreateWindow("OpenGL Setup Test");
 glutInitWindowPosition(50,50);
glutInitWindowSize(480, 480);
glutDisplayFunc(display);
init();
glutTimerFunc(100,update,0);
glutMainLoop();
return 0;
}
