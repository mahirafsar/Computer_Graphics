#include <windows.h>
#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat i = 0.0f;
void Idle()
{
    glutPostRedisplay();
}
GLfloat position = 0.0f;
GLfloat speed = 0.1f;

GLfloat position1 = 0.0f;
GLfloat speed1 = 0.1f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.1f;

GLfloat position3 = 0.0f;
GLfloat speed3 = 0.1f;

void dis();
void display();


void abc(int value) {



	glutPostRedisplay();


	glutTimerFunc(100,abc,0);
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
			speed += 0.1f;
			}
			if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;
			}
	glutPostRedisplay();

}

void update(int value) {

    if(position >1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void update1(int value) {

    if(position1>1.0)
        position1 = -1.0f;

    position1 += speed1;

	glutPostRedisplay();


	glutTimerFunc(110, update1, 0);
}

void update2(int value) {

    if(position2<-1.0)
        position2 = 1.0f;

    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(120, update2, 0);
}
void update3(int value) {

    if(position3<-1.0)
        position3 = 1.0f;

    position3 -= speed3;

	glutPostRedisplay();


	glutTimerFunc(120, update3, 0);
}
/*void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'p':
    speed1 = 0.0f;
    break;
case 'r':
    speed1 = 0.1f;
    break;
glutPostRedisplay();
	}
}*/

/*void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
glutDisplayFunc(display);
break;
case GLUT_KEY_DOWN:
glutDisplayFunc(display1);
break;
case GLUT_KEY_LEFT:
speed2=.5;
break;
case GLUT_KEY_RIGHT:
speed2=.2;
break;}
glutPostRedisplay();

}*/
void display6(int val) {

 glutDisplayFunc(dis);


}

void display5(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-0.7);
    glVertex2f(-1,-0.7);

    glColor3ub(77, 77, 77);
    glVertex2f(-1,-0.2);
    glVertex2f(-1,-0.7);
    glVertex2f(1,-0.7);
    glVertex2f(1,-0.2);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.9,-0.43);
    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.55,-0.5);
    glVertex2f(-0.55,-0.43);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.4,-0.43);
    glVertex2f(-0.4,-0.5);
    glVertex2f(-0.05,-0.5);
    glVertex2f(-0.05,-0.43);

    glColor3ub(255, 255, 255);
    glVertex2f(0.1,-0.43);
    glVertex2f(0.1,-0.5);
    glVertex2f(0.45,-0.5);
    glVertex2f(0.45,-0.43);

    glColor3ub(255, 255, 255);
    glVertex2f(0.6,-0.43);
    glVertex2f(0.6,-0.5);
    glVertex2f(0.95,-0.5);
    glVertex2f(0.95,-0.43);

    glColor3ub(0, 51, 0);
    glVertex2f(-1,0);
    glVertex2f(-1,-0.2);
    glVertex2f(1,-0.2);
    glVertex2f(1,0);

    glColor3ub(26, 26, 26);
    glVertex2f(-1,1);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,1);



    glColor3ub(0, 153, 115);      //building big
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.3,0);
    glVertex2f(0.3,0);
    glVertex2f(0.3,0.7);



    glColor3ub(153, 0, 204);                //building small
    glVertex2f(-0.7,0.45);
    glVertex2f(-0.7,0);
    glVertex2f(-0.3,0);
    glVertex2f(-0.3,0.45);

    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();



    glTranslated(0.25,0.0,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glLoadIdentity();

    glTranslated(0,-0.2,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glTranslated(0.25,0.0,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glLoadIdentity();

    glTranslated(0,-0.4,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glTranslated(0.25,0,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glTranslated(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glLoadIdentity();
    glTranslated(0,-0.17,0);
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glTranslated(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glLoadIdentity();
       glBegin(GL_QUADS);
    glColor3ub(128, 32, 0);
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.9,0);
    glVertex2f(-0.85,0);
    glVertex2f(-0.85,0.2);
    glEnd();
    glTranslated(1.7,0,0);
    glBegin(GL_QUADS);
    glColor3ub(128, 32, 0);
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.9,0);
    glVertex2f(-0.85,0);
    glVertex2f(-0.85,0.2);
    glEnd();
    glLoadIdentity();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glLoadIdentity();

    glTranslated(1.7,0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
     glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.575,0.5,0);
    glRotatef(i,0.0,0.0,0.1);

    glBegin(GL_TRIANGLES);
    glColor3ub(204, 0, 0);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.25,0);
    glVertex2f(-0.09,-0.09);

    glVertex2f(0.0,0.0);
    glVertex2f(0.18,0.2);
    glVertex2f(0,0.12);

    glVertex2f(0.0,0.0);
    glVertex2f(0.18,-0.2);
    glVertex2f(0.1,0);

    glEnd();
    glPopMatrix();

    i+=0.1f;
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(230, 77, 0);
    glVertex2f(0.56,0);
    glVertex2f(0.59,0);
    glVertex2f(0.59,0.5);
    glVertex2f(0.56,0.5);
    glEnd();
    glLoadIdentity();


    int l;

	GLfloat x4=.575f; GLfloat y4=.5f; GLfloat radius4 =.03f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(204, 0, 0);
		glVertex2f(x4, y4); // center of circle
		for(l = 0; l <= triangleAmount4;l++) {
			glVertex2f(
		            x4 + (radius4 * cos(l *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(l * twicePi4 / triangleAmount4))
			);
		}

	glEnd();
	glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,position, 0.0f);  //air plane
    glBegin(GL_POLYGON);
    glColor3ub(179, 0, 0);
    glVertex2f(-0.6,-0.35);
    glVertex2f(-0.1,-0.35);
    glVertex2f(-0.1,-0.23);
    glVertex2f(-0.25,-0.1);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.85,-0.2);
    glVertex2f(-0.8,-0.27);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(-0.45,-0.23);
    glVertex2f(-0.5,-0.45);
    glVertex2f(-0.45,-0.5);
    glVertex2f(-0.34,-0.23);

    glColor3ub(255, 255, 51);
    glVertex2f(-0.3,0);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.28,-0.1);
    glVertex2f(-0.2,0.02);

    glColor3ub(255, 255, 51);
    glVertex2f(-0.82,0.05);
    glVertex2f(-0.85,-0.2);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.78,0.05);

    glColor3ub(1,1,1);
    glVertex2f(-0.61,-0.35);
    glVertex2f(-0.61,-0.4);
    glVertex2f(-0.6,-0.4);
    glVertex2f(-0.6,-0.35);

    glColor3ub(1,1,1);
    glVertex2f(-0.54,-0.35);
    glVertex2f(-0.54,-0.4);
    glVertex2f(-0.53,-0.4);
    glVertex2f(-0.53,-0.35);

    glColor3ub(1,1,1);
    glVertex2f(-0.31,-0.35);
    glVertex2f(-0.31,-0.4);
    glVertex2f(-0.3,-0.4);
    glVertex2f(-0.3,-0.35);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.3,-0.12);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.18,-0.2);
    glVertex2f(-0.26,-0.12);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.65,-0.14);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.14);
    glEnd();
    glTranslated(0.1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.65,-0.14);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.14);
    glEnd();
    glTranslated(0.1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.65,-0.14);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.14);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,position, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 51);
    glVertex2f(-0.1,-0.23);
    glVertex2f(-0.1,-0.35);
    glVertex2f(-0.09,-0.35);
    glVertex2f(-0.06,-0.28);
    glVertex2f(-0.09,-0.23);
    glEnd();

        int i;

	GLfloat x=-.6f; GLfloat y=-.4f; GLfloat radius =.03f;
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

	GLfloat x1=-.53f; GLfloat y1=-.4f; GLfloat radius1 =.03f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}

	glEnd();
	  int k;

	GLfloat x2=-.3f; GLfloat y2=-.4f; GLfloat radius2 =.03f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x2, y2); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}

	glEnd();
    glPopMatrix();  // plane end
    glLoadIdentity();

    /*glPushMatrix();

    glTranslatef(position1,0, 0.0f);   //bird start
    int i1;

	GLfloat x5=-.4f; GLfloat y5=.4f; GLfloat radius5 =0.08;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 0);
		glVertex2f(x5, y5); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x5 + (radius5 * cos(i1 *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(i1 * twicePi5 / triangleAmount5))
			);
		}

	glEnd();

	 int j1;

	GLfloat x6=-.27f; GLfloat y6=0.4f; GLfloat radius6 =.05f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 0);
		glVertex2f(x6, y6); // center of circle
		for(j1 = 0; j1 <= triangleAmount6;j1++) {
			glVertex2f(
		            x6 + (radius6 * cos(j1 *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(j1 * twicePi6 / triangleAmount6))
			);
		}

	glEnd();

	glBegin(GL_LINES);

	glColor3ub(255, 0, 0);
	glVertex2f(-0.2,0.42);
	glVertex2f(-0.18,0.4);

	glVertex2f(-0.2,0.38);
	glVertex2f(-0.18,0.4);

	glVertex2f(-0.5,0.4);
	glVertex2f(-0.6,0.4);

	glVertex2f(-0.5,0.4);
	glVertex2f(-0.6,0.45);

	glVertex2f(-0.5,0.4);
	glVertex2f(-0.6,0.35);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 153);
	glVertex2f(-0.4,0.4);
	glVertex2f(-0.35,0.55);
	glVertex2f(-0.45,0.55);
	glEnd();


    glPopMatrix();          //bird end
    glLoadIdentity();*/

    /*glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f); //cloud start
    int j2;

	GLfloat x8=-.4f; GLfloat y8=0.9f; GLfloat radius8 =.06f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 255);
		glVertex2f(x8, y8); // center of circle
		for(j2 = 0; j2 <= triangleAmount6;j2++) {
			glVertex2f(
		            x8 + (radius8 * cos(j2 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(j2 * twicePi8 / triangleAmount8))
			);
		}

	glEnd();

	 int j3;

	GLfloat x7=-.5f; GLfloat y7=0.9f; GLfloat radius7 =.06f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 255);
		glVertex2f(x7, y7); // center of circle
		for(j3 = 0; j3 <= triangleAmount7;j3++) {
			glVertex2f(
		            x7 + (radius7 * cos(j3 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(j3 * twicePi7 / triangleAmount7))
			);
		}

	glEnd();


    glPopMatrix(); */  // cloud end
    glLoadIdentity();

    int j4;

	GLfloat x9=.75f; GLfloat y9=0.9f; GLfloat radius9 =.1f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 255);
		glVertex2f(x9, y9); // center of circle
		for(j4 = 0; j4 <= triangleAmount9;j4++) {
			glVertex2f(
		            x9 + (radius9 * cos(j4 *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(j4 * twicePi9 / triangleAmount9))
			);
		}

	glEnd();

    //glutTimerFunc(2000,display6,0);
    glFlush();
}
void display4(int val) {

 glutDisplayFunc(display5);


}

