#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<iostream>
#define PI 3.14159265358979323846

using namespace std;

const int font=(int)GLUT_BITMAP_TIMES_ROMAN_24;

float sunPosX=-1.6;
float sunPosY=-.1;
float sunInc=-20;
float sunSpeed=.09;
float cloudScalVal=0;
int gLobal_R=0;
int gLobal_G=0;
int gLobal_B=0;
float carPosX1=-3.8-2.2;
float carPosX2=3.8+2.2;
float car2PosX1=-1.6-2.2;
float car2PosX2=1.6+2.2;
float carSpeed=.01;


GLfloat doorRot=0;
GLfloat doorRot2=0;
GLfloat schoolDoorRot=0;
GLfloat road_ambient[]={.5,.5,.5,.1};
GLfloat ground_ambient[]={.7,.7,.8,.1};
GLfloat path_ambient[]={3.5,3.5,3.5,.1};
GLfloat doorFront_ambient[]={4,4,4,.1};
GLfloat grass_ambient[]={.5,3,.5,.1};


bool isNight=false;
bool midNight=false;

void grass();
void getColor();
void carAnim(int val);
void car();
void streetLight();
void plant(float xdiff);
void demoBuilding();
void commercialBuilding();
void commonBuiliding();
void shop();
void building();
void commonBuilidingLarge();
void windowBack();
void window();
void school();
void renderBitmapString(float x, float y, void *font,const char *string);

void setColor(int r, int g, int b);

void carAnim(int val){
    if(carPosX1>2){
        if(!midNight)
            carPosX1=-3.8;
    }

    if(carPosX2<-2){
        if(!midNight)
        carPosX2=3.8;
    }

    if(car2PosX1>2){
            if(!midNight)
        car2PosX1=-3.8;
    }

    if(car2PosX2<-2){
            if(!midNight)
        car2PosX2=3.8;
    }
    //cout<<midNight<<endl;
    carPosX1+=carSpeed;
    carPosX2-=carSpeed;
    car2PosX1+=carSpeed;
    car2PosX2-=carSpeed;

    //glutPostRedisplay();
    glutTimerFunc(1,carAnim,0);

}

void renderBitmapString(float x, float y, void *font,const char *string){
    const char *c;
    glRasterPos2f(x, y);
    for (c=string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}

void getColor(){
glColor3ub(gLobal_R,gLobal_G,gLobal_B);
}

void Origin(){
    glLoadIdentity();
	glOrtho(-1.8,2,-1,1,-1,1);

}

void Clouds(float xdiff, float ydiff);
void FilledCircle(GLfloat cx,GLfloat cy, GLfloat r, int amount);

void setColor(int r, int g, int b){
gLobal_R=r;
gLobal_G=g;
gLobal_B=b;
glColor3ub(r,g,b);
}

void sunAnim(int val){


    sunPosX=1.75*cos(sunInc*PI/361.0);
    sunPosY=.8*sin(sunInc*PI/361.0);

    sunInc+=sunSpeed;
    //cout<<sunInc<<" "<<sunPosX<<" "<<sunPosY<<endl;
    cout<<sunSpeed<<" "<<sunPosX<<endl;;
    if(sunInc>360)
        sunInc=-20;
    glutPostRedisplay();
    glutTimerFunc(10,sunAnim,0);
}

void cloudAnim(int val){                //cloud update
if(cloudScalVal>=.4)
{
    cloudScalVal=0;
}
cloudScalVal+=.0005;
glutPostRedisplay();
glutTimerFunc(10,cloudAnim,0);
}

void windowBack(){
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.71-.02,-.35);
    glVertex2f(-1.71-.02,-.43);
    glVertex2f(-1.61-.02,-.43);
    glVertex2f(-1.61-.02,-.35);
    glEnd();
}

void window(){

    glColor3ub(66,174,213);
    if(isNight){
    glColor3ub(238,207,12);
    }
    if(midNight){
        glColor3f(0,0,0);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.615-.02,-.355);
    glVertex2f(-1.705-.02,-.355);
    glColor3ub(55,84,114);
    if(isNight){
    glColor3ub(89,78,05);
    }
    if(midNight){
        glColor3f(0,0,0);
    }
    glVertex2f(-1.705-.02,-.425);
    glVertex2f(-1.615-.02,-.425);
    glEnd();
}

void plant(float xdiff){
glColor3ub(107,68,25);
glBegin(GL_POLYGON);
glVertex2f(.105+xdiff,-.44);
glVertex2f(.1+xdiff,-.44);
glVertex2f(.095+xdiff,-.56);
glVertex2f(.11+xdiff,-.56);
glEnd();
glColor3ub(117,183,25);
FilledCircle(.105+xdiff,-.43,.04,100);
FilledCircle(.08+xdiff,-.46,.04,100);
FilledCircle(.12+xdiff,-.46,.04,100);
}

void streetLight(){
glColor3f(0,0,0);

glLineWidth(6);
glBegin(GL_LINES);
glVertex2f(0,-.4);
glVertex2f(0,-.7);
glEnd();
//glLineWidth(7);

//glBegin(GL_LINE_STRIP);
glPointSize(7);
for(int i=0;i<361;i++){
        glBegin(GL_POINTS);
    glVertex2f(.03+.03*cos(i*PI/360.0),-.4+.03*sin(i*PI/360.0));
glEnd();
}
//glEnd();

//glBegin(GL_LINE_STRIP);
for(int i=0;i<361;i++){
    glBegin(GL_POINTS);
    glVertex2f(-.03+.03*cos(i*PI/360.0),-.4+.03*sin(i*PI/360.0));
glEnd();
}
//glEnd();

glColor3f(.8,.8,.8);
if(isNight){
    glColor3ub(238,207,12);
}
FilledCircle(.06,-.41,.03,100);
FilledCircle(-.06,-.41,.03,100);

}

