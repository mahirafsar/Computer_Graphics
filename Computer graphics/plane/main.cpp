#include <windows.h>
#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position >1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(position, 0.0f);
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
    glTranslatef(position,0, 0.0f);
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
	glPopMatrix();
    glFlush();
}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("Test");
    glutInitWindowSize(320,320);
    //glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);
    glutMainLoop();
    return 0;
}






