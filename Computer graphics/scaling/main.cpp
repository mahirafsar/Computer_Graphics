#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>

void circle(int x,int y)
{
   float theta;
    glLoadIdentity();
   glBegin(GL_LINE_LOOP);
   glColor3f(1.0,1.0,1.0);
   for(int i=0;i<360;i++)
   {
       theta=i*(3.1416/180);
       glVertex2f(x+150*cos(theta),y+150*sin(theta));
   }

   glEnd();
}
void penalty_mark_left(int x,int y)
{
   float theta;
   glBegin(GL_POLYGON);
   glLoadIdentity();
   glColor3f(1.0,1.0,1.0);
   for(int i=0;i<360;i++)
   {
       theta=i*(3.1416/180);
       glVertex2f(x+5*cos(theta),y+5*sin(theta));
   }
   glEnd();
}

void penalty_mark_right(int x,int y)
{
   float theta;
   glLoadIdentity();
   glBegin(GL_POLYGON);
   glColor3f(1.0,1.0,1.0);
   for(int i=0;i<360;i++)
   {
       theta=i*(3.1416/180);
       glVertex2f(x+5*cos(theta),y+5*sin(theta));
   }
   glEnd();
}

void D_Box_Arc_left(int x,int y)
{
   float th;
    glLoadIdentity();
   glBegin(GL_LINE_LOOP);
   glColor3f(1,1,1);
   for(int i=0;i<360;i++)
   {
       if(i<49 ){
           th=i*(3.1416/180);
       glVertex2f(x+75*cos(th),y+75*sin(th));}
        if(i>311 ){
           th=i*(3.1416/180);
       glVertex2f(x+75*cos(th),y+75*sin(th));}
   }
   glEnd();
}
void D_Box_Arc_right(int x,int y)
{
   float th;
    glLoadIdentity();
   glBegin(GL_LINE_LOOP);
   glColor3f(1,1,1);
   for(int i=0;i<360;i++)
   {
     if(i>131 )
     {
        th=i*(3.1416/180);
        glVertex2f(x+75*cos(th),y+75*sin(th));
        if(i>227)
        {
            break;
        }
     }
   }
   glEnd();
}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    //glScalef(1,0.6,0);
    glColor3f (.2, 0.8, 0.5);//The field
    //glScalef(1,0.6,0);
    glBegin(GL_POLYGON);
        glVertex2f (0,0);
        glVertex2f (950, 0);
        glVertex2f (950, 950);
        glVertex2f (0, 950);

    glEnd();

    glColor3f(1.0,1.0,1.0);/*half line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (470, 0);
        glVertex2f (470, 950);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*left D-Box lower horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (0, 250);
        glVertex2f (200, 250);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left D-Box vertical line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (200, 250);
        glVertex2f (200, 750);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left D-Box upper horizontal line */
    glBegin(GL_LINE_LOOP);
        glVertex2f (0, 750);
        glVertex2f (200, 750);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right D-Box lower horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (750, 250);
        glVertex2f (950, 250);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right D-Box upper horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (750, 750);
        glVertex2f (950, 750);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right D-Box vertical line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (750, 250);
        glVertex2f (750, 750);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left penalty box lower horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (0, 340);
        glVertex2f (95, 340);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left penalty box upper horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (0, 660);
        glVertex2f (95, 660);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Left penalty box vertical line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (95, 340);
        glVertex2f (95, 660);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right penalty box lower horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (850, 340);
        glVertex2f (950, 340);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right penalty box upper horizontal line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (850, 660);
        glVertex2f (950, 660);
    glEnd();

    glColor3f(1.0,1.0,1.0);/*Right penalty box vertical line*/
    glBegin(GL_LINE_LOOP);
        glVertex2f (850, 340);
        glVertex2f (850, 660);
    glEnd();


    circle(470,470);
    penalty_mark_left(130,500);
    penalty_mark_right(820,500);

    D_Box_Arc_left(150,500);
    D_Box_Arc_right(800,500);

    glutSwapBuffers();
    glLoadIdentity();
    glFlush();
}

void init ()
{
    glClearColor (0.5, 0.6, 0.7, 0.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,950,0,950);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(950,950);
    glutInitWindowPosition(0,0);
    glutCreateWindow("AIUB");
    init();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