void demoBuilding(){
glBegin(GL_POLYGON);
    glVertex2f(-1.79,0+.3);
    glVertex2f(-1.79,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,0+.3);
    glVertex2f(-1.595,.05+.3);
    glEnd();

    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1.595,.05+.3);
    glVertex2f(-1.39,-.01+.3);
    glVertex2f(-1.39,0+.3);
    glVertex2f(-1.595,.06+.3);
    glVertex2f(-1.80,0+.3);
    glVertex2f(-1.80,-.010+.3);
    glEnd();


    FilledCircle(-1.595,-.0+.3,.03,100);
    glColor3ub(48,87,102);
    FilledCircle(-1.595,-.0+.3,.025,100);

    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.56,-.48);
    glVertex2f(-1.56,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,-.48);
    glEnd();

    //door
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.52,-.50);
    glVertex2f(-1.52,-.62);
    glVertex2f(-1.44,-.62);
    glVertex2f(-1.44,-.50);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-1.515,-.505);
    glVertex2f(-1.515,-.62);
    glVertex2f(-1.445,-.62);
    glVertex2f(-1.445,-.505);
    glEnd();

    glTranslatef(-1.515,0,0);
    glColor3ub(177,107,58);
    if(isNight){
        glColor3ub(177/2,107/2,58/2);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.515+1.515,-.505);
    glVertex2f(-1.515+1.515,-.62);
    glVertex2f(-1.445+1.515,-.62);
    glVertex2f(-1.445+1.515,-.505);
    glEnd();
    glColor3f(1,1,1);
    FilledCircle(-1.455+1.515,-.56,.005,100);

    glTranslatef(1.515,0,0);


    //garage door
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.75,-.5);
    glVertex2f(-1.75,-.62);
    glVertex2f(-1.59,-.62);
    glVertex2f(-1.59,-.5);
    glEnd();
    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.74,-.51);
    glVertex2f(-1.74,-.62);
    glVertex2f(-1.6,-.62);
    glVertex2f(-1.6,-.51);
    glEnd();

    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.76,-.45);
    glVertex2f(-1.76,-.46);
    glVertex2f(-1.42,-.46);
    glVertex2f(-1.42,-.45);
    glEnd();

    //window
    for(int i=1;i<=5;i++){
        for(int j=1;j<=2;j++){
    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.72-.02,-.43);
    glVertex2f(-1.72-.02,-.44);
    glVertex2f(-1.60-.02,-.44);
    glVertex2f(-1.60-.02,-.43);
    glEnd();
    windowBack();
    window();

    glTranslatef(.17,0,0);
    }
    glTranslatef(-.17*2,.15,0);
    }
    Origin();

}

void car(){
getColor();
glBegin(GL_POLYGON);

glVertex2f(-.22,.08);
glVertex2f(-.28,.08);
glVertex2f(-.3,0);
glVertex2f(.3,0);
glVertex2f(.28,.08);
glVertex2f(.2,.08);
glVertex2f(.16,.14);
glVertex2f(-.18,.14);
glEnd();
glColor3f(0,0,0);
glBegin(GL_POLYGON);

glVertex2f(-.17,.13);
glVertex2f(-.21,.07);
glColor3ub(113,113,113);
glVertex2f(.19,.07);
glVertex2f(.15,.13);
glEnd();
getColor();
glBegin(GL_POLYGON);

glVertex2f(-.01,.13);
glVertex2f(-.01,.07);
glVertex2f(.0,.07);
glVertex2f(.0,.13);
glEnd();

glTranslatef(-.15,0,0);
for(int i=0;i<2;i++){
    glColor3f(0,0,0);
    FilledCircle(0,0,.04,100);
    glColor3f(.6,.6,.6);
    FilledCircle(0,0,.02,100);
    glTranslatef(.15+.2,0,0);
}
glTranslatef(-.2-.35,0,0);
glColor3f(.8,.8,.8);
if(isNight){
        glColor3ub(255,235,5);
    }
glBegin(GL_POLYGON);
glVertex2f(.28,.08);
glVertex2f(.26,.08);
glVertex2f(.27,.06);
glVertex2f(.282,.06);
glEnd();
}

