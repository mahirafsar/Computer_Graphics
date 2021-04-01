#include <windows.h>
#include <GL/glut.h>

void display(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glColor3f(1,1,1);
    glVertex2f(0.0,1);
    glVertex2f(0.0,-1);

    glColor3f(0,1,0);
    glVertex2f(-1,0.0);
    glVertex2f(1,0.0);
    glEnd();

    glBegin(GL_LINES);
   // glColor3f(1,1,1);
    glColor3ub(255, 102, 255);
    glVertex2f(0.2,0.3);
    glVertex2f(0.8,0.3);
    glVertex2f(0.5,0.8);
    glVertex2f(0.2,0.3);
    glVertex2f(0.8,0.3);
    glVertex2f(0.5,0.8);
    glEnd();

    glBegin(GL_TRIANGLES);
    //glColor3f(1,0,0);
    //glVertex2f(0.8,0.3);
    //glVertex2f(0.6,0.7);
    //glVertex2f(0.4,0.3);

    glColor3f(0,1,0);
    glVertex2f(-0.8,-0.3);
    glVertex2f(-0.6,-0.7);
    glVertex2f(-0.4,-0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(-0.3,0.2);
    glVertex2f(-0.3,0.7);
    glVertex2f(-0.8,0.7);
    glVertex2f(-0.8,0.2);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
    glVertex2f(0.6,-0.6);
    glVertex2f(0.7,-0.5);
    glVertex2f(0.7,-0.3);
    glVertex2f(0.6,-0.2);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.3,-0.3);
    glVertex2f(0.3,-0.5);
    glVertex2f(0.4,-0.6);
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
