// doreman.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include<windows.h>
#include <stdio.h>
#include <GL/glut.h>
#include<math.h>


void ano123(int x,int y,int r,int l,int t)
{

    float m;
    glBegin(GL_POLYGON);
    for( int angle = l; angle < t; angle ++ ){
    m=angle*3.142/180;
    glVertex2f( x+r*cos(m),y+r*sin(m));}
    glEnd();
}

void ano(int x,int y,int r,int l,int t)
{

    float m;
    glBegin(GL_LINE_STRIP);
    for( int angle = l; angle < t; angle ++ ){
    m=angle*3.142/180;
    glVertex2f( x+r*cos(m),y+r*sin(m));}
    glEnd();
}
void lines()
{
     glBegin(GL_LINES);
     glVertex2i(305,327);
    glVertex2i(305,250);
     glColor3f(1,0,0);
    glVertex2i(98,98);
	 glVertex2i(500,98);
     glEnd();

}

void line(int a,int b,int c,int d)
{
    glBegin(GL_LINES);
    glVertex2i(a,b);
    glVertex2i(c,d);
    glEnd();

}
void face()
{
    glPushMatrix();
    glScalef(1.0,1.0,1.0);
    glColor3f(0,0,1);
    ano(302,250,220,-43,224);
    glPopMatrix();
    glPushMatrix();
    glScalef(0.6,0.8,0);
    ano(210,210,220,98,228);
    glPopMatrix();
    glPushMatrix();
    glScalef(0.8,0.9,0);
    ano(320,210,220,-37,69);
    glPopMatrix();
}
void eyes()
{
    glPushMatrix();
    glColor3f(0,0,0);
    glScalef(1.1,1.0,1.0);
    ano(270,400,35,0,360);
    ano(340,400,35,0,360);
    glColor3f(1,0,0);
    ano123(305,350,23,0,360);
    glPopMatrix();
    glColor3f(0,0,0);
	ano(300,390,90,180,360);
	glLineWidth(4.0);
	
	ano(300,280,150,180,360);
	
	
	glLineWidth(4.0);
	line(200,200,100,50);//left-moustache
     line(180,180,80,40);//left-moustache
     line(400,200,500,50);//right-moustache
     line(420,180,520,40);//right-moustache
    glPushMatrix();
    glScalef(.5,1.0,0);
    ano(270,400,10,0,360);
    ano(340,400,10,0,360);
    glPopMatrix();
	glColor3f(1,0,0);
	 ano123(300,220,95,180,360);
}



void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    eyes();
    face();
    lines();
    glFlush();
}

void init(void)
{
   glClearColor(1,1,1,0);
   gluOrtho2D(0,600,0,600);
   glMatrixMode(GL_MODELVIEW);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(800,800);
	glutCreateWindow("gasket");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
}