void shop(){
    glBegin(GL_POLYGON);
    glVertex2f(-1.79,0);
    glVertex2f(-1.79,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,0);
    glVertex2f(-1.595,.05);
    glEnd();

    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1.595,.05);
    glVertex2f(-1.39,-.01);
    glVertex2f(-1.39,0);
    glVertex2f(-1.595,.06);
    glVertex2f(-1.80,0);
    glVertex2f(-1.80,-.010);
    glEnd();


    FilledCircle(-1.595,-.0,.03,100);
    glColor3ub(48,87,102);
    FilledCircle(-1.595,-.0,.025,100);

    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.56,-.48);
    glVertex2f(-1.56,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,-.48);
    glEnd();

    //door
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.52,-.50);
    glVertex2f(-1.52,-.62);
    glVertex2f(-1.44,-.62);
    glVertex2f(-1.44,-.50);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-1.515,-.505);
    glVertex2f(-1.515,-.62);
    glVertex2f(-1.445,-.62);
    glVertex2f(-1.445,-.505);
    glEnd();

    glTranslatef(-1.515,0,0);
    glColor3ub(177,107,58);
    if(isNight){
        glColor3ub(177/2,107/2,58/2);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.515+1.515,-.505);
    glVertex2f(-1.515+1.515,-.62);
    glVertex2f(-1.445+1.515,-.62);
    glVertex2f(-1.445+1.515,-.505);
    glEnd();
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    FilledCircle(-1.455+1.515,-.56,.005,100);

    glTranslatef(1.515,0,0);

    /*glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,doorFront_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.52,-.62);
    glVertex2f(-1.55,-.64);
    glVertex2f(-1.41,-.64);
    glVertex2f(-1.44,-.62);
    glEnd();
    glDisable(GL_LIGHTING);*/
    //garage door
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.775,-.5);
    glVertex2f(-1.775,-.58);
    glVertex2f(-1.59,-.58);
    glVertex2f(-1.59,-.5);
    glEnd();
    glColor3ub(66,174,213);
    if(isNight){
    glColor3ub(238,207,12);
    }
    if(midNight){
        glColor3f(0,0,0);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.6,-.51);
    glVertex2f(-1.765,-.51);
     glColor3ub(55,84,114);
     if(isNight){
    glColor3ub(89,78,05);
    }
    if(midNight){
        glColor3f(0,0,0);
    }
    glVertex2f(-1.765,-.57);
    glVertex2f(-1.6,-.57);

    glEnd();
    /*glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,doorFront_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.75,-.62);
    glVertex2f(-1.78,-.64);
    glVertex2f(-1.56,-.64);
    glVertex2f(-1.59,-.62);
    glEnd();
    glDisable(GL_LIGHTING);*/

    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.76,-.45);
    glVertex2f(-1.76,-.46);
    glVertex2f(-1.42,-.46);
    glVertex2f(-1.42,-.45);
    glEnd();

    //window
    for(int i=1;i<=3;i++){
        for(int j=1;j<=2;j++){
    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.72-.02,-.43);
    glVertex2f(-1.72-.02,-.44);
    glVertex2f(-1.60-.02,-.44);
    glVertex2f(-1.60-.02,-.43);
    glEnd();
    windowBack();
    window();

    glTranslatef(.17,0,0);
    }
    glTranslatef(-.17*2,.15,0);
    }
    glTranslatef(0,-3*.15,0);
    //Origin();

    for(int i=0;i<5;i++){
            bool red=false;
        glColor3ub(205,182,15);
        for(int j=0;j<2;j++){
            glBegin(GL_QUADS);
            glVertex2f(-1.78,-.46);
            glVertex2f(-1.78,-.51);
            glVertex2f(-1.76,-.51);
            glVertex2f(-1.76,-.46);
            glEnd();
            glColor3ub(126,103,6);
            if(red){
                glColor3ub(79,1,6);
            }
        FilledCircle(-1.77,-.51,.01,100);
        glColor3ub(175,6,27);
        red=true;
        glTranslatef(.02,0,0);
        }
        //glTranslatef(.02,0,0);

    }
    Origin();


}


void building(){
//building
    glColor3ub(204,126,64);
    if(isNight){
        glColor3ub(153,75,32);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1.79,0);
    glVertex2f(-1.79,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,0);
    glVertex2f(-1.595,.05);
    glEnd();

    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1.595,.05);
    glVertex2f(-1.39,-.01);
    glVertex2f(-1.39,0);
    glVertex2f(-1.595,.06);
    glVertex2f(-1.80,0);
    glVertex2f(-1.80,-.010);
    glEnd();


    FilledCircle(-1.595,-.0,.03,100);
    glColor3ub(48,87,102);
    FilledCircle(-1.595,-.0,.025,100);

    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.56,-.48);
    glVertex2f(-1.56,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,-.48);
    glEnd();

    //door
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.52,-.50);
    glVertex2f(-1.52,-.62);
    glVertex2f(-1.44,-.62);
    glVertex2f(-1.44,-.50);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-1.515,-.505);
    glVertex2f(-1.515,-.62);
    glVertex2f(-1.445,-.62);
    glVertex2f(-1.445,-.505);
    glEnd();

    glTranslatef(-1.515,0,0);
    glRotatef(doorRot-doorRot2,0,1,0);
    glColor3ub(177,107,58);
    if(isNight){
        glColor3ub(177/2,107/2,58/2);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.515+1.515,-.505);
    glVertex2f(-1.515+1.515,-.62);
    glVertex2f(-1.445+1.515,-.62);
    glVertex2f(-1.445+1.515,-.505);
    glEnd();
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    FilledCircle(-1.455+1.515,-.56,.005,100);
    Origin();

    /*glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,doorFront_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.52,-.62);
    glVertex2f(-1.55,-.64);
    glVertex2f(-1.41,-.64);
    glVertex2f(-1.44,-.62);
    glEnd();
    glDisable(GL_LIGHTING);
    */

    //garage door
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.75,-.5);
    glVertex2f(-1.75,-.62);
    glVertex2f(-1.59,-.62);
    glVertex2f(-1.59,-.5);
    glEnd();
    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.74,-.51);
    glVertex2f(-1.74,-.62);
    glVertex2f(-1.6,-.62);
    glVertex2f(-1.6,-.51);
    glEnd();
    /*glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,doorFront_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.75,-.62);
    glVertex2f(-1.78,-.64);
    glVertex2f(-1.56,-.64);
    glVertex2f(-1.59,-.62);
    glEnd();
    glDisable(GL_LIGHTING);
    */




    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.76,-.45);
    glVertex2f(-1.76,-.46);
    glVertex2f(-1.42,-.46);
    glVertex2f(-1.42,-.45);
    glEnd();

    //window
    for(int i=1;i<=3;i++){
        for(int j=1;j<=2;j++){
    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.72-.02,-.43);
    glVertex2f(-1.72-.02,-.44);
    glVertex2f(-1.60-.02,-.44);
    glVertex2f(-1.60-.02,-.43);
    glEnd();
    windowBack();
    window();

    glTranslatef(.17,0,0);
    }
    glTranslatef(-.17*2,.15,0);
    }
    Origin();
}

