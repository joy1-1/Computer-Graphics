#include <windows.h>
#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
#include<math.h>


int posx=0,posy=0;
int day = 1;        //1 for day ,0 for night

///tree

void tree()
{
///tree1
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

    glVertex3i(50, 350, 0);
    glVertex3i(70, 350, 0);


    glVertex3i(70, 500, 0);
    glVertex3i(50, 500, 0);

glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);

    glVertex3i(10, 500, 0);
    glVertex3i(110, 500, 0);


    glVertex3i(60, 600, 0);

glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15, 550, 0);
    glVertex3i(105, 550, 0);


    glVertex3i(60, 650, 0);



glEnd();

///tree2
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+100, 350, 0);
    glVertex3i(70+100, 350, 0);


    glVertex3i(70+100, 500, 0);
    glVertex3i(50+100, 500, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+100, 500, 0);
    glVertex3i(110+100, 500, 0);


    glVertex3i(60+100, 600, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+100, 550, 0);
    glVertex3i(105+100, 550, 0);


    glVertex3i(60+100, 650, 0);



glEnd();
///tree3
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1000, 350+100, 0);
    glVertex3i(70+1000, 350+100, 0);


    glVertex3i(70+1000, 500+100, 0);
    glVertex3i(50+1000, 500+100, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1000, 500+100, 0);
    glVertex3i(110+1000, 500+100, 0);


    glVertex3i(60+1000, 600+100, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1000, 550+100, 0);
    glVertex3i(105+1000, 550+100, 0);


    glVertex3i(60+1000, 650+100, 0);



glEnd();
///tree4
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1100, 350+200, 0);
    glVertex3i(70+1100, 350+200, 0);


    glVertex3i(70+1100, 500+200, 0);
    glVertex3i(50+1100, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1100, 500+200, 0);
    glVertex3i(110+1100, 500+200, 0);


    glVertex3i(60+1100, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1100, 550+200, 0);
    glVertex3i(105+1100, 550+200, 0);


    glVertex3i(60+1100, 650+200, 0);



glEnd();
///tree5
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+900, 350+200, 0);
    glVertex3i(70+900, 350+200, 0);


    glVertex3i(70+900, 500+200, 0);
    glVertex3i(50+900, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+900, 500+200, 0);
    glVertex3i(110+900, 500+200, 0);


    glVertex3i(60+900, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+900, 550+200, 0);
    glVertex3i(105+900, 550+200, 0);


    glVertex3i(60+900, 650+200, 0);

glEnd();


}
///river
void river()
{
    glColor3f(0.035, 0.50980, 0.956);
glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


glEnd();



}
//land
void land()
{
    glColor3f(0.5 ,1.0 ,0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}
///hill
void hill()
{
    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

     glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 620, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);



glEnd();

}


///house

void house()
{

///house1
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);

    glVertex3i(220, 350, 0);
    glVertex3i(380, 350, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(220, 450, 0);


glEnd();

glColor3f(0, 0, 1);
glBegin(GL_POLYGON);

    glVertex3i(200, 450, 0);
    glVertex3i(400, 450, 0);
    glVertex3i(300, 650, 0);



glEnd();


glColor3f(1,1,0);   //door1
glBegin(GL_POLYGON);

    glVertex3i(280, 350, 0);
    glVertex3i(320, 350, 0);
    glVertex3i(320, 450, 0);
    glVertex3i(280, 450, 0);


glEnd();
///house2
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);

    glVertex3i(220+200, 350+50, 0);
    glVertex3i(380+200, 350+50, 0);
    glVertex3i(380+200, 450+50, 0);
    glVertex3i(220+200, 450+50, 0);


glEnd();

glColor3f(1.444, .5, 0);
glBegin(GL_POLYGON);

    glVertex3i(200+200, 450+50, 0);
    glVertex3i(400+200, 450+50, 0);
    glVertex3i(300+200, 650+50, 0);



glEnd();


glColor3f(1,1,0);       //door 2
glBegin(GL_POLYGON);

    glVertex3i(280+200, 350+50, 0);
    glVertex3i(320+200, 350+50, 0);
    glVertex3i(320+200, 450+50, 0);
    glVertex3i(280+200, 450+50, 0);


