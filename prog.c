#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int counter = 0;
void myInit(void)
{
	glClearColor(0.0, 0.0, 0.0, 4.0);
	glColor3f(0.0f, 0.0f, 0.0f);
	glPointSize(4.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 1, 1);
	// glRasterPos2f(275,450);
	glRasterPos2f(155, 450);
	int len, i;
	char string[] = "A stack implementation using Glut";
	len = (int)strlen(string);
	for (i = 0; i < len; i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
	}
	glLineWidth(5.0f);
	glBegin(GL_LINE_LOOP);
	glVertex2i(5, 5);
	glVertex2i(5, 475);
	glVertex2i(635, 475);
	glVertex2i(635, 5);
	glEnd();
	int len1;
	glRasterPos2f(140, 420);
	char string1[] = "By Abhishek Kumar & Aditya Krishnan";
	len1 = (int)strlen(string1);
	for (i = 0; i < len1; i++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string1[i]);
	}

	glLineWidth(5.0f);
	glBegin(GL_LINE_LOOP);
	glVertex2i(100, 100);
	glVertex2i(100, 350);
	glVertex2i(550, 350);
	glVertex2i(550, 100);
	glEnd();
	glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2i(100, 100);
	glVertex2i(100, 350);
	glVertex2i(550, 350);
	glVertex2i(550, 100);
	glEnd();
	glColor3f(1.0f, 1.0f, 0.0f);

	if (counter >= 1)
	{

		glColor3f(1.0f, 1.0f, 0.0f);
		glBegin(GL_POLYGON);
		glVertex2i(110, 110);
		glVertex2i(110, 140);
		glVertex2i(540, 140);
		glVertex2i(540, 110);
		glEnd();
		glColor3f(1.0f, 0.0f, 0.0f);
		int len1;
		glRasterPos2f(320, 120);
		char string1[] = "1";
		len1 = (int)strlen(string1);
		for (i = 0; i < len1; i++) {
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string1[i]);
		}
	}
	if (counter >= 2)
	{

		glColor3f(1.0f, 1.0f, 0.0f);
		glBegin(GL_POLYGON);
		glVertex2i(110, 160);
		glVertex2i(110, 190);
		glVertex2i(540, 190);
		glVertex2i(540, 160);
		glEnd();
		glColor3f(1.0f, 0.0f, 0.0f);
		int len1;
		glRasterPos2f(320, 170);
		char string1[] = "2";
		len1 = (int)strlen(string1);
		for (i = 0; i < len1; i++) {
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string1[i]);
		}
	}
	if (counter >= 3)
	{
		glColor3f(1.0f, 1.0f, 0.0f);
		glBegin(GL_POLYGON);
		glVertex2i(110, 210);
		glVertex2i(110, 240);
		glVertex2i(540, 240);
		glVertex2i(540, 210);
		glEnd();
		glColor3f(1.0f, 0.0f, 0.0f);
		int len1;
		glRasterPos2f(320, 220);
		char string1[] = "3";
		len1 = (int)strlen(string1);
		for (i = 0; i < len1; i++) {
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string1[i]);
		}
	}
	if (counter >= 4)
	{
		glColor3f(1.0f, 1.0f, 0.0f);
		glBegin(GL_POLYGON);
		glVertex2i(110, 260);
		glVertex2i(110, 290);
		glVertex2i(540, 290);
		glVertex2i(540, 260);
		glEnd();
		glColor3f(1.0f, 0.0f, 0.0f);
		int len1;
		glRasterPos2f(320, 270);
		char string1[] = "4";
		len1 = (int)strlen(string1);
		for (i = 0; i < len1; i++) {
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string1[i]);
		}
	}
	if (counter >= 5)
	{
		glColor3f(1.0f, 1.0f, 0.0f);
		glBegin(GL_POLYGON);
		glVertex2i(110, 310);
		glVertex2i(110, 340);
		glVertex2i(540, 340);
		glVertex2i(540, 310);
		glEnd();
		glColor3f(1.0f, 0.0f, 0.0f);
		int len1;
		glRasterPos2f(320, 320);
		char string1[] = "5";
		len1 = (int)strlen(string1);
		for (i = 0; i < len1; i++) {
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string1[i]);
		}
	}
	glColor3f(1.0f, 1.0f, 1.0f);
	if (counter > 5) {
		if (counter > 6)
			counter = 6;
		glRasterPos2f(250, 50);
		int len, i;
		char string[] = "Stack is full";
		len = (int)strlen(string);
		for (i = 0; i < len; i++) {
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);

		}

	}
	if (counter < 0) {
		if (counter < -1)
			counter = -1;
		glRasterPos2f(250, 50);
		int len, i;
		char string[] = "Stack is empty";
		len = (int)strlen(string);
		for (i = 0; i < len; i++) {
			glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);

		}

	}

	glFlush();
}
void keys(unsigned char key, int x, int y)
{
	if (key == 'p')
		counter++;
	if (key == 'P')
		counter++;
	if (key == 'o' || key == 'O')
		counter--;

}


void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Stack Implementation Using Glut");
	glutDisplayFunc(display);
	glutIdleFunc(display);
	glutKeyboardFunc(keys);
	myInit();
	glutMainLoop();
}

