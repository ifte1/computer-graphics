#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
void display()
 {

    glBegin(GL_QUADS);///road
    glColor3ub(148, 148, 184);
    glVertex2f(-1,-1);
    glVertex2f(1,-1);
    glVertex2f(1,1);
    glVertex2f(-1,1);
    glEnd();
	glFlush();

    glBegin(GL_POLYGON);//river
    glColor3ub(102, 102, 255);
    glVertex2f(1,.8);
    glVertex2f(.2,.8);
    glVertex2f(-.1,.1);
    glVertex2f(-.2,-.5);
    glVertex2f(-.2,-1);
    glVertex2f(1,-1);
    glEnd();
	glFlush();



	glBegin(GL_QUADS);///LEFT SIDE SPACE
    glColor3ub(242, 242, 242);
    glVertex2f(-.25,.1);
    glVertex2f(-.2,.7);
    glVertex2f(-1,.7);
    glVertex2f(-1,-1);
    glEnd();


glBegin(GL_QUADS);///LEFT SIDE SPACE
    glColor3ub(242, 242, 242);
    glVertex2f(-.35,-.5);
    glVertex2f(-.25,.1);
    glVertex2f(-1,.1);
    glVertex2f(-1,-1);
    glEnd();

    glBegin(GL_QUADS);///MIDDLE ROAD
    glColor3ub(148, 148, 184);
    glVertex2f(-.25,-.4);
    glVertex2f(-.25,-.2);
    glVertex2f(-1,-.2);
    glVertex2f(-1,-.4);
    glEnd();

    glBegin(GL_LINES);///MIDDLE ROAD middle line
    glColor3ub(179,179,179);
    glVertex2f(-1,-.3);
    glVertex2f(-.3,-.3);
    glEnd();
	glFlush();


 glBegin(GL_QUADS);///LEFT SIDE SPACE
    glColor3ub(242, 242, 242);
    glVertex2f(-.35,-1);
    glVertex2f(-.35,-.5);
    glVertex2f(-1,-.5);
    glVertex2f(-1,-1);
    glEnd();


    glScalef(0.7,0.7,0);//bigboat
    glBegin(GL_QUADS);
    glColor3ub(255, 204, 255);
    glVertex2f(.1,-.5);
    glVertex2f(.2,-.6);
    glVertex2f(.7,-.6);
    glVertex2f(.8,-.5);
    glEnd();
    glLoadIdentity();
	glFlush();

    glScalef(0.7,0.7,0);
    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(.3,-.5);
    glVertex2f(.6,-.5);
     glVertex2f(.6,-.4);
    glVertex2f(.3,-.4);
    glEnd();
    glLoadIdentity();
	glFlush();

    glScalef(0.7,0.7,0);
    glBegin(GL_QUADS);
    glColor3ub(255,92,51);
    glVertex2f(.35,-.31);
    glVertex2f(.55,-.31);
     glVertex2f(.55,-.4);
    glVertex2f(.35,-.4);
    glEnd();
    glLoadIdentity();
	glFlush();

	 glScalef(0.7,0.7,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 217);
    glVertex2f(.4,-.20);
    glVertex2f(.52,-.20);
     glVertex2f(.52,-.31);
    glVertex2f(.4,-.31);
    glEnd();
    glLoadIdentity();
	glFlush();




                 /// ROAD ROUND

				GLfloat x=-.25f; GLfloat y=-.25f; GLfloat radius =.03f;
	int i;
	int lineAmount = 100;
	GLfloat twicePi = 2.0f * PI;
	int triangleAmount = 20;
    x=-.01f,y=0.79f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
                glColor3ub(230,230,230);
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();




                GLfloat radius1 =.06f;

    x=.8f,y=0.9f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
                glColor3ub(255, 255, 77);
			glVertex2f(
		            x + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();



	///BOX

	glBegin(GL_QUADS);
    glColor3ub(255, 51, 51);
    glVertex2f(-.4,-1);
    glVertex2f(-.4,-.9);
    glVertex2f(-.6,-.9);
    glVertex2f(-.6,-1);
    glEnd();
glFlush();


/// box upper

	glBegin(GL_QUADS);
    glColor3ub(0, 204, 102);
    glVertex2f(-.4,-.2);
    glVertex2f(-.4,-.1);
    glVertex2f(-.6,-.1);
    glVertex2f(-.6,-.2);
    glEnd();
glFlush();

glBegin(GL_QUADS);///BOX
    glColor3ub(255, 255, 102);
    glVertex2f(-.43,-.9);
    glVertex2f(-.43,-.82);
    glVertex2f(-.57,-.82);
    glVertex2f(-.57,-.9);
    glEnd();
glFlush();

///box upper
glBegin(GL_QUADS);///BOX
    glColor3ub(255, 255, 102);
    glVertex2f(-.43,-.1);
    glVertex2f(-.43,-.01);
    glVertex2f(-.57,-.01);
    glVertex2f(-.57,-.1);
    glEnd();
glFlush();


glBegin(GL_QUADS);///BOX
    glColor3ub(255, 51, 51);
    glVertex2f(-.42,-.82);
    glVertex2f(-.42,-.75);
    glVertex2f(-.56,-.75);
    glVertex2f(-.56,-.82);
    glEnd();
glFlush();

///upper box

glBegin(GL_QUADS);///BOX
    glColor3ub(51, 51, 255);
    glVertex2f(-.61,-0.2);
    glVertex2f(-.61,-0.1);
    glVertex2f(-.8,-0.1);
    glVertex2f(-.8,-.2);
    glEnd();
glFlush();

glBegin(GL_QUADS);///BOX
    glColor3ub(102, 255, 51);
    glVertex2f(-.61,-1);
    glVertex2f(-.61,-.9);
    glVertex2f(-.8,-.9);
    glVertex2f(-.8,-1);
    glEnd();
glFlush();


glBegin(GL_QUADS);///BOX
    glColor3ub(230, 0, 92);
    glVertex2f(-.62,-.9);
    glVertex2f(-.62,-.79);
    glVertex2f(-.79,-.79);
    glVertex2f(-.79,-.9);
    glEnd();
glFlush();

///upper box

glBegin(GL_QUADS);///BOX
    glColor3ub(230, 0, 92);
    glVertex2f(-.62,-.1);
    glVertex2f(-.62,-.01);
    glVertex2f(-.79,-.01);
    glVertex2f(-.79,-.1);
    glEnd();
glFlush();

glBegin(GL_QUADS);///BOX
    glColor3ub(255, 255, 102);
    glVertex2f(-.81,-1);
    glVertex2f(-.81,-.8);
    glVertex2f(-1,-.8);
    glVertex2f(-1,-1);
    glEnd();
glFlush();

///upper box

glBegin(GL_QUADS);///BOX
    glColor3ub(255, 0, 128);
    glVertex2f(-.81,-.2);
    glVertex2f(-.81,-.1);
    glVertex2f(-1,-.1);
    glVertex2f(-1,-.2);
    glEnd();
glFlush();

glBegin(GL_QUADS);///BOX
    glColor3ub(26, 117, 255);
    glVertex2f(-.82,-.8);
    glVertex2f(-.82,-.72);
    glVertex2f(-.99,-.72);
    glVertex2f(-.99,-.8);
    glEnd();
glFlush();



///upper box

glBegin(GL_QUADS);///BOX
    glColor3ub(26, 117, 255);
    glVertex2f(-.82,-.1);
    glVertex2f(-.82,-.01);
    glVertex2f(-.99,-.01);
    glVertex2f(-.99,-.1);
    glEnd();
glFlush();

///FIRST CAR

    glBegin(GL_QUADS);///First car
     glVertex2f(-.76,0.93);
    glVertex2f(-.76,0.86);
    glVertex2f(-.9,0.86);
    glVertex2f(-.9,0.93);
    glEnd();
	glFlush();


        GLfloat radius2 =.02f;
	int lineAmoun = 200;
	int triangleAmoun = 30;
    x=-.795f,y=0.85f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmoun;i++) {
                glColor3ub(0,0,0);
			glVertex2f(
		            x + (radius2 * cos(i *  twicePi / triangleAmoun)),
			    y + (radius2 * sin(i * twicePi / triangleAmoun))
			);
		}
	glEnd();
	glFlush();


	 x=-.2f;  y=-.2f;  radius =.02f;
	i;
	lineAmount = 100;
	 twicePi = 2.0f * PI;
	 triangleAmount = 20;
    x=-.85f,y=0.85f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
                glColor3ub(0,0,0);
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();


 glBegin(GL_QUADS);
    glColor3ub(255, 102, 102);
    glVertex2f(-.76,0.93);
    glVertex2f(-.83,.962);
    glVertex2f(-.83,.962);
    glVertex2f(-.81,.93);
    glEnd();
	glFlush();

	 glBegin(GL_QUADS);
    glColor3ub(255, 102, 102);
    glVertex2f(-.80,0.96);
    glVertex2f(-.80,.93);
    glVertex2f(-.88,.93);
    glVertex2f(-.88,.96);
    glEnd();
	glFlush();





	///2ND CAR

    glBegin(GL_QUADS);
     glVertex2f(-.1,0.91);
    glVertex2f(-.1,0.86);
    glVertex2f(-.24,0.86);
    glVertex2f(-.24,0.91);
    glEnd();
	glFlush();


        GLfloat radius3 =.02f;
	int lineAmoun1 = 200;
	int triangleAmoun1 = 30;
    x=-.21f,y=0.85f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmoun1;i++) {
                glColor3ub(0,0,0);
			glVertex2f(
		            x + (radius3 * cos(i *  twicePi / triangleAmoun1)),
			    y + (radius3 * sin(i * twicePi / triangleAmoun1))
			);
		}
	glEnd();
	glFlush();


	 x=-.13f;  y=-.2f;  radius =.02f;
	i;
	lineAmount = 100;
	 twicePi = 2.0f * PI;
	 triangleAmount = 20;
    x=-.14f,y=0.85f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
                glColor3ub(0,0,0);
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();


 glBegin(GL_QUADS);
    glColor3ub(255, 102, 102);
    glVertex2f(-.24,0.90);
    glVertex2f(-.17,.95);
    glVertex2f(-.17,.95);
    glVertex2f(-.20,.90);
    glEnd();
	glFlush();




	  ///3RD CAR
       glBegin(GL_QUADS);///First car
     glVertex2f(-.76,-0.36);
    glVertex2f(-.76,-0.30);
    glVertex2f(-.9,-0.30);
    glVertex2f(-.9,-0.36);
    glEnd();
	glFlush();



    x=-.795f,y=-0.36f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmoun;i++) {
                glColor3ub(0,0,0);
			glVertex2f(
		            x + (radius2 * cos(i *  twicePi / triangleAmoun)),
			    y + (radius2 * sin(i * twicePi / triangleAmoun))
			);
		}
	glEnd();
	glFlush();


	 x=-.2f;  y=-.2f;  radius =.02f;
	i;
	lineAmount = 100;
	 twicePi = 2.0f * PI;
	 triangleAmount = 20;
    x=-.85f,y=-0.36f;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
                glColor3ub(0,0,0);
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();



	 glBegin(GL_QUADS);
    glColor3ub(255, 255, 128);
    glVertex2f(-.80,-0.3);
    glVertex2f(-.80,-.27);
    glVertex2f(-.88,-.27);
    glVertex2f(-.88,-.3);
    glEnd();
	glFlush();


///boat small

glBegin(GL_QUADS);
    glColor3ub(128, 255, 191);//second small boat
    glVertex2f(.5,.22);
    glVertex2f(.2,.2);
    glVertex2f(.25,.09);
    glVertex2f(.45,.1);
    glEnd();
	glFlush();

    glBegin(GL_QUADS);
    glColor3ub(204,153,0);
    glVertex2f(.3,.25);
    glVertex2f(.3,.2);
    glVertex2f(.4,.2);
    glVertex2f(.4,.25);
    glEnd();
	glFlush();












 }
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
