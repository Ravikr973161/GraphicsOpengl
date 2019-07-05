// windmillRV123.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<GL/glut.h>

static GLfloat spin=360.0;/*fan rotation variable*/
static GLfloat u=0.45;
static GLfloat v=0.45;
static GLfloat w=0.45;
static GLfloat b=0.45;
static GLfloat c=0.00;
static GLfloat d=0.00;
static GLfloat e=0.00;
static GLfloat a=-40; /*clouds translation variable*/
static int z=0;
GLfloat x=0;
GLfloat y=0;
int m,n;
void declare(char *string)
{
     while(*string)
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, *string++);
}
void init(void)
{
	glClearColor(1.0,1.0,1.0,1.0);
	glShadeModel(GL_FLAT);
}

void title1()
{
	glColor3f(0.0,0.0,1.0);
	 glRasterPos2f(-22,25);
     glColor3f(0.3,0.1,0.4);
	 glRasterPos2f(-15,0.0);
    declare("Ravi K R 4al16cs076 and Shashank 4al16cs076");
	glRasterPos2f(-15,-5.0);
      declare("Alvas institue of Engineering And Technalogy");
	  glRasterPos2f(-15,-8.0);
	 declare("Mijar,Modabidri,Mangluru");

}
void TreeBase()
{
	glPushMatrix();/*1st Tree*/
	glLoadIdentity();
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(28.0,-20.0,2.0);
	glVertex3f(29.0,-20.0,3.0);
	glVertex3f(29.0,-2.0,4.0);
	glVertex3f(28.0,-2.0,2.0);
	glEnd();
	glPopMatrix();


	glPushMatrix();/*2st Tree*/
	glLoadIdentity();
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(16.1,-10.0,2.0);
	glVertex3f(16.9,-10.0,3.0);
	glVertex3f(16.9,8.0,4.0);
	glVertex3f(16.1,8.0,2.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();/*3st Tree*/
	glLoadIdentity();
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(16.1-30,-10.0+5,2.0);
	glVertex3f(16.9-30,-10.0+5,3.0);
	glVertex3f(16.9-30,8.0,4.0);
	glVertex3f(16.1-30,8.0,2.0);
	glEnd();
	glPopMatrix();

	glPushMatrix();/*4th Tree*/
	glLoadIdentity();
	glColor3f(0.2,0.2,0.2);
	glBegin(GL_POLYGON);
	glVertex3f(28.0-30,-20.0+5,2.0);
	glVertex3f(29.0-30,-20.0+5,3.0);
	glVertex3f(29.0-30,-2.0,4.0);
	glVertex3f(28.0-30,-2.0,2.0);
	glEnd();
	glPopMatrix();

}
void background()
{
	glColor3f(0.0,1,0.0);
	glBegin(GL_POLYGON);//green ground
	glVertex2i(-250.0,-250.0);
	glVertex2i(250.0,-250.0);
	glVertex2i(250.0,0.0);
	glVertex2i(-250.0,0.0);
	glEnd();
	glColor3f(0 ,0,0.9);
	glBegin(GL_POLYGON);//mid night blue sky
	glVertex2i(-250.0,0.0);
	glVertex2i(-250.0,250.0);
	glVertex2i(250.0,250.0);
	glVertex2i(250.0,0.0);
	glEnd();

}
void fan1()
{
	glPushMatrix();
	glLoadIdentity();
	glColor3f(1,1,1);
	glTranslatef (-8.0,20.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (8.0,-20.0, -2.0);
	glBegin(GL_TRIANGLES);/*1st fan*/
	glVertex3f(-8.0,20.0,2.0);
	glVertex3f(-12.0,16.0,3.0);
	glVertex3f(-12.0,18.0,4.0);
	glVertex3f(-8.0,20.0,2.0);
	glVertex3f(-4.0,24.0,3.0);
	glVertex3f(-4.0,22.0,4.0);
	glEnd();
	glPopMatrix();
}
void fan2()
{
	glPushMatrix();
	glLoadIdentity();
	glTranslatef (-20.0, 20.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (20.0, -20.0,-2.0);
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);/*2nd fan*/
	glVertex3f(-20.0,20.0,2.0);
	glVertex3f(-25.0,17.0,3.0);
	glVertex3f(-25.0,19.0,4.0);
	glVertex3f(-20.0,20.0,2.0);
	glVertex3f(-15.0,23.0,3.0);
	glVertex3f(-15.0,21.0,4.0);
	glEnd();
	glPopMatrix();
}
void fan3()
{
	glPushMatrix();
	glLoadIdentity();
	glTranslatef (-32.0, 20.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (32.0, -20.0, -2.0);
	glColor3f(1,1,1);
	glBegin(GL_TRIANGLES);/*2nd fan*/
	glVertex3f(-32.0,20.0,2.0);
	glVertex3f(-36.0,16.0,3.0);
	glVertex3f(-36.0,18.0,4.0);
	glVertex3f(-32.0,20.0,2.0);
	glVertex3f(-28.0,24.0,3.0);
	glVertex3f(-28.0,22.0,4.0);
	glEnd();
	glPopMatrix();
}
void fan4()
{
	glPushMatrix();
	glLoadIdentity();
	glColor3f(1,1,1);
	glTranslatef (28.0,25.0, 2.0);/*rotation about fixed point*/
	glRotatef(spin,0.0,0.0,1.0);
	glTranslatef (-28.0,-25.0, -2.0);
	glBegin(GL_TRIANGLES);/*4th fan*/
	glVertex3f(28.0,25.0,2.0);
	glVertex3f(24.0,21.0,3.0);
	glVertex3f(24.0,23.0,4.0);
	glVertex3f(28.0,25.0,2.0);
	glVertex3f(32.0,29.0,3.0);
	glVertex3f(32.0,27.0,4.0);
	glEnd();
	glPopMatrix();
}



void road()
{
	glColor3f (0, 0,0);
	glBegin(GL_POLYGON);
	glVertex2f(-1,0);
	glVertex2f(4,0);
	glVertex2f(43,-39);
	glVertex2f(37,-40);
	glEnd();
}
void branches()
{
    glPushMatrix();
	glColor3f (0.8, 1.0,0);
    glTranslatef(18, 14.0, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();
    glPushMatrix();
	glColor3f (0.8, 1,0);
    glTranslatef(15, 14.0, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();
    glPushMatrix();
	glColor3f (0.8, 1,0);
    glTranslatef(18, 10.0, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();
    glPushMatrix();
	glColor3f (0.8, 1,0);
    glTranslatef(15, 10.0, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();
    glPushMatrix();
	glColor3f (0.8, 1,0);
    glTranslatef(16.5, 16.5, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();


}
void branches1()
{
    glPushMatrix();
	glColor3f (0.8, 1,0);
    glTranslatef(31, -1.0, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();
    glPushMatrix();
	glColor3f (0.8, 1,0);
    glTranslatef(26, -1.0, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();
    glPushMatrix();
	glColor3f (0.8, 1,0);
    glTranslatef(30, 3.0, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();
    glPushMatrix();
	glColor3f (0.8, 1,0);
    glTranslatef(27, 3.0, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();
    glPushMatrix();
	glColor3f (0.8, 1,0);
    glTranslatef(28.5, 5.5, 0);
    glutSolidSphere (3,50,50);
    glPopMatrix();


}
void clouds()
{
	glPushMatrix();
	glColor3f (0.4, 0.7,0.9);
   glLoadIdentity ();             /* clear the matrix */
           /* viewing transformation  */
   glTranslatef(a+1, 40.0, -9.0);
   glScalef (2.0, 1.0, 1.0);  /* modeling transformation */
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a-2.0,40.0, -9.0);
   glScalef (2.0, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+7.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a-7.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+18.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+25.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+36.0,40.0, -9.0);
   glScalef (3.0, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+50.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glLoadIdentity();
   glTranslatef(a+56.0,40.0, -9.0);
   glScalef (2, 1.0, 1.0);
   glutSolidSphere (2.0,50,56);
   glPopMatrix();
}
void roof(GLint rux,GLint ruy,GLint rdx,GLint rdy)
{
	//glPushMatrix();
		glPointSize(5);
	glColor3f(0,0,0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(rux,ruy);
	glVertex2i(rdx,rdy);

	glEnd();
	//glPopMatrix();
}
void hut(GLint rux,GLint ruy,GLint rdx,GLint rdy)
{
	GLint blx=rdx,bly=rdy-9,brx=rdx+10,bry=rdy-9,kx=rdx-8,ky=rdy+1;
	GLfloat i;
	glColor3f(1,0,0);

	glBegin(GL_POLYGON);	/* front wall */
	glVertex2i(rdx,rdy);//roof left
	glVertex2i(rdx+10,rdy);
	
	glVertex2i(rux+10,ruy);
	glVertex2i(rux,ruy);
	glEnd();

	glColor3f(0.3,0.25,0.1);
	glBegin(GL_POLYGON);	/* front wall */
	glVertex2i(rdx,rdy);//roof left
	glVertex2i(rdx+10,rdy);//roof right
	glVertex2i(brx,bry);//base right
	glVertex2i(blx,bly);//base left
	glEnd();


	glColor3f(0.3,0.15,0.1);
	glBegin(GL_POLYGON);/* side wall */
	glVertex2i(rux,ruy);//roof up
	glVertex2i(kx,ky);//bacK
	glVertex2i(kx,ky-6);//bacK base
	glVertex2i(blx,bly);
	glVertex2i(rdx,rdy);
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* window */
	glVertex2i(kx+2,ky-2.5);//top left
	glVertex2i(kx+2,ky-5.5);//bottom left
	glVertex2i(blx-3,bly+3.5);//bottom right
	glVertex2i(blx-3,bly+6.9);//top right
	glEnd();
	glColor3f(v,v,w);
	glBegin(GL_POLYGON);/* door */
	glVertex2i(blx+3.5,bly+5);//top left
	glVertex2i(blx+3.5,bly);//bottom left
	glVertex2i(brx-3.5,bry);//bottom right
	glVertex2i(brx-3.5,bry+5);//top right
	glEnd();
}
void fanpole1()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-8.1,20.0);
	glVertex2f(-7.9,20.0);
	glVertex2f(-8.5,0.0);
	glVertex2f(-7.5,0.0);
	glEnd();
}
void fanpole2()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-20.1,20.0);
	glVertex2f(-19.9,20.0);
	glVertex2f(-20.5,0.0);
	glVertex2f(-19.5,0.0);
	glEnd();
}
void fanpole3()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-32.1,20.0);
	glVertex2f(-31.9,20.0);
	glVertex2f(-32.5,0.0);
	glVertex2f(-31.5,0.0);
	glEnd();
}

void fanpole4()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(28,25.0);
	glVertex2f(27.9,25.0);
	glVertex2f(28.5,0.0);
	glVertex2f(27.5,0.0);
	glEnd();
}


void fanhouse()
{   GLint ax=-30,ay=-3;
	glColor3f(0.7,0.5,0.3);
	glBegin(GL_POLYGON);//from tip(anti clkwise)
	glVertex2i(ax,ay);//a
	glVertex2i(ax-3,ay-2);//b
	glVertex2i(ax-3,ay-9);//c
	glVertex2i(ax+3,ay-9);//d
	glVertex2i(ax+3,ay-2);//e
	glEnd();
	glColor3f(0.0,0.3,0.3);
	glBegin(GL_POLYGON);//roof (from a)
	glVertex2i(ax,ay+3);//a
	glVertex2i(ax-4,ay-3);//b
	glVertex2i(ax+4,ay-3);//e
	glEnd();
	glColor3f(0.3,0.15,0.1);
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-31.9,-18.0);
	glVertex2f(-32.1,-18.0);
	glVertex2f(-31.5,-10.0);
	glVertex2f(-32.5,-10.0);

	glEnd();
	glBegin(GL_TRIANGLE_STRIP);
	glVertex2f(-29.1,-18.0);
	glVertex2f(-28.9,-18.0);
	glVertex2f(-29.5,-10.0);
	glVertex2f(-28.5,-10.0);
	glEnd();
	glColor3f(0.0,0.3,0.3);

	glColor3f(0,0,d);
	glEnable(GL_LINE_STIPPLE);
	glLineStipple(1,0x00FF);

	glColor3f(0,0,e);
	glBegin(GL_LINES);
	glVertex2f(28.5,19.0);
	glEnd();
	glDisable(GL_LINE_STIPPLE);
	glEnd();
}



void mykey(unsigned char key,int m,int n)
{
    if(key=='w')	y+=.1,x-=0.1;
	if(key=='s')    y-=.1,x+=0.1;
	glutPostRedisplay();
}
void display(void)
{

	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	if(z<50)
	{
		for(z=0;z<=3000;z++)
		{
			title1();
			glutPostRedisplay();
			glutSwapBuffers();
			glFlush();
		}
	}
	else
	{

	background();
	fanhouse();
	road();
	hut(-29,-23,-24,-33);//
	hut(0,-11,5,-21);
	clouds();

	//TreeBase();

	fanpole1();
	fanpole2();
	fanpole3();
	fanpole4();

	branches();
	branches1();
	fan1();
	fan2();
	fan3();
	fan4();

	glPushMatrix();
	glTranslatef(-30,-5,0);
	//branches();
	//branches1();
	glPopMatrix();
			

	glPushMatrix();
	
	glPopMatrix();

	glutSwapBuffers();
	glFlush();
	}
}

void spinclockwise(void)
{
	w=0.3;u=0;v=1;b=0.5;c=1;d=1;e=0;
	 a=a+0.1;
          if(a>40)
	 a-=100.0;
	 spin=spin-1.0;
	 if(spin<0)
	spin=spin+360.0;

	glutPostRedisplay();

 }

void anticlockwise(void )
{
	u=0;w=.3;v=1;b=0.5;c=1;d=1,e=0;
	 if(a==40)
	 a=40;
	 a=a-0.1;
         if(a<-100)
	 a+=100.0;
         if(spin==360.0)
	spin=spin-360;
	spin=spin+1.0;
	if(spin>360.0)
         spin=spin-360.0;
	glutPostRedisplay();

}
void spinclockwise1(void)
{
	u=0;w=.4;v=1;b=1;c=0.0;d=e=1;
	 a=a+0.3;
	if(a>40)
	 a-=100.0;
	spin=spin-10.0;
	if(spin<0)
          spin=spin+360.0;
	glutPostRedisplay();
}
void anticlockwise1(void )
{
	u=0;w=.4;v=1;b=1;c=0.0;d=e=1;
	 if(a==40)
	 a=40;
	  a=a-0.3;
   if(a<-100)
	   a+=100.0;
   if(spin==360.0)
	   spin=spin-360;
	spin=spin+10.0;
	if(spin>360.0)
		spin=spin-360.0;
	glutPostRedisplay();
}
void reshape(int w, int h)
{
glViewport(0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-35.0, 35.0, -45.0, 45.0, -20.0, 20.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
}
void menu(int id )
{
	switch(id)
	{
	case 1: u=v=w=b=0.45;c=d=e=1;
			glutIdleFunc(display);
			break;
	case 2: glutIdleFunc(spinclockwise);
			break;
	case 3: glutIdleFunc(anticlockwise);
			break;
	case 4: glutIdleFunc(spinclockwise1);
			break;
	case 5: glutIdleFunc(anticlockwise1);
			break;
	case 6:exit(0);
	}
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
	glutInitWindowSize(1200,1200);
	glutInitWindowPosition(100,100);
	glutCreateWindow("WIND TURBINE");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(mykey);
	glutCreateMenu(menu);
	glutAddMenuEntry("No Wind",1);
	glutAddMenuEntry("Wind CW",2);
	glutAddMenuEntry("Wind ACW",3);
	glutAddMenuEntry ("Fast Wind CW",4);
	glutAddMenuEntry("Fast Wind ACW",5);
	glutAddMenuEntry("Quit",6);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
	return 0;
}