void commercialBuilding(){
glBegin(GL_POLYGON);
glVertex2f(-1.72,-.64);
glVertex2f(-1.3,-.64);
glVertex2f(-1.32,-.62);
glVertex2f(-1.32,-.22);
glVertex2f(-1.34,-.2);
glVertex2f(-1.34,.2);
glVertex2f(-1.36,.22);
glVertex2f(-1.36,.5);
glVertex2f(-1.38,.52);
glVertex2f(-1.38,.8);
glVertex2f(-1.4,.82);
glVertex2f(-1.7,.82);
glVertex2f(-1.72,.8);
//glVertex2f(-1.72,.52);
//glVertex2f(-1.74,.5);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(-1.72,-.64);
glVertex2f(-1.72,.52);
glVertex2f(-1.74,.5);
glVertex2f(-1.74,.22);
glVertex2f(-1.76,.2);
glVertex2f(-1.76,-.2);
glVertex2f(-1.78,-.22);
glVertex2f(-1.78,-.62);
glVertex2f(-1.8,-.64);



glEnd();


glTranslatef(3.6575,2.125,0);
glScalef(3.1,3.75,0);
window();

glTranslatef(.25225,-.08,0);
glScalef(1.15,1,0);
window();

glTranslatef(0.16775,.0605,0);
glScalef(1.1,1.4,0);
window();

glTranslatef(.185,-.08,0);
glScalef(1.11,1,0);
window();
glScalef(1/(1.11*1.1*1.15*3.1),1/(3.75*1.4),1);
glTranslatef(-.1855-.16775-.25225-4.6575-.5,.08-.0605+.08-2.125+.394,0);

glColor3ub(gLobal_R,gLobal_G,gLobal_B);
glBegin(GL_POLYGON);
//glVertex2f(-1.7,-.0);
glVertex2f(-1.7,-.64);
glVertex2f(-1.4,-.64);
glVertex2f(-1.4,-.0);
glVertex2f(-1.45,-.05);
glVertex2f(-1.65,-.05);
glVertex2f(-1.7,-.0);


glEnd();



glColor3ub(66,174,213);

if(isNight){
    glColor3ub(89,78,05);
    }
    if(midNight){
        glColor3f(0,0,0);
    }

glBegin(GL_POLYGON);
//glVertex2f(-1.7,-.0);
glVertex2f(-1.65,-.48);
glVertex2f(-1.45,-.48);
glColor3ub(55,84,114);
if(isNight){
    glColor3ub(238,207,12);
    }
    if(midNight){
        glColor3f(0,0,0);
    }
glVertex2f(-1.45,-.1);
glVertex2f(-1.65,-.1);


glEnd();

glColor3f(.8,.8,.8);
if(isNight){
        glColor3ub(153,153,153);
    }
glBegin(GL_POLYGON);
//glVertex2f(-1.7,-.0);
glVertex2f(-1.65,-.64);
glVertex2f(-1.45,-.64);
//glColor3ub(55,84,114);
glVertex2f(-1.45,-.5);
glVertex2f(-1.65,-.5);

glEnd();

glColor3ub(55,84,114);
if(isNight){
    glColor3ub(89,78,05);
    }
    if(midNight){
        glColor3f(0,0,0);
    }
glBegin(GL_POLYGON);
//glVertex2f(-1.7,-.0);
glVertex2f(-1.63,-.64);
glVertex2f(-1.47,-.64);
glColor3ub(66,174,213);
if(isNight){
    glColor3ub(238,207,12);
    }
    if(midNight){
        glColor3f(0,0,0);
    }
glVertex2f(-1.47,-.52);
glVertex2f(-1.63,-.52);
glEnd();

glColor3f(.8,.8,.8);
if(isNight){
        glColor3ub(153,153,153);
    }
for(int i=0;i<2;i++){
glBegin(GL_POLYGON);
//glVertex2f(-1.7,-.0);
glVertex2f(-1.58,-.64);
glVertex2f(-1.575,-.64);
//glColor3ub(55,84,114);
glVertex2f(-1.575,-.52);
glVertex2f(-1.58,-.52);

glEnd();
glTranslatef(.05,0,0);
//Origin();
}



}

void commonBuilidingLarge(){
    glBegin(GL_POLYGON);
    glVertex2f(-1.79,0+.3);
    glVertex2f(-1.79,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,0+.3);
    glVertex2f(-1.595,.05+.3);
    glEnd();

    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1.595,.05+.3);
    glVertex2f(-1.39,-.01+.3);
    glVertex2f(-1.39,0+.3);
    glVertex2f(-1.595,.06+.3);
    glVertex2f(-1.80,0+.3);
    glVertex2f(-1.80,-.010+.3);
    glEnd();


    FilledCircle(-1.595,-.0+.3,.03,100);
    glColor3ub(48,87,102);
    FilledCircle(-1.595,-.0+.3,.025,100);

    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.56,-.48);
    glVertex2f(-1.56,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,-.48);
    glEnd();

    //door
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.52,-.50);
    glVertex2f(-1.52,-.62);
    glVertex2f(-1.44,-.62);
    glVertex2f(-1.44,-.50);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-1.515,-.505);
    glVertex2f(-1.515,-.62);
    glVertex2f(-1.445,-.62);
    glVertex2f(-1.445,-.505);
    glEnd();

    glTranslatef(-1.515,0,0);
    glColor3ub(177,107,58);
    if(isNight){
        glColor3ub(177/2,107/2,58/2);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.515+1.515,-.505);
    glVertex2f(-1.515+1.515,-.62);
    glVertex2f(-1.445+1.515,-.62);
    glVertex2f(-1.445+1.515,-.505);
    glEnd();
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    FilledCircle(-1.455+1.515,-.56,.005,100);

    glTranslatef(1.515,0,0);

    /*glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,doorFront_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.52,-.62);
    glVertex2f(-1.55,-.64);
    glVertex2f(-1.41,-.64);
    glVertex2f(-1.44,-.62);
    glEnd();
    glDisable(GL_LIGHTING);*/

    //garage door
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.75,-.5);
    glVertex2f(-1.75,-.62);
    glVertex2f(-1.59,-.62);
    glVertex2f(-1.59,-.5);
    glEnd();
    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.74,-.51);
    glVertex2f(-1.74,-.62);
    glVertex2f(-1.6,-.62);
    glVertex2f(-1.6,-.51);
    glEnd();
    /*glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,doorFront_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.75,-.62);
    glVertex2f(-1.78,-.64);
    glVertex2f(-1.56,-.64);
    glVertex2f(-1.59,-.62);
    glEnd();
    glDisable(GL_LIGHTING);*/

    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.76,-.45);
    glVertex2f(-1.76,-.46);
    glVertex2f(-1.42,-.46);
    glVertex2f(-1.42,-.45);
    glEnd();

    //window
    for(int i=1;i<=5;i++){
        for(int j=1;j<=2;j++){
    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.72-.02,-.43);
    glVertex2f(-1.72-.02,-.44);
    glVertex2f(-1.60-.02,-.44);
    glVertex2f(-1.60-.02,-.43);
    glEnd();
    windowBack();
    window();

    glTranslatef(.17,0,0);
    }
    glTranslatef(-.17*2,.15,0);
    }
    Origin();
}

