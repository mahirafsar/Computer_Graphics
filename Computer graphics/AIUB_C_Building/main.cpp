#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846


void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3ub(102, 204, 255);
    glVertex2f(-1,-0.6);
    glVertex2f(1,-0.6);
    glVertex2f(1,1);
    glVertex2f(-1,1);

    glColor3ub(0, 153, 51);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,-0.6);
    glVertex2f(-1,-0.6);
	glEnd();

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
