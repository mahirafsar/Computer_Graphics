#include <windows.h>
#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>

#include<math.h>>
# define PI           3.14159265358979323846

GLfloat position = 0.0f;
GLfloat speed = 0.07f;

void update(int value) {

    if(position <-2.0f)
        position = 2.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(92, 92, 61); //ground
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,0);
    glVertex2f(-1,0);

    glColor3ub(13, 13, 13); //ground
    glVertex2f(-1,-0.9);
    glVertex2f(1,-0.9);
    glVertex2f(1,-0.8);
    glVertex2f(-1,-0.8);


    glColor3ub(51, 51, 153);             //sky
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,1);
    glVertex2f(-1,1);

    glColor3ub(140, 140, 140);             //building main
    glVertex2f(-0.7,-0.7);
    glVertex2f(0.8,-0.7);
    glVertex2f(0.8,0.5);
    glVertex2f(-0.7,0.5);

    glColor3ub(92, 138, 138);             //building
    glVertex2f(-0.7,-0.7);
    glVertex2f(-0.3,-0.7);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.7,-0.2);

    glColor3ub(92, 138, 138);             //building
    glVertex2f(-0.7,-0.2);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.4,0.5);
    glVertex2f(-0.7,0.5);

    glColor3ub(89, 89, 89);             //building roof
    glVertex2f(-0.7,0.45);
    glVertex2f(0.8,0.45);
    glVertex2f(0.8,0.5);
    glVertex2f(-0.7,0.5);
    glEnd();

    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(153, 51, 0);
    glVertex2f(-0.94,-0.8);
    glVertex2f(-0.92,-0.8);
    glVertex2f(-0.92,-0.7);
    glVertex2f(-0.94,-0.7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(32,96,32);
    glVertex2f(-1,-0.7);
    glVertex2f(-0.86,-0.7);
    glVertex2f(-0.93,-0.62);
    glEnd();

    glTranslated(0,0.04,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(32,96,32);
    glVertex2f(-1,-0.7);
    glVertex2f(-0.86,-0.7);
    glVertex2f(-0.93,-0.62);
    glEnd();

    glTranslated(0,0.04,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(32,96,32);
    glVertex2f(-1,-0.7);
    glVertex2f(-0.86,-0.7);
    glVertex2f(-0.93,-0.62);
    glEnd();

    glTranslated(0.1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(153, 51, 0);
    glVertex2f(-0.94,-0.8);
    glVertex2f(-0.92,-0.8);
    glVertex2f(-0.92,-0.7);
    glVertex2f(-0.94,-0.7);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(32,96,32);
    glVertex2f(-1,-0.7);
    glVertex2f(-0.86,-0.7);
    glVertex2f(-0.93,-0.62);
    glEnd();

    glTranslated(0,0.04,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(32,96,32);
    glVertex2f(-1,-0.7);
    glVertex2f(-0.86,-0.7);
    glVertex2f(-0.93,-0.62);
    glEnd();

    glTranslated(0,0.04,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(32,96,32);
    glVertex2f(-1,-0.7);
    glVertex2f(-0.86,-0.7);
    glVertex2f(-0.93,-0.62);
    glEnd();

    glLoadIdentity();
    glBegin(GL_QUADS);                      //window start
    glColor3ub(0, 64, 128);
    glVertex2f(-0.3,0.3);
    glVertex2f(0.75,0.3);
    glVertex2f(0.75,0.4);
    glVertex2f(-0.3,0.4);
    glEnd();

    glTranslated(0,-0.2,0);
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(-0.3,0.3);
    glVertex2f(0.75,0.3);
    glVertex2f(0.75,0.4);
    glVertex2f(-0.3,0.4);
    glEnd();

    glLoadIdentity();

    glTranslated(0,-0.4,0);
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(-0.3,0.3);
    glVertex2f(0.75,0.3);
    glVertex2f(0.75,0.4);
    glVertex2f(-0.3,0.4);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(-0.2,-0.3);
    glVertex2f(0.75,-0.3);
    glVertex2f(0.75,-0.2);
    glVertex2f(-0.2,-0.2);
    glEnd();

    glTranslated(0,-0.2,0);
    glBegin(GL_QUADS);
    glColor3ub(179, 179, 179);
    glVertex2f(-0.2,-0.3);
    glVertex2f(0.75,-0.3);
    glVertex2f(0.75,-0.2);
    glVertex2f(-0.2,-0.2);
    glEnd();
    glLoadIdentity();

    glTranslated(0,-0.4,0);
    glBegin(GL_QUADS);
    glColor3ub(77, 51, 25);
    glVertex2f(-0.2,-0.3);
    glVertex2f(0.75,-0.3);
    glVertex2f(0.75,-0.2);
    glVertex2f(-0.2,-0.2);
    glEnd();
    glLoadIdentity();           //window end

    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();

    glTranslated(0.1,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

    glTranslated(0.2,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

    glTranslated(0.3,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

    glTranslated(0.4,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

    glTranslated(0.5,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

    glTranslated(0.6,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

     glTranslated(0.7,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

     glTranslated(0.8,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

     glTranslated(0.9,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

     glTranslated(1,0,0);
    glBegin(GL_LINES);
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.4);
    glVertex2f(-0.3,-0.6);
    glEnd();
    glLoadIdentity();

    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.395);
    glVertex2f(0.75,0.395);
    glEnd();

    glTranslated(0,-0.2,0);
    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.395);
    glVertex2f(0.75,0.395);
    glEnd();
    glLoadIdentity();

    glTranslated(0,-0.4,0);
    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.395);
    glVertex2f(0.75,0.395);
    glEnd();
    glLoadIdentity();

    glTranslated(0,-0.6,0);
    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.395);
    glVertex2f(0.75,0.395);
    glEnd();
    glLoadIdentity();

    glTranslated(0,-0.8,0);
    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.395);
    glVertex2f(0.75,0.395);
    glEnd();
    glLoadIdentity();

    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.305);
    glVertex2f(0.75,0.305);
    glEnd();

    glTranslated(0,-0.2,0);
    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.305);
    glVertex2f(0.75,0.305);
    glEnd();
    glLoadIdentity();

    glTranslated(0,-0.4,0);
    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.305);
    glVertex2f(0.75,0.305);
    glEnd();
    glLoadIdentity();

    glTranslated(0,-0.6,0);
    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.305);
    glVertex2f(0.75,0.305);
    glEnd();
    glLoadIdentity();

    glTranslated(0,-0.8,0);
    glBegin(GL_LINES);                  //column line
    glColor3ub(140, 140, 140);
    glVertex2f(-0.3,0.305);
    glVertex2f(0.75,0.305);
    glEnd();
    glLoadIdentity();

    //cloud start

        glPushMatrix();
    glTranslatef(-position,0, 0.0f);
    int i;

	GLfloat x=-.7f; GLfloat y=.85f; GLfloat radius =0.07f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	int j;

	GLfloat x2=-.63f; GLfloat y2=.9f; GLfloat radius2 =0.07f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x2, y2); // center of circle
		for(j = 0; j <= triangleAmount2;j++) {
			glVertex2f(
		            x2 + (radius2 * cos(j *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(j * twicePi2 / triangleAmount2))
			);
		}
	glEnd();

	int k;

	GLfloat x3=-.58f; GLfloat y3=.85f; GLfloat radius3 =0.07f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x3, y3); // center of circle
		for(k = 0; k <= triangleAmount2;k++) {
			glVertex2f(
		            x3 + (radius3 * cos(k *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(k * twicePi3 / triangleAmount3))
			);
		}
	glEnd();

    glTranslated(0.5,0,0);
    int i4;

	GLfloat x4=-.7f; GLfloat y4=.85f; GLfloat radius4 =0.07f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x4, y4); // center of circle
		for(i4 = 0; i4 <= triangleAmount;i4++) {
			glVertex2f(
		            x4 + (radius4 * cos(i4 *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount4))
			);
		}
	glEnd();

	int j5;

	GLfloat x5=-.63f; GLfloat y5=.9f; GLfloat radius5 =0.07f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x5, y5); // center of circle
		for(j5 = 0; j5 <= triangleAmount5;j5++) {
			glVertex2f(
		            x5 + (radius5 * cos(j5 *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(j5 * twicePi5 / triangleAmount5))
			);
		}
	glEnd();

	int k6;

	GLfloat x6=-.58f; GLfloat y6=.85f; GLfloat radius6 =0.07f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x6, y6); // center of circle
		for(k6 = 0; k6 <= triangleAmount;k6++) {
			glVertex2f(
		            x6 + (radius6 * cos(k6 *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(k6 * twicePi6 / triangleAmount6))
			);
		}
	glEnd();

	glTranslated(0.5,0,0);
    int i7;

	GLfloat x7=-.7f; GLfloat y7=.85f; GLfloat radius7 =0.07f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x7, y7); // center of circle
		for(i7 = 0; i7 <= triangleAmount;i7++) {
			glVertex2f(
		            x7 + (radius7 * cos(i7 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(i7 * twicePi7 / triangleAmount7))
			);
		}
	glEnd();

	int j8;

	GLfloat x8=-.63f; GLfloat y8=.9f; GLfloat radius8 =0.07f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x8, y8); // center of circle
		for(j8 = 0; j8 <= triangleAmount5;j8++) {
			glVertex2f(
		            x8 + (radius8 * cos(j8 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(j8 * twicePi8 / triangleAmount8))
			);
		}
	glEnd();

	int k9;

	GLfloat x9=-.58f; GLfloat y9=.85f; GLfloat radius9 =0.07f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x9, y9); // center of circle
		for(k9 = 0; k9 <= triangleAmount9;k9++) {
			glVertex2f(
		            x9 + (radius6 * cos(k9 *  twicePi9 / triangleAmount9)),
			    y6 + (radius6 * sin(k9 * twicePi9 / triangleAmount9))
			);
		}
	glEnd();
	glLoadIdentity();

	glPopMatrix();
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


int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
   // glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutMainLoop();
    return 0;
}
