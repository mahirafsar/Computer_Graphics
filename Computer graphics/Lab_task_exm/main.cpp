#include <windows.h>
#include <GL/glut.h>

void display(){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POLYGON);
    glColor3ub(136, 136, 68);
    glVertex2f(-0.8,0.2);
    glVertex2f(0.8,0.2);
    glVertex2f(0.3,0.44);
    glVertex2f(-0.1,0.44);
    glVertex2f(-0.2,0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(163, 163, 117);
    glVertex2f(-0.7,0.2);
    glVertex2f(-0.7,-0.4);
    glVertex2f(0.7,-0.4);
    glVertex2f(0.7,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 204);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.6,0.1);
    glEnd();
    glTranslated(0,-0.215,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 204);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.6,0.1);

    glEnd();
    glLoadIdentity();

    glTranslated(0.21,0,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 204);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.6,0.1);
    glEnd();

    glLoadIdentity();

    glTranslated(0.21,-0.215,0);
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 204);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.6,0.1);
    glEnd();
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3ub(119, 119, 60);
    glVertex2f(0.1,-0.3);
    glVertex2f(0.6,-0.3);
    glVertex2f(0.6,0.1);
    glVertex2f(0.1,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 153);
    glVertex2f(-0.22,-0.4);
    glVertex2f(0.02,-0.4);
    glVertex2f(0.02,0.25);
    glVertex2f(-0.22,0.25);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.02,0.25);
    glVertex2f(-0.27,0.46);

    glVertex2f(-0.22,0.25);
    glVertex2f(-0.1,0.33);

    glVertex2f(0.1,0.1);
    glVertex2f(0.6,0.1);

    glVertex2f(0.1,0.0);
    glVertex2f(0.6,0.0);

    glVertex2f(0.1,-0.1);
    glVertex2f(0.6,-0.1);

    glVertex2f(0.1,-0.2);
    glVertex2f(0.6,-0.2);

    glVertex2f(0.1,-0.3);
    glVertex2f(0.6,-0.3);

    glVertex2f(0.1,0.1);
    glVertex2f(0.1,-0.3);

    glVertex2f(0.6,0.1);
    glVertex2f(0.6,-0.3);



    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(128, 64, 0);
    glVertex2f(-0.18,-0.37);
    glVertex2f(-0.02,-0.37);
    glVertex2f(-0.02,0.15);
    glVertex2f(-0.18,0.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(51, 102, 255);
    glVertex2f(-0.14,-0.33);
    glVertex2f(-0.06,-0.33);
    glVertex2f(-0.06,0.08);
    glVertex2f(-0.14,0.08);
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