void display3(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3ub(51, 153, 51);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-0.7);
    glVertex2f(-1,-0.7);

    glColor3ub(77, 77, 77);
    glVertex2f(-1,-0.2);
    glVertex2f(-1,-0.7);
    glVertex2f(1,-0.7);
    glVertex2f(1,-0.2);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.9,-0.43);
    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.55,-0.5);
    glVertex2f(-0.55,-0.43);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.4,-0.43);
    glVertex2f(-0.4,-0.5);
    glVertex2f(-0.05,-0.5);
    glVertex2f(-0.05,-0.43);

    glColor3ub(255, 255, 255);
    glVertex2f(0.1,-0.43);
    glVertex2f(0.1,-0.5);
    glVertex2f(0.45,-0.5);
    glVertex2f(0.45,-0.43);

    glColor3ub(255, 255, 255);
    glVertex2f(0.6,-0.43);
    glVertex2f(0.6,-0.5);
    glVertex2f(0.95,-0.5);
    glVertex2f(0.95,-0.43);

    glColor3ub(51, 153, 51);
    glVertex2f(-1,0);
    glVertex2f(-1,-0.2);
    glVertex2f(1,-0.2);
    glVertex2f(1,0);

    glColor3ub(255, 184, 77);
    glVertex2f(-1,1);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,1);

    glColor3ub(0, 153, 115);      //building big
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.3,0);
    glVertex2f(0.3,0);
    glVertex2f(0.3,0.7);

    glColor3ub(153, 0, 204);                //building small
    glVertex2f(-0.7,0.45);
    glVertex2f(-0.7,0);
    glVertex2f(-0.3,0);
    glVertex2f(-0.3,0.45);

    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glTranslated(0.25,0.0,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glLoadIdentity();

    glTranslated(0,-0.2,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glTranslated(0.25,0.0,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glLoadIdentity();

    glTranslated(0,-0.4,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glTranslated(0.25,0,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glTranslated(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glLoadIdentity();
    glTranslated(0,-0.17,0);
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glTranslated(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.575,0.5,0);
    glRotatef(i,0.0,0.0,0.1);

    glBegin(GL_TRIANGLES);
    glColor3ub(204, 0, 0);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.25,0);
    glVertex2f(-0.09,-0.09);

    glVertex2f(0.0,0.0);
    glVertex2f(0.18,0.2);
    glVertex2f(0,0.12);

    glVertex2f(0.0,0.0);
    glVertex2f(0.18,-0.2);
    glVertex2f(0.1,0);

    glEnd();
    glPopMatrix();

    i+=0.1f;
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(230, 77, 0);
    glVertex2f(0.56,0);
    glVertex2f(0.59,0);
    glVertex2f(0.59,0.5);
    glVertex2f(0.56,0.5);
    glEnd();
    glLoadIdentity();


    int l;

	GLfloat x4=.575f; GLfloat y4=.5f; GLfloat radius4 =.03f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(204, 0, 0);
		glVertex2f(x4, y4); // center of circle
		for(l = 0; l <= triangleAmount4;l++) {
			glVertex2f(
		            x4 + (radius4 * cos(l *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(l * twicePi4 / triangleAmount4))
			);
		}

	glEnd();
	glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,position, 0.0f);  //air plane
    glBegin(GL_POLYGON);
    glColor3ub(179, 0, 0);
    glVertex2f(-0.6,-0.35);
    glVertex2f(-0.1,-0.35);
    glVertex2f(-0.1,-0.23);
    glVertex2f(-0.25,-0.1);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.85,-0.2);
    glVertex2f(-0.8,-0.27);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(-0.45,-0.23);
    glVertex2f(-0.5,-0.45);
    glVertex2f(-0.45,-0.5);
    glVertex2f(-0.34,-0.23);

    glColor3ub(255, 255, 51);
    glVertex2f(-0.3,0);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.28,-0.1);
    glVertex2f(-0.2,0.02);

    glColor3ub(255, 255, 51);
    glVertex2f(-0.82,0.05);
    glVertex2f(-0.85,-0.2);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.78,0.05);

    glColor3ub(1,1,1);
    glVertex2f(-0.61,-0.35);
    glVertex2f(-0.61,-0.4);
    glVertex2f(-0.6,-0.4);
    glVertex2f(-0.6,-0.35);

    glColor3ub(1,1,1);
    glVertex2f(-0.54,-0.35);
    glVertex2f(-0.54,-0.4);
    glVertex2f(-0.53,-0.4);
    glVertex2f(-0.53,-0.35);

    glColor3ub(1,1,1);
    glVertex2f(-0.31,-0.35);
    glVertex2f(-0.31,-0.4);
    glVertex2f(-0.3,-0.4);
    glVertex2f(-0.3,-0.35);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.3,-0.12);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.18,-0.2);
    glVertex2f(-0.26,-0.12);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.65,-0.14);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.14);
    glEnd();
    glTranslated(0.1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.65,-0.14);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.14);
    glEnd();
    glTranslated(0.1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.65,-0.14);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.14);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,position, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 51);
    glVertex2f(-0.1,-0.23);
    glVertex2f(-0.1,-0.35);
    glVertex2f(-0.09,-0.35);
    glVertex2f(-0.06,-0.28);
    glVertex2f(-0.09,-0.23);
    glEnd();

        int i;

	GLfloat x=-.6f; GLfloat y=-.4f; GLfloat radius =.03f;
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

	GLfloat x1=-.53f; GLfloat y1=-.4f; GLfloat radius1 =.03f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}

	glEnd();
	  int k;

	GLfloat x2=-.3f; GLfloat y2=-.4f; GLfloat radius2 =.03f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x2, y2); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}

	glEnd();
    glPopMatrix();  // plane end
    glLoadIdentity();

    glTranslated(0,0.25,0);
    glPushMatrix();

    glTranslatef(position1,0, 0.0f);   //bird start
    int i1;

	GLfloat x5=-.4f; GLfloat y5=.4f; GLfloat radius5 =0.08;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 0);
		glVertex2f(x5, y5); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x5 + (radius5 * cos(i1 *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(i1 * twicePi5 / triangleAmount5))
			);
		}

	glEnd();

	 int j1;

	GLfloat x6=-.27f; GLfloat y6=0.4f; GLfloat radius6 =.05f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 0);
		glVertex2f(x6, y6); // center of circle
		for(j1 = 0; j1 <= triangleAmount6;j1++) {
			glVertex2f(
		            x6 + (radius6 * cos(j1 *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(j1 * twicePi6 / triangleAmount6))
			);
		}

	glEnd();

	glBegin(GL_LINES);

	glColor3ub(255, 0, 0);
	glVertex2f(-0.2,0.42);
	glVertex2f(-0.18,0.4);

	glVertex2f(-0.2,0.38);
	glVertex2f(-0.18,0.4);

	glVertex2f(-0.5,0.4);
	glVertex2f(-0.6,0.4);

	glVertex2f(-0.5,0.4);
	glVertex2f(-0.6,0.45);

	glVertex2f(-0.5,0.4);
	glVertex2f(-0.6,0.35);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 153);
	glVertex2f(-0.4,0.4);
	glVertex2f(-0.35,0.55);
	glVertex2f(-0.45,0.55);
	glEnd();


    glPopMatrix();          //bird end
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f); //cloud start
    int j2;

	GLfloat x8=-.4f; GLfloat y8=0.9f; GLfloat radius8 =.06f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 255);
		glVertex2f(x8, y8); // center of circle
		for(j2 = 0; j2 <= triangleAmount6;j2++) {
			glVertex2f(
		            x8 + (radius8 * cos(j2 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(j2 * twicePi8 / triangleAmount8))
			);
		}

	glEnd();

	 int j3;

	GLfloat x7=-.5f; GLfloat y7=0.9f; GLfloat radius7 =.06f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 255);
		glVertex2f(x7, y7); // center of circle
		for(j3 = 0; j3 <= triangleAmount7;j3++) {
			glVertex2f(
		            x7 + (radius7 * cos(j3 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(j3 * twicePi7 / triangleAmount7))
			);
		}

	glEnd();


    glPopMatrix();   // cloud end
    glLoadIdentity();

    	 int j4;

	GLfloat x9=.75f; GLfloat y9=0.1f; GLfloat radius9 =.1f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 71, 26);
		glVertex2f(x9, y9); // center of circle
		for(j4 = 0; j4 <= triangleAmount7;j4++) {
			glVertex2f(
		            x9 + (radius9 * cos(j4 *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(j4 * twicePi9 / triangleAmount9))
			);
		}

	glEnd();

	       glBegin(GL_QUADS);
    glColor3ub(128, 32, 0);
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.9,0);
    glVertex2f(-0.85,0);
    glVertex2f(-0.85,0.2);
    glEnd();
    glTranslated(1.7,0,0);
    glBegin(GL_QUADS);
    glColor3ub(128, 32, 0);
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.9,0);
    glVertex2f(-0.85,0);
    glVertex2f(-0.85,0.2);
    glEnd();
    glLoadIdentity();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glLoadIdentity();

    glTranslated(1.7,0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
     glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glLoadIdentity();

    //glutTimerFunc(2000,display4,0);
    glFlush();
}

