#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdio.h>
using namespace std;

void myInit (void)
   {
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,400.0,0.0,400.0);
   }

void setPixel(GLint x,GLint y)
   {
    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
   }

void Line()
   {
    int x0=0,y0=0,xn=300,yn=500,x,y;
    int dx,dy;
    int pk;
    int k;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(-6,0,0);
    setPixel(x0,y0);
    dx=xn-x0;
    dy=yn-y0;
    pk=2*dy-dx;
    x=x0;
    y=y0;

    for(k=0;k<dx-1; ++k)
        {
         if(pk<0)

        {
          pk=pk+2*dy;
        }
     else
        {
         pk=pk+2*dy-2*dx;
        ++y;
        }
        ++x;
        setPixel(x,y);
        }
        glFlush();
}

 main (int argc,char** argv)
 {
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(640,480);
  glutInitWindowPosition(150,100);
  glutCreateWindow("Bresenham Line");
  myInit();
  glutDisplayFunc(Line);
  glutMainLoop();
  return 0;
 }
