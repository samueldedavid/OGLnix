//============================================================================
// Name        : helloOGL.cpp
// Author      : hassam
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(void)
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glShadeModel (GL_FLAT);
}

void display(void)
{
   glClear (GL_COLOR_BUFFER_BIT);
   glColor3f (1.0, 1.0, 1.0);
   glLoadIdentity ();             /* clear the matrix */
           /* viewing transformation  */
   gluLookAt (0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
   glTranslatef(0.0,0.0,-5.0);
   //glScalef (1.0, 2.0, 1.0);      /* modeling transformation */
   glutWireCube (1.0);
   /*glBegin(GL_TRIANGLES);

       glColor3f(1.0f,0.0f,0.0f);          // Red
       glVertex3f( 0.0f, 1.0f, 10.0f);          // Top Of Triangle (Front)
       glColor3f(0.0f,1.0f,0.0f);          // Green
       glVertex3f(1.0f,-1.0f, 10.0f);          // Left Of Triangle (Front)
       glColor3f(0.0f,0.0f,1.0f);          // Blue
       glVertex3f( 1.0f,-1.0f, 10.0f);          // Right Of Triangle (Front)
       glEnd();*/
   glFlush ();
}

void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();

   glFrustum (-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
   glMatrixMode (GL_MODELVIEW);
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (500, 500);
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutMainLoop();
   return 0;
}
