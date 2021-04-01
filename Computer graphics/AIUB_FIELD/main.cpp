#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846


void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_QUADS);
    glColor3ub(0, 204, 0);
    glVertex2f(-1,-0.6);
    glVertex2f(1,-0.6);
    glVertex2f(1,1);
    glVertex2f(-1,1);


    glColor3ub(0, 204, 0);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-0.6);
    glVertex2f(-1,-0.6);
	glEnd();

    //Field
	glBegin(GL_LINES);
	glColor3ub(255, 255, 255);
	glVertex2f(-0.6,0.1);
	glVertex2f(-0.6,0.9);
	glVertex2f(-0.6,0.9);
    glVertex2f(0.6,0.9);
    glVertex2f(0.6,0.9);
    glVertex2f(0.6,0.1);
    glVertex2f(0.6,0.1);
    glVertex2f(-0.6,0.1);

    glVertex2f(-0.6,0.4);
    glVertex2f(-0.45,0.4);
    glVertex2f(-0.6,0.6);
    glVertex2f(-0.45,0.6);
    glVertex2f(-0.45,0.6);
    glVertex2f(-0.45,0.4);

    glVertex2f(0.6,0.4);
    glVertex2f(0.45,0.4);
    glVertex2f(0.6,0.6);
    glVertex2f(0.45,0.6);
    glVertex2f(0.45,0.6);
    glVertex2f(0.45,0.4);

    glVertex2f(0.0,0.1);
    glVertex2f(0.0,0.9);

    glEnd();

    int ii;

	GLfloat xi=0.0f; GLfloat yi=.5f; GLfloat radiusi =.08f;
	int triangleAmounti = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePii = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(xi, yi); // center of circle
		for(ii = 0; ii <= triangleAmounti;ii++) {
			glVertex2f(
		            xi + (radiusi * cos(ii *  twicePii / triangleAmounti)),
			    yi + (radiusi * sin(ii * twicePii / triangleAmounti))
			);
		}
	glEnd();








	glScalef(1,0.3,0);
	glTranslated(0,-0.5,0);
    glBegin(GL_QUADS);  //road
    glColor3ub(102, 97, 96);
    glVertex2f(-1.0,0.1);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,0.1);
    glEnd();
    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,0.09);
    glVertex2f(1.0,0.09);
    glEnd();


    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glEnd();



    //glLineWidth(7);
    glBegin(GL_LINES);      //Road  midle line yellow
    glColor3ub(251, 229, 0);
    glVertex2f(-0.9,-0.13);
    glVertex2f(-0.7,-0.13);
    glVertex2f(-0.5,-0.13);
    glVertex2f(-0.3,-0.13);
    glVertex2f(-0.1,-0.13);
    glVertex2f(0.1,-0.13);
    glVertex2f(0.3,-0.13);
    glVertex2f(0.5,-0.13);
    glVertex2f(0.7,-0.13);
    glVertex2f(0.9,-0.13);
    glEnd();

    glLoadIdentity();

    glScalef(0.3,1,0);
    glTranslated(0,-1.25,0);
    glRotatef(90,0.0,0.0,0.1);
    //glTranslated(0,-0.5,0);
    glBegin(GL_QUADS);  //road
    glColor3ub(102, 97, 96);
    glVertex2f(-1.0,0.1);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,0.1);
    glEnd();
    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,0.09);
    glVertex2f(1.0,0.09);
    glEnd();


    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glEnd();



    //glLineWidth(7);
    glBegin(GL_LINES);      //Road  midle line yellow
    glColor3ub(251, 229, 0);
    glVertex2f(-0.9,-0.13);
    glVertex2f(-0.7,-0.13);
    glVertex2f(-0.5,-0.13);
    glVertex2f(-0.3,-0.13);
    glVertex2f(-0.1,-0.13);
    glVertex2f(0.1,-0.13);
    glVertex2f(0.3,-0.13);
    glVertex2f(0.5,-0.13);
    glVertex2f(0.7,-0.13);
    glVertex2f(0.9,-0.13);
    glEnd();

    glLoadIdentity();

    glScalef(0.3,1,0);
    glTranslated(-2.6,0.87,0);
    glRotatef(90,0.0,0.0,0.1);
    //glTranslated(0,-0.5,0);
    glBegin(GL_QUADS);  //road
    glColor3ub(102, 97, 96);
    glVertex2f(-1.0,0.1);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glVertex2f(1.0,0.1);
    glEnd();
    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,0.09);
    glVertex2f(1.0,0.09);
    glEnd();


    glBegin(GL_LINES);      //Road line
    glColor3ub(251, 229, 0);
    glVertex2f(-1.0,-0.35);
    glVertex2f(1.0,-0.35);
    glEnd();



    //glLineWidth(7);
    glBegin(GL_LINES);      //Road  midle line yellow
    glColor3ub(251, 229, 0);
    glVertex2f(-0.9,-0.13);
    glVertex2f(-0.7,-0.13);
    glVertex2f(-0.5,-0.13);
    glVertex2f(-0.3,-0.13);
    glVertex2f(-0.1,-0.13);
    glVertex2f(0.1,-0.13);
    glVertex2f(0.3,-0.13);
    glVertex2f(0.5,-0.13);
    glVertex2f(0.7,-0.13);
    glVertex2f(0.9,-0.13);
    glEnd();

    glLoadIdentity();
	glScalef(0.5,0.5,0); // increase x right and y
    glTranslatef(0.9f, -0.7f, 0.0f);
	int i;

	GLfloat x=0.0f; GLfloat y=-0.1f; GLfloat radius =.6f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(164,164,164);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(153, 153, 153);
	glVertex2f(-0.33,-0.6);
	glVertex2f(-0.33,-0.9);
	glVertex2f(0.33,-0.9);
	glVertex2f(0.33,-0.6);

	glColor3ub(0,0,77);
	glVertex2f(-0.445,0.3);
	glVertex2f(-0.515,0.2);
	glVertex2f(0.515,0.2);
	glVertex2f(0.445,0.3);

	glColor3ub(0,0,77);
	glVertex2f(-0.565,0.1);
	glVertex2f(-0.585,0.0);
	glVertex2f(0.585,0.0);
	glVertex2f(0.565,0.1);

	glColor3ub(0,0,77);
	glVertex2f(-0.6,-0.1);
	glVertex2f(-0.58,-0.2);
	glVertex2f(0.58,-0.2);
	glVertex2f(0.6,-0.1);

	glColor3ub(0,0,77);
	glVertex2f(-0.56,-0.3);
	glVertex2f(-0.515,-0.4);
	glVertex2f(0.515,-0.4);
	glVertex2f(0.56,-0.3);

    glColor3ub(0,0,77);
	glVertex2f(-0.44,-0.5);
	glVertex2f(-0.33,-0.6);
	glVertex2f(0.33,-0.6);
	glVertex2f(0.44,-0.5);

	glColor3ub(0,0,77);
	glVertex2f(-0.33,-0.7);
	glVertex2f(-0.33,-0.8);
	glVertex2f(0.33,-0.8);
	glVertex2f(0.33,-0.7);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0,0,0);
	glVertex2f(-0.5,0.225);
	glVertex2f(-0.5,-0.425);

	glVertex2f(-0.4,0.34);
	glVertex2f(-0.4,-0.54);

	glVertex2f(-0.3,0.41);
	glVertex2f(-0.3,-0.6);

	glVertex2f(-0.2,0.46);
	glVertex2f(-0.2,-0.6);

	glVertex2f(-0.1,0.48);
	glVertex2f(-0.1,-0.6);

	glVertex2f(0,0.5);
	glVertex2f(0,-0.6);

	glVertex2f(0.5,0.225);
	glVertex2f(0.5,-0.425);

	glVertex2f(0.4,0.34);
	glVertex2f(0.4,-0.54);

	glVertex2f(0.3,0.41);
	glVertex2f(0.3,-0.6);

	glVertex2f(0.2,0.46);
	glVertex2f(0.2,-0.6);

	glVertex2f(0.1,0.48);
	glVertex2f(0.1,-0.6);

    glColor3ub(102, 26, 0);
    glVertex2f(-0.18,-0.8);
	glVertex2f(-0.25,-0.99);

	glVertex2f(-0.18,-0.8);
	glVertex2f(-0.1,-0.99);

	glVertex2f(-0.14,-0.9);
	glVertex2f(-0.218,-0.9);

	glVertex2f(-0.04,-0.8);
	glVertex2f(-0.04,-0.99);

	glVertex2f(0.04,-0.8);
	glVertex2f(0.04,-0.99);

	glVertex2f(0.18,-0.8);
	glVertex2f(0.18,-0.99);

	glVertex2f(0.04,-0.99);
	glVertex2f(0.18,-0.99);

	glVertex2f(0.04,-0.99);
	glVertex2f(0.18,-0.99);

	glVertex2f(0.24,-0.8);
	glVertex2f(0.24,-0.99);

	glVertex2f(0.24,-0.81);
	glVertex2f(0.32,-0.81);

	glVertex2f(0.32,-0.8);
	glVertex2f(0.32,-0.88);

    glVertex2f(0.32,-0.88);
	glVertex2f(0.24,-0.9);

	glVertex2f(0.24,-0.9);
	glVertex2f(0.32,-0.93);

	glVertex2f(0.32,-0.93);
	glVertex2f(0.32,-0.99);

	glVertex2f(0.24,-0.99);
	glVertex2f(0.32,-0.99);

	glEnd();
	glLoadIdentity();

	//tree
	glScalef(1,0.6,0);
	glTranslated(0.0,-0.9,0.0);
	glBegin(GL_QUADS);
    glColor3ub(128, 32, 0);
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.9,0);
    glVertex2f(-0.85,0);
    glVertex2f(-0.85,0.2);
    glEnd();


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

    glScalef(1,0.6,0);
	glTranslated(0.3,-0.9,0.0);
	glBegin(GL_QUADS);
    glColor3ub(128, 32, 0);
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.9,0);
    glVertex2f(-0.85,0);
    glVertex2f(-0.85,0.2);
    glEnd();


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

    glScalef(1,0.6,0);
	glTranslated(0.6,-0.9,0.0);
	glBegin(GL_QUADS);
    glColor3ub(128, 32, 0);
    glVertex2f(-0.9,0.2);
    glVertex2f(-0.9,0);
    glVertex2f(-0.85,0);
    glVertex2f(-0.85,0.2);
    glEnd();


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



    glFlush();
}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