void commonBuiliding(){
    //glColor3ub(204,126,64);
    glBegin(GL_POLYGON);
    glVertex2f(-1.79,0);
    glVertex2f(-1.79,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,0);
    glVertex2f(-1.595,.05);
    glEnd();

    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_POLYGON);
    glVertex2f(-1.595,.05);
    glVertex2f(-1.39,-.01);
    glVertex2f(-1.39,0);
    glVertex2f(-1.595,.06);
    glVertex2f(-1.80,0);
    glVertex2f(-1.80,-.010);
    glEnd();


    FilledCircle(-1.595,-.0,.03,100);
    glColor3ub(48,87,102);
    FilledCircle(-1.595,-.0,.025,100);

    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.56,-.48);
    glVertex2f(-1.56,-.62);
    glVertex2f(-1.4,-.62);
    glVertex2f(-1.4,-.48);
    glEnd();

    //door
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.52,-.50);
    glVertex2f(-1.52,-.62);
    glVertex2f(-1.44,-.62);
    glVertex2f(-1.44,-.50);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2f(-1.515,-.505);
    glVertex2f(-1.515,-.62);
    glVertex2f(-1.445,-.62);
    glVertex2f(-1.445,-.505);
    glEnd();

    glTranslatef(-1.515,0,0);
    glColor3ub(177,107,58);
    if(isNight){
        glColor3ub(177/2,107/2,58/2);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.515+1.515,-.505);
    glVertex2f(-1.515+1.515,-.62);
    glVertex2f(-1.445+1.515,-.62);
    glVertex2f(-1.445+1.515,-.505);
    glEnd();
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    FilledCircle(-1.455+1.515,-.56,.005,100);

    glTranslatef(1.515,0,0);

   /* glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,doorFront_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.52,-.62);
    glVertex2f(-1.55,-.64);
    glVertex2f(-1.41,-.64);
    glVertex2f(-1.44,-.62);
    glEnd();
    glDisable(GL_LIGHTING);*/

    //garage door
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_QUADS);
    glVertex2f(-1.75,-.5);
    glVertex2f(-1.75,-.62);
    glVertex2f(-1.59,-.62);
    glVertex2f(-1.59,-.5);
    glEnd();
    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.74,-.51);
    glVertex2f(-1.74,-.62);
    glVertex2f(-1.6,-.62);
    glVertex2f(-1.6,-.51);
    glEnd();
    /*glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,doorFront_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.75,-.62);
    glVertex2f(-1.78,-.64);
    glVertex2f(-1.56,-.64);
    glVertex2f(-1.59,-.62);
    glEnd();
    glDisable(GL_LIGHTING);*/

    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.76,-.45);
    glVertex2f(-1.76,-.46);
    glVertex2f(-1.42,-.46);
    glVertex2f(-1.42,-.45);
    glEnd();

    //window
    for(int i=1;i<=3;i++){
        for(int j=1;j<=2;j++){
    glColor3ub(87,62, 58);
    glBegin(GL_QUADS);
    glVertex2f(-1.72-.02,-.43);
    glVertex2f(-1.72-.02,-.44);
    glVertex2f(-1.60-.02,-.44);
    glVertex2f(-1.60-.02,-.43);
    glEnd();
    windowBack();
    window();
    glTranslatef(.17,0,0);
    }
    glTranslatef(-.17*2,.15,0);
    }
    Origin();

}