glEnd();

}
//path

void path(){

glColor3f(0.50196, 0.25098, 0.0);
 glBegin(GL_POLYGON);
  glVertex3f(280, 350, 0.0);
  glVertex3f(320, 350, 0.0);
  glVertex3f(320, 300, 0.0);
  glVertex3f(280,300, 0.0);
 glEnd();



 glColor3f(0.50196, 0.25098, 0.0);
 glBegin(GL_POLYGON);
  glVertex3f(480, 400, 0.0);
  glVertex3f(520, 400, 0.0);
  glVertex3f(520, 300, 0.0);
  glVertex3f(480,300, 0.0);
 glEnd();


}







// sun

int rad,x,y,a,b,h;
bool SE,E;

void sun()
{

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
a=1000;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;
glBegin(GL_POLYGON);

glVertex3i(x+b,y+b,0);


if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
         glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }



}



glEnd();

glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
glBegin(GL_LINES);
glVertex3i(1000,1000,0);
glVertex3i(1000,950,0);


glEnd();



}

///boat


void boat()
{
    ///boat1
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10,150,0);
    glVertex3i(200,150,0);
    glVertex3i(170,100,0);
    glVertex3i(30,100,0);
    glEnd();
  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50,150,0);
    glVertex3i(50,220,0);
    glVertex3i(120,220,0);
    glVertex3i(170,150,0);
    glEnd();
    ///boat2
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10+200,150+50,0);
    glVertex3i(150+50+200,150+50,0);
    glVertex3i(120+50+200,100+50,0);
    glVertex3i(30+200,100+50,0);
    glEnd();
  glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(250,200,0);
    glVertex3i(370,200,0);
    glVertex3i(320,265,0);
    glVertex3i(250,265,0);
    glEnd();



}
//night
void night_effect()
{
     glColor3f(0 ,0 ,0);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 1200, 0);
    glVertex3i(0, 1200, 0);


glEnd();

}

//star
void star()
{
    //star1
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30, 1020, 0);
    glVertex3i(50, 1050, 0);
    glVertex3i(50, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70, 1020, 0);
    glVertex3i(50, 1100, 0);
    glVertex3i(50, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50, 1050, 0);
    glVertex3i(80, 1070, 0);
    glVertex3i(20, 1070, 0);
glEnd();

//star2
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+60+60, 1020+60, 0);
    glVertex3i(50+60+60, 1100+60, 0);
    glVertex3i(50+60+60, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+60+60, 1050+60, 0);
    glVertex3i(80+60+60, 1070+60, 0);
    glVertex3i(20+60+60, 1070+60, 0);
glEnd();
//star3
 glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120, 1020, 0);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(50+120+120, 1100, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120, 1020, 0);
    glVertex3i(50+120+120, 1100, 0);
    glVertex3i(50+120+120, 1050, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120, 1050, 0);
    glVertex3i(80+120+120, 1070, 0);
    glVertex3i(20+120+120, 1070, 0);
glEnd();
//star4
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);

    glVertex3i(30+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);

glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(70+120+120+120, 1020+60, 0);
    glVertex3i(50+120+120+120, 1100+60, 0);
    glVertex3i(50+120+120+120, 1050+60, 0);
glEnd();
glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3i(50+120+120+120, 1050+60, 0);
    glVertex3i(80+120+120+120, 1070+60, 0);
    glVertex3i(20+120+120+120, 1070+60, 0);
