#include <iostream>
#include <GL/freeglut.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, -0.5);
	glVertex2f(0.5, -0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(-0.5, 0.5);
	glEnd();
	glFlush();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
	glutInit(&argc, argv);				   // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);		   // Set the window's initial width & height
	glutInitWindowPosition(50, 50);		   // Position the window's initial top-left corner
	glutDisplayFunc(display);			   // Register display callback handler for window re-paint
	glutMainLoop();						   // Enter the infinitely event-processing loop
	return 0;
}