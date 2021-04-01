#include <windows.h>
#include <GL/glut.h>

void display(){
    glClearColor(0.0f,0.0f,0.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);

    glColor3f(0,1,0);
    glVertex2f(0,1);
    glVertex2f(0,-1);
    glColor3f(0,0,1);
    glVertex2f(1,0);
    glVertex2f(-1,0);

    glColor3ub(0, 204, 0);
    glVertex2f(0.2,0.2);
    glVertex2f(0.8,0.2);

    glVertex2f(0.5,0.7);
    glVertex2f(0.2,0.2);

    glVertex2f(0.8,0.2);
    glVertex2f(0.5,0.7);
    glEnd();

    glBegin(GL_TRIANGLES);
   // glColor3ub(0, 255, 255);
    //glVertex2f(0.3,0.2);
    //glVertex2f(0.8,0.2);
    //glVertex2f(0.55,0.7);

    glColor3ub(255, 0, 0);
    glVertex2f(-0.5,-0.7);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.8,-0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 0, 255);
    glVertex2f(-0.7,0.2);
    glVertex2f(-0.2,0.2);
    glVertex2f(-0.2,0.7);
    glVertex2d(-0.7,0.7);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(204, 0, 204);
    glVertex2f(0.4,-0.8);
    glVertex2f(0.7,-0.8);
    glVertex2f(0.9,-0.6);
    glVertex2f(0.9,-0.4);
    glVertex2f(0.7,-0.2);
    glVertex2f(0.4,-0.2);
    glVertex2f(0.2,-0.4);
    glVertex2f(0.2,-0.6);
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