void school(){


    glColor3ub(172,23,27);


    glBegin(GL_POLYGON);
    glVertex2f(.9125,-.2);
    glVertex2f(1.025,-.24);
    glVertex2f(1.755,-.24);
    glVertex2f(1.8675,-.2);
    glEnd();

    for(int i=0;i<2;i++){
    glColor3ub(225,225,192);
    if(isNight){
        glColor3ub(153,153,123);
    }
    glBegin(GL_POLYGON);
    glVertex2f(1.025,-.24);
    glVertex2f(1.025,-.58);
    glVertex2f(1.25,-.58);
    glVertex2f(1.25,-.24);

    glEnd();


    glTranslatef(2.77,.05,0);
    for(int i=0;i<2;i++){
        for(int j=0; j<2;j++){
            windowBack();
            window();

            glColor3f(1,1,1);
            if(isNight){
        glColor3ub(153,153,153);
    }
            glBegin(GL_QUADS);
            glVertex2f(-1.6575-.02,-.355);
            glVertex2f(-1.6625-.02,-.355);
            //glColor3ub(55,84,114);
            glVertex2f(-1.6625-.02,-.425);
            glVertex2f(-1.6575-.02,-.425);
            glEnd();

            glBegin(GL_QUADS);
            glVertex2f(-1.615-.02,-.3875);
            glVertex2f(-1.705-.02,-.3875);
            //glColor3ub(55,84,114);
            glVertex2f(-1.705-.02,-.3925);
            glVertex2f(-1.615-.02,-.3925);
            glEnd();
            glTranslatef(.1,0,0);
        }
        glTranslatef(-2*.1,-.1,0);

    }
    glTranslatef(-2.77,-.05+2*.1,0);

    glTranslatef(.505,0,0);
    }
    glTranslatef(2*-.505,0,0);

    glColor3ub(250,250,214);
    if(isNight){
        glColor3ub(193,193,173);
    }

    glBegin(GL_POLYGON);
    glVertex2f(1.25,-.13);
    glVertex2f(1.25,-.58);
    glVertex2f(1.53,-.58);
    glVertex2f(1.53,-.13);
    glVertex2f(1.39,-.08);

    glEnd();

    glColor3ub(192,26,30);
    glBegin(GL_POLYGON);

    glVertex2f(1.39,-.065);
    glVertex2f(1.22,-.13);
    glVertex2f(1.25,-.13);
    glVertex2f(1.39,-.08);
    glVertex2f(1.53,-.13);
    glVertex2f(1.56,-.13);

    glEnd();
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    FilledCircle(1.39,-.145,.04,100);
    glColor3ub(44,56,126);
    FilledCircle(1.39,-.145,.03,100);


    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    glBegin(GL_POLYGON);
    glVertex2f(1.275,-.195);
    glVertex2f(1.275,-.265);
    glVertex2f(1.505,-.265);
    glVertex2f(1.505,-.195);

    glEnd();

    //signboard
    glColor3ub(44,56,126);
    glBegin(GL_POLYGON);
    glVertex2f(1.28,-.2);
    glVertex2f(1.28,-.26);
    glVertex2f(1.5,-.26);
    glVertex2f(1.5,-.2);

    glEnd();

    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    renderBitmapString(1.295,-.2525,(void *)font,"School");

    glBegin(GL_POLYGON);
    glVertex2f(1.31,-.48);
    glVertex2f(1.31,-.58);
    glVertex2f(1.47,-.58);
    glVertex2f(1.47,-.48);

    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.32,-.49);
    glVertex2f(1.32,-.58);
    glVertex2f(1.46,-.58);
    glVertex2f(1.46,-.49);

    glEnd();
    glTranslatef(1.32,0,0);
    glPushMatrix();
    glRotatef(schoolDoorRot,0,1,0);
    glColor3ub(224,141,65);
    if(isNight){
        glColor3ub(153,75,32);
    }
    glBegin(GL_POLYGON);
    glVertex2f(1.32-1.32,-.49);
    glVertex2f(1.32-1.32,-.58);
    glVertex2f(1.46-1.32,-.58);
    glVertex2f(1.46-1.32,-.49);
    glEnd();
    glColor3f(1,1,1);
    if(isNight){
        glColor3ub(153,153,153);
    }
    FilledCircle(1.45-1.32,-.53,.005,100);

    glPopMatrix();
    glRotatef(0,0,1,0);
    glTranslatef(-1.32,0,0);

    /*glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(1.3925,-.48);
    glVertex2f(1.3925,-.58);
    glVertex2f(1.3975,-.58);
    glVertex2f(1.3975,-.48);

    glEnd();*/


   /* glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,doorFront_ambient);
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(1.25,-.58);
    glVertex2f(1.53,-.58);
    glVertex2f(1.59,-.64);
    glVertex2f(1.19,-.64);
    glEnd();
    glDisable(GL_LIGHTING);
    */
    glTranslatef(2.77+.245,.07,0);
    for(int i=0;i<2;i++){
        for(int j=0; j<2;j++){
            windowBack();
            window();

            glColor3f(1,1,1);
            if(isNight){
        glColor3ub(153,153,153);
    }
            glBegin(GL_QUADS);
            glVertex2f(-1.6575-.02,-.355);
            glVertex2f(-1.6625-.02,-.355);
            //glColor3ub(55,84,114);
            glVertex2f(-1.6625-.02,-.425);
            glVertex2f(-1.6575-.02,-.425);
            glEnd();

            glBegin(GL_QUADS);
            glVertex2f(-1.615-.02,-.3875);
            glVertex2f(-1.705-.02,-.3875);
            //glColor3ub(55,84,114);
            glVertex2f(-1.705-.02,-.3925);
            glVertex2f(-1.615-.02,-.3925);
            glEnd();
            glTranslatef(.1,0,0);
        }
        glTranslatef(-2*.1,-.1,0);

    }
    glTranslatef(-2.77-.245,-.07+2*.1,0);



    for(int i=0;i<2;i++){
    glColor3ub(250,250,214);
    if(isNight){
        glColor3ub(193,193,173);
    }
    glBegin(GL_POLYGON);
    glVertex2f(.8,-.24);
    glVertex2f(.8,-.58);
    glVertex2f(1.025,-.58);
    glVertex2f(1.025,-.24);
    glVertex2f(.9125,-.2);

    glEnd();
    glColor3ub(192,26,30);
    glBegin(GL_POLYGON);
    glVertex2f(.9125,-.185);
    glVertex2f(.77,-.24);
    glVertex2f(.8,-.24);
    glVertex2f(.9125,-.2);
    glVertex2f(1.025,-.24);
    glVertex2f(1.055,-.24);



    glEnd();

    glTranslatef(2.77-.225,.03,0);
    for(int i=0;i<2;i++){
        for(int j=0; j<2;j++){
            windowBack();
            window();

            glColor3f(1,1,1);
            if(isNight){
        glColor3ub(153,153,153);
    }
            glBegin(GL_QUADS);
            glVertex2f(-1.6575-.02,-.355);
            glVertex2f(-1.6625-.02,-.355);
            //glColor3ub(55,84,114);
            glVertex2f(-1.6625-.02,-.425);
            glVertex2f(-1.6575-.02,-.425);
            glEnd();

            glBegin(GL_QUADS);
            glVertex2f(-1.615-.02,-.3875);
            glVertex2f(-1.705-.02,-.3875);
            //glColor3ub(55,84,114);
            glVertex2f(-1.705-.02,-.3925);
            glVertex2f(-1.615-.02,-.3925);
            glEnd();
            glTranslatef(.1,0,0);
        }
        glTranslatef(-2*.1,-.1,0);

    }
    glTranslatef(-2.77+.225,-.03+2*.1,0);


    glTranslatef(.955,0,0);
    }
    glTranslatef(2*-.955,0,0);



}