void display2(int val) {

 glutDisplayFunc(display3);


}



void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3ub(51, 153, 51);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-0.7);
    glVertex2f(-1,-0.7);

    glColor3ub(77, 77, 77);
    glVertex2f(-1,-0.2);
    glVertex2f(-1,-0.7);
    glVertex2f(1,-0.7);
    glVertex2f(1,-0.2);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.9,-0.43);
    glVertex2f(-0.9,-0.5);
    glVertex2f(-0.55,-0.5);
    glVertex2f(-0.55,-0.43);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.4,-0.43);
    glVertex2f(-0.4,-0.5);
    glVertex2f(-0.05,-0.5);
    glVertex2f(-0.05,-0.43);

    glColor3ub(255, 255, 255);
    glVertex2f(0.1,-0.43);
    glVertex2f(0.1,-0.5);
    glVertex2f(0.45,-0.5);
    glVertex2f(0.45,-0.43);

    glColor3ub(255, 255, 255);
    glVertex2f(0.6,-0.43);
    glVertex2f(0.6,-0.5);
    glVertex2f(0.95,-0.5);
    glVertex2f(0.95,-0.43);

    glColor3ub(51, 153, 51);
    glVertex2f(-1,0);
    glVertex2f(-1,-0.2);
    glVertex2f(1,-0.2);
    glVertex2f(1,0);

    glColor3ub(0,170, 255);
    glVertex2f(-1,1);
    glVertex2f(-1,0);
    glVertex2f(1,0);
    glVertex2f(1,1);

    glColor3ub(0, 153, 115);      //building big
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.3,0);
    glVertex2f(0.3,0);
    glVertex2f(0.3,0.7);

    glColor3ub(153, 0, 204);                //building small
    glVertex2f(-0.7,0.45);
    glVertex2f(-0.7,0);
    glVertex2f(-0.3,0);
    glVertex2f(-0.3,0.45);

    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glTranslated(0.25,0.0,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glLoadIdentity();

    glTranslated(0,-0.2,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glTranslated(0.25,0.0,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glLoadIdentity();

    glTranslated(0,-0.4,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();

    glTranslated(0.25,0,0);

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);    //big building windows
    glVertex2f(-0.2,0.6);
    glVertex2f(-0.2,0.45);
    glVertex2f(-0.05,0.45);
    glVertex2f(-0.05,0.6);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glTranslated(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glLoadIdentity();
    glTranslated(0,-0.17,0);
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glTranslated(0.2,0,0);
    glBegin(GL_QUADS);
    glColor3ub(217, 217, 217);
    glVertex2f(-0.65,0.4);
    glVertex2f(-0.65,0.3);
    glVertex2f(-0.55,0.3);
    glVertex2f(-0.55,0.4);
    glEnd();
    glLoadIdentity();
       glBegin(GL_QUADS);
    glColor3ub(128, 32, 0);
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.9,0);
    glVertex2f(-0.85,0);
    glVertex2f(-0.85,0.2);
    glEnd();
    glTranslated(1.7,0,0);
    glBegin(GL_QUADS);
    glColor3ub(128, 32, 0);
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.9,0);
    glVertex2f(-0.85,0);
    glVertex2f(-0.85,0.2);
    glEnd();
    glLoadIdentity();

    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glLoadIdentity();

    glTranslated(1.7,0,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
     glTranslated(0,0.07,0);
    glBegin(GL_TRIANGLES);
    glColor3ub(0, 102, 0);
    glVertex2f(-1,0.2);
    glVertex2f(-0.75,0.2);
    glVertex2f(-0.875,0.4);
    glEnd();
    glLoadIdentity();

    glPushMatrix();
    glTranslated(0.575,0.5,0);
    glRotatef(i,0.0,0.0,0.1);

    glBegin(GL_TRIANGLES);
    glColor3ub(204, 0, 0);
    glVertex2f(0.0,0.0);
    glVertex2f(-0.25,0);
    glVertex2f(-0.09,-0.09);

    glVertex2f(0.0,0.0);
    glVertex2f(0.18,0.2);
    glVertex2f(0,0.12);

    glVertex2f(0.0,0.0);
    glVertex2f(0.18,-0.2);
    glVertex2f(0.1,0);

    glEnd();
    glPopMatrix();

    i+=0.1f;
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(230, 77, 0);
    glVertex2f(0.56,0);
    glVertex2f(0.59,0);
    glVertex2f(0.59,0.5);
    glVertex2f(0.56,0.5);
    glEnd();
    glLoadIdentity();


    int l;

	GLfloat x4=.575f; GLfloat y4=.5f; GLfloat radius4 =.03f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(204, 0, 0);
		glVertex2f(x4, y4); // center of circle
		for(l = 0; l <= triangleAmount4;l++) {
			glVertex2f(
		            x4 + (radius4 * cos(l *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(l * twicePi4 / triangleAmount4))
			);
		}

	glEnd();
	glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,position, 0.0f);  //air plane
    glBegin(GL_POLYGON);
    glColor3ub(179, 0, 0);
    glVertex2f(-0.6,-0.35);
    glVertex2f(-0.1,-0.35);
    glVertex2f(-0.1,-0.23);
    glVertex2f(-0.25,-0.1);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.85,-0.2);
    glVertex2f(-0.8,-0.27);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 51);
    glVertex2f(-0.45,-0.23);
    glVertex2f(-0.5,-0.45);
    glVertex2f(-0.45,-0.5);
    glVertex2f(-0.34,-0.23);

    glColor3ub(255, 255, 51);
    glVertex2f(-0.3,0);
    glVertex2f(-0.4,-0.1);
    glVertex2f(-0.28,-0.1);
    glVertex2f(-0.2,0.02);

    glColor3ub(255, 255, 51);
    glVertex2f(-0.82,0.05);
    glVertex2f(-0.85,-0.2);
    glVertex2f(-0.7,-0.1);
    glVertex2f(-0.78,0.05);

    glColor3ub(1,1,1);
    glVertex2f(-0.61,-0.35);
    glVertex2f(-0.61,-0.4);
    glVertex2f(-0.6,-0.4);
    glVertex2f(-0.6,-0.35);

    glColor3ub(1,1,1);
    glVertex2f(-0.54,-0.35);
    glVertex2f(-0.54,-0.4);
    glVertex2f(-0.53,-0.4);
    glVertex2f(-0.53,-0.35);

    glColor3ub(1,1,1);
    glVertex2f(-0.31,-0.35);
    glVertex2f(-0.31,-0.4);
    glVertex2f(-0.3,-0.4);
    glVertex2f(-0.3,-0.35);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.3,-0.12);
    glVertex2f(-0.3,-0.2);
    glVertex2f(-0.18,-0.2);
    glVertex2f(-0.26,-0.12);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.65,-0.14);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.14);
    glEnd();
    glTranslated(0.1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.65,-0.14);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.14);
    glEnd();
    glTranslated(0.1,0,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-0.65,-0.14);
    glVertex2f(-0.65,-0.2);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.14);
    glEnd();
    glPopMatrix();
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position,position, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 51);
    glVertex2f(-0.1,-0.23);
    glVertex2f(-0.1,-0.35);
    glVertex2f(-0.09,-0.35);
    glVertex2f(-0.06,-0.28);
    glVertex2f(-0.09,-0.23);
    glEnd();

        int i;

	GLfloat x=-.6f; GLfloat y=-.4f; GLfloat radius =.03f;
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

	GLfloat x1=-.53f; GLfloat y1=-.4f; GLfloat radius1 =.03f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x1, y1); // center of circle
		for(j = 0; j <= triangleAmount;j++) {
			glVertex2f(
		            x1 + (radius1 * cos(j *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(j * twicePi1 / triangleAmount1))
			);
		}

	glEnd();
	  int k;

	GLfloat x2=-.3f; GLfloat y2=-.4f; GLfloat radius2 =.03f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(1,1,1);
		glVertex2f(x2, y2); // center of circle
		for(k = 0; k <= triangleAmount;k++) {
			glVertex2f(
		            x2 + (radius2 * cos(k *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(k * twicePi2 / triangleAmount2))
			);
		}

	glEnd();
    glPopMatrix();  // plane end
    glLoadIdentity();

    glTranslated(0,0.25,0);
    glPushMatrix();

    glTranslatef(position1,0, 0.0f);   //bird start
    int i1;

	GLfloat x5=-.4f; GLfloat y5=.4f; GLfloat radius5 =0.08;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 0);
		glVertex2f(x5, y5); // center of circle
		for(i1 = 0; i1 <= triangleAmount;i1++) {
			glVertex2f(
		            x5 + (radius5 * cos(i1 *  twicePi5 / triangleAmount5)),
			    y5 + (radius5 * sin(i1 * twicePi5 / triangleAmount5))
			);
		}

	glEnd();

	 int j1;

	GLfloat x6=-.27f; GLfloat y6=0.4f; GLfloat radius6 =.05f;
	int triangleAmount6 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi6 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 0);
		glVertex2f(x6, y6); // center of circle
		for(j1 = 0; j1 <= triangleAmount6;j1++) {
			glVertex2f(
		            x6 + (radius6 * cos(j1 *  twicePi6 / triangleAmount6)),
			    y6 + (radius6 * sin(j1 * twicePi6 / triangleAmount6))
			);
		}

	glEnd();

	glBegin(GL_LINES);

	glColor3ub(255, 0, 0);
	glVertex2f(-0.2,0.42);
	glVertex2f(-0.18,0.4);

	glVertex2f(-0.2,0.38);
	glVertex2f(-0.18,0.4);

	glVertex2f(-0.5,0.4);
	glVertex2f(-0.6,0.4);

	glVertex2f(-0.5,0.4);
	glVertex2f(-0.6,0.45);

	glVertex2f(-0.5,0.4);
	glVertex2f(-0.6,0.35);

	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255, 255, 153);
	glVertex2f(-0.4,0.4);
	glVertex2f(-0.35,0.55);
	glVertex2f(-0.45,0.55);
	glEnd();


    glPopMatrix();          //bird end
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f); //cloud start
    int j2;

	GLfloat x8=-.4f; GLfloat y8=0.9f; GLfloat radius8 =.06f;
	int triangleAmount8 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi8 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 255);
		glVertex2f(x8, y8); // center of circle
		for(j2 = 0; j2 <= triangleAmount6;j2++) {
			glVertex2f(
		            x8 + (radius8 * cos(j2 *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(j2 * twicePi8 / triangleAmount8))
			);
		}

	glEnd();

	 int j3;

	GLfloat x7=-.5f; GLfloat y7=0.9f; GLfloat radius7 =.06f;
	int triangleAmount7 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi7 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 255);
		glVertex2f(x7, y7); // center of circle
		for(j3 = 0; j3 <= triangleAmount7;j3++) {
			glVertex2f(
		            x7 + (radius7 * cos(j3 *  twicePi7 / triangleAmount7)),
			    y7 + (radius7 * sin(j3 * twicePi7 / triangleAmount7))
			);
		}

	glEnd();


    glPopMatrix();   // cloud end
    glLoadIdentity();

    	 int j4;

	GLfloat x9=.75f; GLfloat y9=0.9f; GLfloat radius9 =.1f;
	int triangleAmount9 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi9 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 0);
		glVertex2f(x9, y9); // center of circle
		for(j4 = 0; j4 <= triangleAmount7;j4++) {
			glVertex2f(
		            x9 + (radius9 * cos(j4 *  twicePi9 / triangleAmount9)),
			    y9 + (radius9 * sin(j4 * twicePi9 / triangleAmount9))
			);
		}

	glEnd();

   // glutTimerFunc(2000,display2,0);
    glFlush();
}


