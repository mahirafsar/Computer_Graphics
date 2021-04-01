
#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>

//# define PI           3.14159265358979323846

//GLfloat i = 0.0f;

GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

  if(position <-1.0)
        position = 1.2f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed = 0.0f;
    break;
case 'r':
    speed = 0.1f;
    break;
glutPostRedisplay();
	}
}

void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
speed=.5;
break;
case GLUT_KEY_DOWN:
speed=.2;
break;
case GLUT_KEY_LEFT:

break;
case GLUT_KEY_RIGHT:
break;}
glutPostRedisplay();}


void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



//glPushMatrix();
//glTranslatef(position,0.0f, 0.0f);




      glBegin(GL_QUADS);
      glColor3ub(172, 115, 57);  //ground
      glVertex2f(-.99,-.2);
      glVertex2f(-.99,-.99);
      glVertex2f(.99,-.99);
      glVertex2f(.99,-.2);

      glColor3ub(64, 64, 64);  //road
      glVertex2f(-.99,-.7);
      glVertex2f(-.99,-.9);
      glVertex2f(.99,-.9);
      glVertex2f(.99,-.7);

      glColor3ub(51, 187, 255);  //sky
      glVertex2f(-.99,.99);
      glVertex2f(-.99,-.2);
      glVertex2f(.99,-.2);
      glVertex2f(.99,.99);

      glColor3ub(191, 191, 191);  //building
      glVertex2f(-.7,.43);
      glVertex2f(-.7,-.5);
      glVertex2f(.9,-.5);
      glVertex2f(.9,.43);

      glColor3ub(0, 134, 179);  //building
      glVertex2f(-.7,.43);
      glVertex2f(-.7,.17);
      glVertex2f(-.47,.17);
      glVertex2f(-.47,.43);

      glColor3ub(0, 134, 179);  //building
      glVertex2f(-.7,.17);
      glVertex2f(-.7,-.09);
      glVertex2f(-.32,-.09);
      glVertex2f(-.32,.17);

      glColor3ub(0, 134, 179);  //building
      glVertex2f(-.7,-.09);
      glVertex2f(-.7,-.5);
      glVertex2f(-.15,-.5);
      glVertex2f(-.15,-.09);

      glColor3ub(128, 128, 128);  //rooftop
      glVertex2f(-.7,.47);
      glVertex2f(-.7,.43);
      glVertex2f(.9,.43);
      glVertex2f(.9,.47);

      glColor3ub(0, 51, 102);  //topwindow1
      glVertex2f(-.38,.4);
      glVertex2f(-.38,.33);
      glVertex2f(.86,.33);
      glVertex2f(.86,.4);

      //glTranslated(0,-.1,0);
      glColor3ub(0, 51, 102);  //topwindow2
      glVertex2f(-.38,.29);
      glVertex2f(-.38,.22);
      glVertex2f(.86,.22);
      glVertex2f(.86,.29);
      //glLoadIdentity();

      glColor3ub(0, 51, 102);  //window3
      glVertex2f(-.24,.17);
      glVertex2f(-.24,.1);
      glVertex2f(.86,.1);
      glVertex2f(.86,.17);

      glColor3ub(0, 51, 102);  //window4
      glVertex2f(-.24,.05);
      glVertex2f(-.24,-.02);
      glVertex2f(.86,-.02);
      glVertex2f(.86,.05);

      glColor3ub(0,51,102);  //w5
      glVertex2f(-.1,-.09);
      glVertex2f(-.1,-.16);
      glVertex2f(.86,-.16);
      glVertex2f(.86,-.09);

      glColor3ub(0,51,102);  //w6
      glVertex2f(-.1,-.21);
      glVertex2f(-.1,-.28);
      glVertex2f(.86,-.28);
      glVertex2f(.86,-.21);

      glColor3ub(102, 77, 0);  //last gate
      glVertex2f(-.1,-.35);
      glVertex2f(-.1,-.5);
      glVertex2f(.86,-.5);
      glVertex2f(.86,-.35);

      glColor3ub(191, 191, 191);  //small gate1
      glVertex2f(-.04,-.4);
      glVertex2f(-.04,-.5);
      glVertex2f(.3,-.5);
      glVertex2f(.3,-.4);

      glColor3ub(102, 0, 0);  //small gate2
      glVertex2f(.36,-.39);
      glVertex2f(.36,-.48);
      glVertex2f(.82,-.48);
      glVertex2f(.82,-.39);


      glEnd();

      /*glBegin(GL_LINE);
      glColor3ub(191, 191, 191);  //w1
      glVertex2f(-.7,-.42);
      glVertex2f(.47,-.42);

      glEnd();*/



      glBegin(GL_QUADS);
      glColor3ub(102, 34, 0);  //tree1

      glVertex2f(-.83,-.6);
      glVertex2f(-.83,-.7);
      glVertex2f(-.81,-.7);


      glVertex2f(-.81,-.6);

       glColor3ub(102, 34, 0);  //tree2
      glVertex2f(-.89,-.29);
      glVertex2f(-.89,-.4);
      glVertex2f(-.87,-.4);
      glVertex2f(-.87,-.29);

       glColor3ub(102, 34, 0);  //tree3
      glVertex2f(.9,-.6);
      glVertex2f(.9,-.7);
      glVertex2f(.93,-.7);
      glVertex2f(.93,-.6);


      glEnd();



      glBegin(GL_TRIANGLES);
      glColor3ub(32, 96, 32);  //right tree1
      glVertex2f(-.82,-.52);
      glVertex2f(-.9,-.6);
      glVertex2f(-.74,-.6);

       glColor3ub(32, 96, 32);  //right tree1
      glVertex2f(-.82,-.46);
      glVertex2f(-.9,-.54);
      glVertex2f(-.74,-.54);

       glColor3ub(32, 96, 32);  //right tree2
      glVertex2f(-.88,-.2);
      glVertex2f(-.97,-.29);
      glVertex2f(-.79,-.29);

        glColor3ub(32, 96, 32);  //right tree2
      glVertex2f(-.88,-.14);
      glVertex2f(-.97,-.23);
      glVertex2f(-.79,-.23);

       glColor3ub(32, 96, 32);  //left tree3
      glVertex2f(.91,-.52);
      glVertex2f(.83,-.6);
      glVertex2f(.99,-.6);

       glColor3ub(32, 96, 32);  //left tree3
      glVertex2f(.91,-.48);
      glVertex2f(.83,-.56);
      glVertex2f(.99,-.56);


      glEnd();

    glLoadIdentity();
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    glLoadIdentity();
    glPopMatrix();
    //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-0.1,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 3nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 3nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-0.2,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 4nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 4nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-0.3,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-0.4,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-0.5,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-0.6,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-0.7,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-0.8,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-0.9,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.0,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.1,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.2,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.3,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.4,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.5,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.6,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.7,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    //glLoadIdentity();

    //glPopMatrix();

     //Rain 2nd row
   // glPushMatrix();
    //glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.8,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();

     //Rain 2nd row
    glPushMatrix();
    glTranslatef(0.0f,position, 0.0f);
    glBegin(GL_LINES);                  //Rain 2nd start
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(0,-1.9,0);            //change it only
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();
    //glLoadIdentity();
    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();

    glTranslated(-0.04,0,0);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.98,0.98);
    glVertex2f(0.96,0.92);
    glEnd();


    glLoadIdentity();

    glPopMatrix();


    glLoadIdentity();



    glFlush();
}




    /*glPopMatrix();
     i+=0.1f;
    glTranslated(-0.6,0.6,0);

    glRotatef(i,0,0,0.5);

    glLoadIdentity();

    int i;

	GLfloat x=.4f; GLfloat y=.85f; GLfloat radius =.2f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glutTimerFunc(1500,display,0);*/











int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);
    glutMainLoop();
    return 0;
}




/* int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    glutIdleFunc(Idle);
    glutSpecialFunc(SpecialInput);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutMainLoop();
    return 0;
} */