void grass(){                               //grass
glColor3ub(117,182,26);



    FilledCircle(.88,-.38,.05,360);
    FilledCircle(.92,-.42,.05,360);
    FilledCircle(.88,-.41,.05,360);
    FilledCircle(.83,-.34,.05,360);
    FilledCircle(.83,-.42,.05,360);
    FilledCircle(.72,-.42,.05,360);
    FilledCircle(.77,-.42,.05,360);
    FilledCircle(.77,-.38,.05,360);
    glBegin(GL_POLYGON);
    glVertex2f(.92,-.47);
    glVertex2f(.72,-.47);
    glVertex2f(.82,-.38);
    glEnd();
}

void FilledCircle(GLfloat cx,GLfloat cy, GLfloat r, int amount){   //730 for circle
    int i;
    GLfloat twicePi=2.0f*PI;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(i=0;i<=amount;i++){
        glVertex2f(
            cx+(r*cos(i*twicePi/amount)),
            cy+(r*sin(i*twicePi/amount))
        );


    }
    glEnd();
}
//sun fil
void sun(){

 FilledCircle(0,0,.1,100);
}

void Clouds(float xdiff, float ydiff){
glColor3ub(200,232,245);
FilledCircle(0+xdiff,.08+ydiff,.07,360);

FilledCircle(-.06+xdiff,.08+ydiff,.07,360);
FilledCircle(.06+xdiff,.085+ydiff,.07,360);
FilledCircle(-.06*2+xdiff,.08+ydiff,.07,360);
FilledCircle(.05*2+xdiff,.08+ydiff,.07,360);
FilledCircle(-.04*2+xdiff,.06*2+ydiff,.07,360);
//FilledCircle(.05*2+xdiff,.05*2+ydiff,.07,360);
FilledCircle(0.03+xdiff,.065*2+ydiff,.07,360);
FilledCircle(-0.05*3+xdiff,.04*2+ydiff,.07,360);
}

