#include <windows.h>
#include <GL/glut.h>
#include<math.h>

using namespace std;
int angle = 12;
static GLfloat spin1 = 0.0;
static GLfloat spin2 = 0.0;
static GLfloat spin_speed = 1.0;
float spin_x1 = 0;
float spin_y1 = 1;
float spin_z1 = 0;
float spin_x2 = 0;
float spin_y2 = 1;
float spin_z2= 0;
float translate_x1 = 0.0;
float translate_y1 = 0.0;
float translate_z1 = -30.0;
float translate_x2 = 0.0;
float translate_y2 = 0.0;
float translate_z2 = -30.0;

void square(void){
    glBegin(GL_LINE_LOOP);

        glVertex3f(0, 0, 0);

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
}

void f2 (void){
    square();
    glRotatef(90, 0, 0, 0.1);
    square();
    glRotatef(180, 0, 0, 0.1);
    square();
    glRotatef(270, 0, 0, 0.1);
    square();
}

void display (void){
glClearColor(0.0, 0.0, 0.0, 1.0);
glClear (GL_COLOR_BUFFER_BIT);
glLoadIdentity();
glTranslatef(translate_x1, translate_y1, translate_z1);

gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
glPushMatrix();
glRotatef(angle,0.0, 0.0, 1.0);
f2();
glPopMatrix();

glFlush();
angle ++;
}

void setSpin1(float x, float y, float z)
{
    spin_x1 = x;
    spin_y1 = y;
    spin_z1 = z;
}
void reset1()
{
    spin_x1 = 0;
    spin_y1 = 1;
    spin_z1 = 0;
    translate_x1 = 0.0;
    translate_y1 = 0.0;
    translate_z1 = -30.0;
    spin_speed = 1.0;
}

//custom functions ends
void reshape(int w,int h)

{
    glViewport(0,0, (GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(100.0f, (GLfloat)w/(GLfloat)h, 1.0f, 100.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
void spinDisplay1(void)
{
    spin1=spin1+spin_speed;
    if(spin1>360.0)
    {
        spin1=spin1-360.0;
    }
    glutPostRedisplay();

}
void spinDisplayReverse1(void)
{
    spin1=spin1-spin_speed;
    if(spin1<360.0)
    {
        spin1=spin1+360.0;
    }
    glutPostRedisplay();
}
void mouse(int button,int state,int x,int y)
{
    switch(button)
    {

        case GLUT_LEFT_BUTTON:
            {
                spin_speed += 0.1f;
            glutIdleFunc(spinDisplay1);
            break;
            }
        case GLUT_RIGHT_BUTTON:
            {
            if(spin_speed!=1.0)
               {
                spin_speed -= 0.1f;
                }
                else if(spin_speed==1.0){
                glutIdleFunc(NULL);
                }
            }
            break;
        default:
            break;
    }
}
void keyboard(unsigned char key, int x, int y)
{
//spin

    if(key=='x')
    {
        setSpin1(1.0,0.0,0.0);
        glutPostRedisplay();
    }
    else if(key=='y')
    {
        setSpin1(0.0,1.0,0.0);
        glutPostRedisplay();
    }
    else if(key=='z')
    {
        setSpin1(1.0,1.0,1.0);
        glutPostRedisplay();
    }

    //spin
    //zoom
    else if(key=='i')
    {
        translate_z1++;
        glutPostRedisplay();
    }
    else if(key=='o')

    {
        translate_z1--;
        glutPostRedisplay();

    }

    else if(key=='r')
    {
        reset1();
        glutPostRedisplay();

    }
}

int main(int argc, char** argv) {

  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE);

  glutInitWindowSize(700, 700);
  glutInitWindowPosition(100, 100);
  glutCreateWindow("OpenGL Window");
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  glutMouseFunc(mouse);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 0;

}
