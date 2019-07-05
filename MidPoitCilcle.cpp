/  / MidPoitCilcle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <stdio.h>
#include <iostream>
#include <GL/glut.h>
using namespace std;

int pntX, pntY, r;

void plot(int x, int y)
{
	glBegin(GL_POINTS);
	glColor3f(0,255,0);
	glVertex2i(x+pntX, y+pntY);
	glEnd();
}


void Init (void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(1,1,1);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}


void MidPointCircle()
{
	int x = 0;
	int y = r;
	float decision = 5/4 - r;
	plot(x, y);

	while (y > x)
	{
		if (decision < 0)
		{
			x++; 
			decision += 2*x+1;
		}
		else
		{
			y--;
			x++;
			decision += 2*(x-y)+1;
		}
		plot(x, y);
		plot(x, -y);
		plot(-x, y);
		plot(-x, -y);
		plot(y, x);
		plot(-y, x);
		plot(y, -x);
		plot(-y, -x);
	}

} 

void Display(void)
{
	glClear (GL_COLOR_BUFFER_BIT);
	glColor3f (0.0, 0.0, 0.0);
	glPointSize(1.0);

	MidPointCircle();

	glFlush ();
}

void main(int argc, char** argv)
{	
	printf( "Enter the coordinates for center of the circle:\n");

	printf("X-coordinate :");
	scanf("%d",&pntX);
	printf("\nY-coordinate :"); 
	scanf("%d",&pntY);
	printf("\nEnter radius :"); 
	scanf("%d",&r);


	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (200, 250);
	glutCreateWindow ("Circle Drawing using OpenGL");
	glutDisplayFunc(Display);
	Init ();
	glutMainLoop();

}

 