void display(){

    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    Origin();
    glColor3ub(6,15,32);               //sky
    glBegin(GL_QUADS);
    glVertex2f(2,1);
    glVertex2f(-1.8,1);
    glColor3ub(196,196,196);
    glVertex2f(-1.8,-.3);
    glVertex2f(2,-.3);
    glEnd();

    glColor3ub(243,218,37);
    glPushMatrix();
    glTranslatef(sunPosX,sunPosY,0);
    sun();
    glPopMatrix();
    Origin();

    //cloud
   /* glTranslatef(-.5,.5,0);                           //cloud
    glScalef(.6+cloudScalVal,.6+cloudScalVal,1);
    Clouds(0,0);
    glTranslatef(-1,.2,0);
    Clouds(0,0);
    glTranslatef(-1,.2,0);
    Clouds(.2,0);
    glTranslatef(2.7,0,0);
    Clouds(0,0);
    glTranslatef(1,-.1,0);
    Clouds(0,0);
    glTranslatef(1,-.1,0);
    Clouds(0,0);
    glTranslatef(.5,.3,0);
    Clouds(0,0);
    glTranslatef(.5,-.5,0);
    Clouds(0,0);
    glTranslatef(-.5,-.3,0);
    Clouds(0,0);
    glTranslatef(-4.5,-.1,0);
    Clouds(0,0);
    Origin();   */

    glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,ground_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.8,-.3);
    glVertex2f(-1.8,-1);
    glVertex2f(2,-1);
    glVertex2f(2,-.3);
    glEnd();
    glDisable(GL_LIGHTING);

    //road
    glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,road_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.8,-.7);
    glVertex2f(-1.8,-1);
    glVertex2f(2,-1);
    glVertex2f(2,-.7);
    glEnd();
    glDisable(GL_LIGHTING);

    glColor3ub(255,255,255);
    for(int i=0;i<18;i++){
    glBegin(GL_QUADS);
    glVertex2f(-1.798,-.845);
    glVertex2f(-1.8,-.855);
    glVertex2f(-1.7,-.855);
    glVertex2f(-1.702,-.845);
    glEnd();
    glTranslatef(.25,0,0);
    }
    Origin();



    //footpath
    glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,path_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.8,-.64);
    glVertex2f(-1.8,-.7);
    glVertex2f(2,-.7);
    glVertex2f(2,-.64);
    glEnd();
    glDisable(GL_LIGHTING);

    glColor3f(.3,.3,.3);
    glBegin(GL_QUADS);
    glVertex2f(-1.8,-.7);
    glVertex2f(-1.8,-.715);
    glVertex2f(2,-.715);
    glVertex2f(2,-.7);
    glEnd();

    //grass
    glEnable(GL_LIGHTING);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT,grass_ambient);
    glColor3f(1,1,1);
    glBegin(GL_QUADS);
    glVertex2f(-1.8,-.54);
    glVertex2f(-1.8,-.64);
    glVertex2f(2,-.64);
    glVertex2f(2,-.54);
    glEnd();
    glDisable(GL_LIGHTING);

    Origin();



    glTranslatef(-.15,.08,0);
    glColor3ub(0,150,136);
    demoBuilding();                     //left building
    glTranslatef(-.45,-.15,0);
    glScalef(.6,.6,1);
    setColor(255,255,255);
    commercialBuilding();               //left next building
    Origin();
    glTranslatef(.7,.08,0);
    glColor3ub(204,126,64);
    demoBuilding();
    glTranslatef(.67,-.1,0);
    glScalef(.7,.7,1);
    setColor(248,153,203);
    commercialBuilding();
    Origin();

    glTranslatef(1.55,.08,0);
    glColor3ub(144,52,162);
    demoBuilding();

    glTranslatef(2,.08,0);
    glColor3ub(204,126,64);
    demoBuilding();

    glTranslatef(2.8,.08,0);
    glColor3ub(204,126,64);
    demoBuilding();
    glTranslatef(3.22,.08,0);
    glColor3ub(204,126,64);
    commonBuiliding();
    Origin();

    glTranslatef(2,-.1,0);
    glScalef(.7,.7,1);
    setColor(255,255,255);
    commercialBuilding();
    Origin();
    glTranslatef(3.1,-.1,0);
    glScalef(.7,.7,1);
    setColor(255,255,255);
    commercialBuilding();
    Origin();

    glTranslatef(-1.65,-.4,0);         // grass
    glScalef(.3,.3,1);
    grass();
    glTranslatef(1.5,0,0);
    grass();
    glTranslatef(1.5,-.1,0);
    grass();
    glTranslatef(1.4,0,0);
    grass();
    glTranslatef(1.4,0,0);
    grass();
    glTranslatef(1.4,0,0);
    grass();
    glTranslatef(4,0,0);
    grass();
    Origin();

    building();
    glTranslatef(.42,0,0);
    glColor3ub(0,150,136);
    commonBuiliding();
    glTranslatef(2*.42,0,0);
    glColor3ub(144,52,162);
    commonBuilidingLarge();
    glTranslatef(3*.42,0,0);
    glColor3ub(0,150,136);
    shop();

    school();

    glTranslatef(-1.9,-.07,0);
    float plantX=0;
    plant(0);
    plantX+=.43;
    plant(plantX);
    plantX+=.43;
    plant(plantX);
    plantX+=.4;
    plant(plantX);
    plantX+=.4;
    plant(plantX);
    plantX+=.52;
    plant(plantX);
    plantX+=.42;
    plant(plantX);
    plantX+=.32;
    plant(plantX);
    plantX+=.52;
    plant(plantX);
    plantX+=.32;
    plant(plantX);
    Origin();

    glTranslatef(4*.42,0,0);
    setColor(255,255,255);
    commercialBuilding();
    Origin();
    glScalef(.8,.8,0);
    glTranslatef(5*.455,-.16,0);
    setColor(251,255,171);
    commercialBuilding();
    Origin();

    glTranslatef(-1.6,0,0);
    for(int i=0;i<5;i++){
    streetLight();
    glTranslatef(.8,0,0);
    }
    Origin();


    glPushMatrix();
    glTranslatef(carPosX1,0,0);
    setColor(137,0,3);
    glTranslatef(0,-.8,0);
    glScalef(.6,.6,1);
    car();
    glTranslatef(.7,0,0);
    setColor(5,25,102);
    car();
    glTranslatef(1,0,0);
    setColor(255,255,255);
    car();
    glTranslatef(.9,0,0);
    setColor(148,148,148);
    car();
    glPopMatrix();
    Origin();

    setColor(5,25,102);
    glPushMatrix();
    glTranslatef(carPosX2,0,0);
    glRotatef(180,0,1,0);
    glTranslatef(0,-.95,0);
    glScalef(.6,.6,1);
    car();
    glTranslatef(.7,0,0);
    setColor(103,0,5);
    car();
    glTranslatef(1,0,0);
    setColor(225,199,99);
    car();
    glTranslatef(.9,0,0);
    setColor(55,255,0);
    car();
    glPopMatrix();
    Origin();


    glPushMatrix();
    glTranslatef(car2PosX1,0,0);
    setColor(137,0,3);
    glTranslatef(0,-.8,0);
    glScalef(.6,.6,1);
    car();
    glTranslatef(.7,0,0);
    setColor(103,0,5);
    car();
    glTranslatef(1,0,0);
    setColor(225,199,99);
    car();
    glTranslatef(.9,0,0);
    setColor(55,255,0);
    car();


    glPopMatrix();
    Origin();

    setColor(5,25,102);
    glPushMatrix();
    glTranslatef(car2PosX2,0,0);
    glRotatef(180,0,1,0);
    glTranslatef(0,-.95,0);
    glScalef(.6,.6,1);
    car();
    glTranslatef(.7,0,0);
    setColor(5,25,102);
    car();
    glTranslatef(1,0,0);
    setColor(255,255,255);
    car();
    glTranslatef(.9,0,0);
    setColor(148,148,148);
    car();
    glPopMatrix();
    Origin();


    glFlush();
}

int main(int argc,char** argv){
    glutInit(&argc,argv);
    glutCreateWindow("Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutTimerFunc(100,sunAnim,0);
    glutTimerFunc(100,cloudAnim,0);
    glutTimerFunc(100,carAnim,0);
    glutMainLoop();
    return 0;
}