glEnd();

}
//moon
void moon()
{


glColor3f(1,1,1);


a=600;
b=1000;
x=0;
rad=50;
y=rad;
h=1-rad;

glVertex3i(x+a,y+b,0);


glBegin(GL_POLYGON);

glVertex3i(x+a,y+b,0);

if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

while(y>=x)
{

    if(SE)
    {

        h=h+5+2*(x-y);


        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}

x++;
y--;
glVertex3f(x+a, y+b ,0.0);

       glVertex3f(y+a, x+b, 0.0);
       glVertex3f(-y+a, x+b, 0.0);
       glVertex3f(-x+a, -y+b, 0.0);
       glVertex3f(-y+a, -x+b, 0.0);
       glVertex3f(y+a,-x+b , 0.0);
       glVertex3f(x+a, -y+b, 0.0);
       glVertex3f(x+a, y+b, 0.0);
         glVertex3f(-x+a, y+b, 0.0);
    }



    if(E)
    {

        h=h+3+2*x;
        if(h>=0)
{
    SE=true;
    E=false;
}
else

{
    E=true;
    SE=false;

}
x++;
glVertex3f(x+a, y+b,0.0);

       glVertex3i(y+a, x+b, 0.0);
      glVertex3i(-y+a, x+b, 0.0);
       glVertex3i(-x+a, -y+b, 0.0);
       glVertex3i(-y+a, -x+b, 0.0);
       glVertex3i(y+a,-x+b , 0.0);
       glVertex3i(x+a, -y+b, 0.0);
       glVertex3i(x+a, y+b, 0.0);
         glVertex3i(-x+a, y+b, 0.0);
    }

}

glEnd();

glColor3f(1, 1, 1);
glBegin(GL_LINES);
glVertex3i(601,980,0);
glVertex3i(601,950,0);
glVertex3i(600,980,0);
glVertex3i(600,950,0);



glEnd();


}

// cloud1


void cloud1()
{
    int i;

	GLfloat x=460; GLfloat y=980; GLfloat radius =40;
	int triangleAmount = 50;
	int PI=3.1416;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * sin(i *  twicePi / triangleAmount)),
			    y + (radius * cos(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=440; GLfloat b=992;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * sin(i *  twicePi / triangleAmount)),
			    b + (radius * cos(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=413; GLfloat d=980;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=430; GLfloat f=990;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=400; GLfloat h=995;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

//cloud2

void cloud2()
{
    int i;

	GLfloat x=165; GLfloat y=1110; GLfloat radius =40;
	int triangleAmount = 50;
	int PI=3.1416;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=170; GLfloat b=1075;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * sin(i *  twicePi / triangleAmount)),
			    b + (radius * cos(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=196; GLfloat d=1095;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * sin(i *  twicePi / triangleAmount)),
			    d + (radius * cos(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=210; GLfloat f=1085;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * sin(i *  twicePi / triangleAmount)),
			    f+ (radius * cos(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=400; GLfloat h=995;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))

			);

		}

	glEnd();



}


//cloud3

void cloud3()
{
    int i;

	GLfloat x=90; GLfloat y=910; GLfloat radius =40;
	int triangleAmount = 50;
	int PI=3.1416;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=110; GLfloat b=940;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=120; GLfloat d=910;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=135; GLfloat f=900;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * sin(i *  twicePi / triangleAmount)),
			    f+ (radius * cos(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=140; GLfloat h=920;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 217, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * sin(i *  twicePi / triangleAmount)),
			    h+ (radius * cos(i * twicePi / triangleAmount))

			);

		}

	glEnd();



}




void draw_object()     //draw call
{
    if(day==1)
    {
        land();
        hill();
        tree();
        river();
        house();
        path();




         sun();



        glPushMatrix();

        glTranslatef(posx,0,0);

            cloud1();
        cloud2();
        cloud3();


        boat();



          glPopMatrix();



    }
    else
    {

        night_effect();
        land();
        star();
        hill();
        tree();
        river();
        house();

        //sun();
        moon();
        glPushMatrix();
        glTranslatef(posx,0,0);

      boat();


        glPopMatrix();

    }
}


void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);



  draw_object();
  path();

glFlush();
}
void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{
    case 'n':
        day=0;
        display();
        break;
	case 'd':
        day=1;
        display();
        break;
        case 'N':
        day=0;
        display();
        break;
	case 'D':
        day=1;
        display();
        break;
	}

}
void update(int value) {


    if(posx>=1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    glutPostRedisplay();
	glutTimerFunc(10, update, 0);

}
void init(void)
{

glClearColor(0.619,0.933, 0.996, 1.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Village Scenario");


glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
glutTimerFunc(25, update, 0);

glutMainLoop();
return 0;
}
