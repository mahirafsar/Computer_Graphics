#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846


void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


	  // Render now


    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(-1,-0.75);
    glVertex2f(1,-0.75);
    glVertex2f(1,-0.5);
    glVertex2f(-1,-0.5);

    glColor3ub(255, 255, 255);
    glVertex2f(-0.9,-0.65);
    glVertex2f(-0.7,-0.65);
    glVertex2f(-0.7,-0.6);
    glVertex2f(-0.9,-0.6);

    glVertex2f(-0.5,-0.65);
    glVertex2f(-0.3,-0.65);
    glVertex2f(-0.3,-0.6);
    glVertex2f(-0.5,-0.6);

    glVertex2f(-0.1,-0.65);
    glVertex2f(0.1,-0.65);
    glVertex2f(0.1,-0.6);
    glVertex2f(-0.1,-0.6);

    glVertex2f(0.3,-0.65);
    glVertex2f(0.5,-0.65);
    glVertex2f(0.5,-0.6);
    glVertex2f(0.3,-0.6);

    glVertex2f(0.7,-0.65);
    glVertex2f(0.9,-0.65);
    glVertex2f(0.9,-0.6);
    glVertex2f(0.7,-0.6);

    glColor3ub(102, 102, 255);
    glVertex2f(-0.5,-0.35);
    glVertex2f(-0.3,-0.35);
    glVertex2f(-0.4,-0.2);
    glVertex2f(-0.5,-0.2);




    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(102, 102, 255);
    glVertex2f(-0.3,-0.53);
    glVertex2f(0.47,-0.53);
    glVertex2f(0.5,-0.46);
    glVertex2f(0.4,-0.35);
    glVertex2f(-0.6,-0.35);

    glEnd();

     int i;

	GLfloat x=-.2; GLfloat y=-.55f; GLfloat radius =.05f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
        glColor3ub(255, 255, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

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
