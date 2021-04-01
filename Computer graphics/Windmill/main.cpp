#include <windows.h>
#include <GL/glut.h>
#include<math.h>>

# define PI           3.14159265358979323846

GLfloat i = 0.0f;
void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
void display()
{   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();                         //glPushMatrix copies the top matrix and pushes it onto the stack,

    glRotatef(i,0,0,0.5);                  //i=how many degree you want to rotate around an axis

    glBegin(GL_TRIANGLES);
    glColor3ub(255, 0, 255);
    glVertex2f(0,0);
    glVertex2f(0.4,0.3);
    glVertex2f(0.3,0.4);

    glColor3ub(255, 0, 255);
    glVertex2f(0,0);
    glVertex2f(-0.4,0.3);
    glVertex2f(-0.3,0.4);

    glColor3ub(255, 0, 255);
    glVertex2f(0,0);
    glVertex2f(0.2,-0.5);
    glVertex2f(0.3,-0.4);
    glEnd();


    glPopMatrix();//glPopMatrix pops the top matrix off the stack
    i+=0.1f;//i=i+.1=.2

    glLoadIdentity();

    int i;

	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.04f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255, 0, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    glBegin(GL_QUADS);
    glColor3ub(153, 51, 0);
    glVertex2f(-0.01,-0.04);
    glVertex2f(-0.01,-0.7);
    glVertex2f(0.01,-0.7);
    glVertex2f(0.01,-0.04);
    glEnd();

    glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    glutIdleFunc(Idle);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;}