/*void SpecialInput(int key, int x, int y)
{
switch(key)
{case GLUT_KEY_UP:
glutDisplayFunc(display);
break;
case GLUT_KEY_DOWN:
glutDisplayFunc(display1);
break;
case GLUT_KEY_LEFT:
speed2=.5;
break;
case GLUT_KEY_RIGHT:
speed2=.2;
break;}
glutPostRedisplay();

}*/

void sound()
{

    PlaySound("birds006.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound2()
{

    PlaySound("gtexensis04.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound3()
{

    PlaySound("airland.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}


void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'd':

glLoadIdentity();
         glutDisplayFunc(display);
         sound();
         glutPostRedisplay();
  // glutDisplayFunc(day);
    //day();
    break;

case 'a':
    glutDisplayFunc(display3);  //sound play hobe nah
    sound3();
         glutPostRedisplay();
    break;

case 'n':

glLoadIdentity();
    glutDisplayFunc(display5);  //sound play hobe nah
    sound2();
         glutPostRedisplay();
    break;



	}
}

void dis()
{
       glutDisplayFunc(display);
}
int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("Test");
    glutInitWindowSize(5000,5000);
    //glutDisplayFunc(display);
    glutIdleFunc(Idle);
    glutDisplayFunc(dis);
    glutKeyboardFunc(handleKeypress);
    //glutMouseFunc(handleMouse);
    //glutSpecialFunc(SpecialInput);
    glutTimerFunc(100, abc, 0);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(110, update1, 0);
    glutTimerFunc(120, update2, 0);
    glutTimerFunc(120, update3, 0);
    sound();
    glutMainLoop();
    return 0;
}

