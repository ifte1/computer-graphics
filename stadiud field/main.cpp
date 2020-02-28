//ASSIGNMENT STADIUM

#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
void display()
 {


	glBegin(GL_QUADS);///football
    glColor3ub(71, 209, 71);
    glVertex2f(.2,-1);
    glVertex2f(.2,1);
    glVertex2f(-1,1);
    glVertex2f(-1,-1);
    glEnd();
	glFlush();


    glBegin(GL_LINES);///football goalpost right
    glColor3ub(255,255,255);
    glVertex2f(0.14,.2);
    glVertex2f(0.19,0.25);
    glEnd();
	glFlush();

    glBegin(GL_LINES);///football goalpost right
    glColor3ub(255,255,255);
    glVertex2f(0.19,.25);
    glVertex2f(0.19,0.5);
    glEnd();
	glFlush();

    glBegin(GL_LINES);///football goalpost right
    glColor3ub(255,255,255);
    glVertex2f(0.14,.45);
    glVertex2f(0.19,0.5);
    glEnd();
	glFlush();

	glBegin(GL_LINES);///football goalpost right
    glColor3ub(255,255,255);
    glVertex2f(0.14,-.25);
    glVertex2f(0.14,1);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///football goalpost line right
    glColor3ub(255,255,255);
    glVertex2f(0.14,.15);
    glVertex2f(0,.15);
    glEnd();
	glFlush();

	glBegin(GL_LINES);///football goalpost line right
    glColor3ub(255,255,255);
    glVertex2f(0,.15);
    glVertex2f(0,.55);
    glEnd();
	glFlush();

	glBegin(GL_LINES);///football goalpost line right
    glColor3ub(255,255,255);
    glVertex2f(0.14,.55);
    glVertex2f(0,.55);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///football goalpost left
    glColor3ub(255,255,255);
    glVertex2f(-0.94,.2);
    glVertex2f(-0.99,0.25);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///football goalpost left
    glColor3ub(255,255,255);
    glVertex2f(-0.99,.25);
    glVertex2f(-0.99,0.5);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///football goalpost left
    glColor3ub(255,255,255);
    glVertex2f(-0.94,.45);
    glVertex2f(-0.99,0.5);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///football goalpost left
    glColor3ub(255,255,255);
    glVertex2f(-0.94,-.2);
    glVertex2f(-0.94,1);
    glEnd();
	glFlush();


		glBegin(GL_LINES);///football goalpost line left
    glColor3ub(255,255,255);
    glVertex2f(-0.94,.15);
    glVertex2f(-0.80,.15);
    glEnd();
	glFlush();

	glBegin(GL_LINES);///football goalpost line left
    glColor3ub(255,255,255);
    glVertex2f(-.80,.15);
    glVertex2f(-.80,.55);
    glEnd();
	glFlush();

	glBegin(GL_LINES);///football goalpost line right
    glColor3ub(255,255,255);
    glVertex2f(-0.94,.55);
    glVertex2f(-.80,.55);
    glEnd();
	glFlush();




    glBegin(GL_LINES);///football middle line
    glColor3ub(255,255,255);
    glVertex2f(-0.387,-.25);
    glVertex2f(-0.387,1);
    glEnd();
	glFlush();

    glBegin(GL_LINES);///football boundary downword
    glColor3ub(255,255,255);
    glVertex2f(0.2,-.2);
    glVertex2f(-0.94,-0.2);
    glEnd();
	glFlush();




            ///Football middle circle
	GLfloat x=-.387f; GLfloat y=.38f; GLfloat radius =.2f;
	int i;
	int lineAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI ;
	glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();
    glFlush();  // Render now






	glBegin(GL_QUADS);///Tenis
    glColor3ub(0, 204, 255);
    glVertex2f(1,-.2);
    glVertex2f(1,1);
    glVertex2f(.6,1);
    glVertex2f(.6,-.2);
    glEnd();
    glFlush();


    glBegin(GL_LINES);///tennis boundary
    glColor3ub(255,255,255);
    glVertex2f(0.61,-.199);
    glVertex2f(0.61,0.99);
    glEnd();
	glFlush();

	glBegin(GL_LINES);///tennis boundary
    glColor3ub(255,255,255);
    glVertex2f(0.61,-.199);
    glVertex2f(0.99,-0.199);
    glEnd();
	glFlush;

	glBegin(GL_LINES);///tennis boundary
    glColor3ub(255,255,255);
    glVertex2f(0.99,-.199);
    glVertex2f(0.99,0.99);
    glEnd();
	glFlush();

    glBegin(GL_LINES);///tennis boundary
    glColor3ub(255,255,255);
    glVertex2f(0.99,0.99);
    glVertex2f(0.61,.99);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///tennis court
    glColor3ub(255,255,255);
    glVertex2f(0.65,-.199);
    glVertex2f(0.65,0.99);
    glEnd();
	glFlush();

	glBegin(GL_LINES);///tennis court
    glColor3ub(255,255,255);
    glVertex2f(0.95,-.199);
    glVertex2f(0.95,0.99);
    glEnd();
	glFlush();



    glBegin(GL_LINES);///tennis court
    glColor3ub(255,255,255);
    glVertex2f(0.65,.445);
    glVertex2f(0.95,0.445);
    glEnd();
	glFlush();

    glBegin(GL_LINES);///tennis court
    glColor3ub(255,255,255);
    glVertex2f(0.65,.745);
    glVertex2f(0.95,0.745);
    glEnd();
	glFlush();



   glBegin(GL_LINES);///tennis court
    glColor3ub(255,255,255);
    glVertex2f(0.65,.15);
    glVertex2f(0.95,0.15);
    glEnd();
	glFlush();


    glBegin(GL_LINES);///tennis court
    glColor3ub(255,255,255);
    glVertex2f(0.8,.15);
    glVertex2f(0.8,0.745);
    glEnd();
	glFlush();


	 glBegin(GL_LINES);///tennis court
    glColor3ub(255,255,255);
    glVertex2f(0.65,.43);
    glVertex2f(0.95,0.43);
    glEnd();
	glFlush();


	 glBegin(GL_LINES);///tennis court
    glColor3ub(255,255,255);
    glVertex2f(0.65,.41);
    glVertex2f(0.95,0.41);
    glEnd();
	glFlush();


	 glBegin(GL_LINES);///tennis court
    glColor3ub(255,255,255);
    glVertex2f(0.65,.465);
    glVertex2f(0.95,0.465);
    glEnd();
	glFlush();


    glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.67,.465);
    glVertex2f(0.67,0.41);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.69,.465);
    glVertex2f(0.69,0.41);
    glEnd();
	glFlush();



    glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.71,.465);
    glVertex2f(0.71,0.41);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.73,.465);
    glVertex2f(0.73,0.41);
    glEnd();
	glFlush();



    glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.75,.465);
    glVertex2f(0.75,0.41);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.77,.465);
    glVertex2f(0.77,0.41);
    glEnd();
	glFlush();



    glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.79,.465);
    glVertex2f(0.79,0.41);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.81,.465);
    glVertex2f(0.81,0.41);
    glEnd();
	glFlush();


		 glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.83,.465);
    glVertex2f(0.83,0.41);
    glEnd();
	glFlush();



    glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.85,.465);
    glVertex2f(0.85,0.41);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.87,.465);
    glVertex2f(0.87,0.41);
    glEnd();
	glFlush();


    glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.89,.465);
    glVertex2f(0.89,0.41);
    glEnd();
	glFlush();




	 glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.91,.465);
    glVertex2f(0.91,0.41);
    glEnd();
	glFlush();


    glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.93,.465);
    glVertex2f(0.93,0.41);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///tennis court
    glColor3ub(0,0,0);
    glVertex2f(0.67,.436);
    glVertex2f(0.93,0.436);
    glEnd();
	glFlush();


	 glBegin(GL_LINES);///tennis court net
    glColor3ub(0,0,0);
    glVertex2f(0.67,.420);
    glVertex2f(0.93,0.420);
    glEnd();
	glFlush();




    glBegin(GL_QUADS);///volybal
    glColor3ub(0, 204, 255);
    glVertex2f(1,-1);
    glVertex2f(1,-.2);
    glVertex2f(.2,-.2);
    glVertex2f(.2,-1);
    glEnd();
    glFlush();


     glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.22,-.220);
    glVertex2f(0.98,-0.220);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.22,-.98);
    glVertex2f(0.98,-0.98);
    glEnd();
	glFlush();


    glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.22,-.22);
    glVertex2f(0.22,-0.98);
    glEnd();
	glFlush();


    glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.98,-.22);
    glVertex2f(0.98,-0.98);
    glEnd();
	glFlush();

  glBegin(GL_QUADS);///volyeeball court
    glColor3ub(255, 148, 77);
    glVertex2f(.85,-.82);
    glVertex2f(.85,-.36);
    glVertex2f(.32,-.36);
    glVertex2f(.32,-.82);
    glEnd();
    glFlush();

    glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.585,-.82);
    glVertex2f(0.585,-0.36);
    glEnd();
	glFlush();


    glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.46,-.82);
    glVertex2f(0.46,-0.36);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///volyball court
    glColor3ub(255,255,255);
    glVertex2f(0.70,-.82);
    glVertex2f(0.70,-0.36);
    glEnd();
	glFlush();


	 glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.54,-.82);
    glVertex2f(0.54,-0.36);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.62,-.82);
    glVertex2f(0.62,-0.36);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.56,-.82);
    glVertex2f(0.56,-0.36);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///volyball court net
    glColor3ub(255,255,255);
    glVertex2f(0.60,-.82);
    glVertex2f(0.60,-0.36);
    glEnd();
	glFlush();

	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.82);
    glVertex2f(0.62,-0.80);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.80);
    glVertex2f(0.62,-0.78);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.78);
    glVertex2f(0.62,-0.76);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.76);
    glVertex2f(0.62,-0.74);
    glEnd();
	glFlush();


		glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.74);
    glVertex2f(0.62,-0.72);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.72);
    glVertex2f(0.62,-0.70);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.70);
    glVertex2f(0.62,-0.68);
    glEnd();
	glFlush();



	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.68);
    glVertex2f(0.62,-0.66);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.66);
    glVertex2f(0.62,-0.64);
    glEnd();
	glFlush();


		glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.64);
    glVertex2f(0.62,-0.62);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.62);
    glVertex2f(0.62,-0.60);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.60);
    glVertex2f(0.62,-0.58);
    glEnd();
	glFlush();



		glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.58);
    glVertex2f(0.62,-0.56);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.56);
    glVertex2f(0.62,-0.54);
    glEnd();
	glFlush();


		glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.54);
    glVertex2f(0.62,-0.52);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.52);
    glVertex2f(0.62,-0.50);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.50);
    glVertex2f(0.62,-0.48);
    glEnd();
	glFlush();



	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.48);
    glVertex2f(0.62,-0.46);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.46);
    glVertex2f(0.62,-0.44);
    glEnd();
	glFlush();


		glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.44);
    glVertex2f(0.62,-0.42);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.42);
    glVertex2f(0.62,-0.40);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.40);
    glVertex2f(0.62,-0.38);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.54,-.38);
    glVertex2f(0.62,-0.36);
    glEnd();
	glFlush();



	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.55,-.82);
    glVertex2f(0.55,-0.36);
    glEnd();
	glFlush();

	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.57,-.82);
    glVertex2f(0.57,-0.36);
    glEnd();
	glFlush();


	glBegin(GL_LINES);///volyball court net
    glColor3ub(0,0,0);
    glVertex2f(0.60,-.82);
    glVertex2f(0.60,-0.36);
    glEnd();
	glFlush();

    glBegin(GL_QUADS);///Basketball
    glColor3ub(38, 153, 0);
    glVertex2f(.6,-.2);
    glVertex2f(.6,1);
    glVertex2f(.2,1);
    glVertex2f(.2,-.2);
    glEnd();
    glFlush();


    glBegin(GL_LINES);///Basketball court
    glColor3ub(255,255,255);
    glVertex2f(0.21,.99);
    glVertex2f(0.21,-0.19);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///Basketball court
    glColor3ub(255,255,255);
    glVertex2f(0.21,.99);
    glVertex2f(0.59,0.99);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///Basketball court
    glColor3ub(255,255,255);
    glVertex2f(0.21,-.19);
    glVertex2f(0.59,-0.19);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///Basketball court
    glColor3ub(255,255,255);
    glVertex2f(0.59,-0.19);
    glVertex2f(0.59,.99);
    glEnd();
	glFlush();

	 glBegin(GL_LINES);///Basketball court middle line
    glColor3ub(255,255,255);
    glVertex2f(0.59,0.43);
    glVertex2f(0.21,0.43);
    glEnd();
	glFlush();



	      /// basketball court circle
	    glColor3ub(0, 204, 255);
	GLfloat x1=.4f; GLfloat y1=.43f; GLfloat radius1 =.07f;
	int triangleAmount = 20; //# of triangles used to draw circle
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glFlush();  // Render now



      /// basketball court circle
	    glColor3ub(255, 148, 77);
	GLfloat x2=.4f; GLfloat y2=.93f; GLfloat radius2 =.15f;
	int triangleAmount1 = 30; //# of triangles used to draw circle
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount1)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount1))
			);
		}
	glEnd();
	glFlush();  // Render now


   /// basketball court circle
    glColor3ub(255, 148, 77);


	GLfloat x4=.4f; GLfloat y4=-.19f; GLfloat radius4 =.15f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = PI ;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi4 / triangleAmount4))
			);
		}
	glEnd();

	glFlush();  // Render now



	 /// basketball court circle
    glColor3ub(255, 148, 77);


	GLfloat x5=.4f; GLfloat y5=-.16f; GLfloat radius5 =.01f;
	int triangleAmount5 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi5 = PI ;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x5, y5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x5 + (radius4 * cos(i *  twicePi5 / triangleAmount5)),
			    y5 + (radius4 * sin(i * twicePi5 / triangleAmount5))
			);
		}
	glEnd();
	glFlush();  // Render now




    glBegin(GL_QUADS);///Basketball
    glColor3ub(0, 128, 128);
    glVertex2f(.43,0.85);
    glVertex2f(.43,1);
    glVertex2f(.37,1);
    glVertex2f(.37,0.85);
    glEnd();
    glFlush();




    glBegin(GL_QUADS);///Basketball
    glColor3ub(0, 128, 128);
    glVertex2f(.43,-0.19);
    glVertex2f(.43,-0.06);
    glVertex2f(.37,-0.06);
    glVertex2f(.37,-0.19);
    glEnd();
    glFlush();


          ///Basketball
     glColor3ub(255, 255, 255);
GLfloat x6=.4f; GLfloat y6=.97f; GLfloat radius6 =.01f;
	int lineAmount6 = 100; //# of triangles used to draw circle
	GLfloat twicePi6 = 2.0f * PI;
    glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x6 + (radius6 * cos(i *  twicePi6 / lineAmount6)),
			    y6 + (radius6* sin(i * twicePi6 / lineAmount6))
			);
		}
	glEnd();
	glFlush();  // Render now



	///Basketball

    glBegin(GL_LINES);///Basketball court
    glColor3ub(255,255,255);
    glVertex2f(0.38,.99);
    glVertex2f(0.42,0.99);
    glEnd();
	glFlush();

	  glBegin(GL_LINES);///Basketball court
    glColor3ub(255,255,255);
    glVertex2f(0.40,.99);
    glVertex2f(0.40,0.98);
    glEnd();
	glFlush();



	          ///Basketball
     glColor3ub(255, 255, 255);
GLfloat x7=.4f; GLfloat y7=-.16f; GLfloat radius7 =.01f;
	int lineAmount7 = 100; //# of triangles used to draw circle
	GLfloat twicePi7 = 2.0f * PI;
    glBegin(GL_LINE_LOOP);
		for(i = 0; i <= lineAmount7;i++) {
			glVertex2f(
			    x7 + (radius7 * cos(i *  twicePi6 / lineAmount7)),
			    y7 + (radius7* sin(i * twicePi6 / lineAmount7))
			);
		}
	glEnd();
	glFlush();  // Render now


    glBegin(GL_LINES);///Basketball court
    glColor3ub(255,255,255);
    glVertex2f(0.38,-.18);
    glVertex2f(0.42,-0.18);
    glEnd();
	glFlush();

	  glBegin(GL_LINES);///Basketball court
    glColor3ub(255,255,255);
    glVertex2f(0.40,-.18);
    glVertex2f(0.40,-0.17);
    glEnd();
	glFlush();






    glBegin(GL_QUADS);///stadium
    glColor3ub(102, 102, 255);
    glVertex2f(.2,-1);
    glVertex2f(.2,-.2);
    glVertex2f(-.6,-.2);
    glVertex2f(-.6,-1);
    glEnd();
    glFlush();


    glBegin(GL_QUADS);///stadium
    glColor3ub(77, 166, 255);
    glVertex2f(.2,-.8);
    glVertex2f(.2,-.75);
    glVertex2f(-.6,-.75);
    glVertex2f(-.6,-.8);
    glEnd();
    glFlush();


    glBegin(GL_QUADS);///stadium
    glColor3ub(77, 166, 255);
    glVertex2f(.2,-.9);
    glVertex2f(.2,-.85);
    glVertex2f(-.6,-.85);
    glVertex2f(-.6,-.9);
    glEnd();
    glFlush();


    glBegin(GL_QUADS);///stadium
    glColor3ub(77, 166, 255);
    glVertex2f(.2,-.70);
    glVertex2f(.2,-.65);
    glVertex2f(-.6,-.65);
    glVertex2f(-.6,-.7);
    glEnd();
    glFlush();



     glBegin(GL_QUADS);///stadium
    glColor3ub(77, 166, 255);
    glVertex2f(.2,-.6);
    glVertex2f(.2,-.55);
    glVertex2f(-.6,-.55);
    glVertex2f(-.6,-.6);
    glEnd();
    glFlush();


    glBegin(GL_QUADS);///stadium
    glColor3ub(77, 166, 255);
    glVertex2f(.2,-.50);
    glVertex2f(.2,-.45);
    glVertex2f(-.6,-.45);
    glVertex2f(-.6,-.5);
    glEnd();
    glFlush();




      glBegin(GL_QUADS);///stadium
    glColor3ub(77, 166, 255);
    glVertex2f(.2,-.4);
    glVertex2f(.2,-.35);
    glVertex2f(-.6,-.35);
    glVertex2f(-.6,-.4);
    glEnd();
    glFlush();


    glBegin(GL_QUADS);///stadium
    glColor3ub(77, 166, 255);
    glVertex2f(.2,-.30);
    glVertex2f(.2,-.25);
    glVertex2f(-.6,-.25);
    glVertex2f(-.6,-.3);
    glEnd();
    glFlush();


     glBegin(GL_QUADS);///stadium
    glColor3ub(204, 204, 204);
    glVertex2f(-.15,-.50);
    glVertex2f(-.15,-.30);
    glVertex2f(-.20,-.30);
    glVertex2f(-.20,-.50);
    glEnd();
    glFlush();



    glBegin(GL_QUADS);///stadium
    glColor3ub(71, 209, 71);
    glVertex2f(.2,-1);
    glVertex2f(.2,-.19);
    glVertex2f(.2,-.19);
    glVertex2f(.1,-.19);
    glEnd();
    glFlush();


    glBegin(GL_QUADS);///stadium
    glColor3ub(71, 209, 71);
    glVertex2f(-.6,-1);
    glVertex2f(-.6,-.19);
    glVertex2f(-.6,-.19);
    glVertex2f(-.5,-.19);
    glEnd();
    glFlush();


    glBegin(GL_LINES);///stadium line
    glColor3ub(255,255,255);
    glVertex2f(0.140,-.2);
    glVertex2f(-.9,-.2);
    glEnd();
	glFlush();





    glBegin(GL_QUADS);///Flag
    glColor3ub(204, 204, 204);
    glVertex2f(-.3,-.2);
    glVertex2f(-.3,.1);
    glVertex2f(-.31,.1);
    glVertex2f(-.31,-.2);
    glEnd();
    glFlush();



  glBegin(GL_QUADS);///Flag
    glColor3ub(0, 128, 0);
    glVertex2f(-.15,-.1);
    glVertex2f(-.15,.1);
    glVertex2f(-.3,.1);
    glVertex2f(-.3,-.1);
    glEnd();
    glFlush();

       	 ///flag
    glColor3ub(255, 0, 0);
	GLfloat x8=-.225f; GLfloat y8=-0.0f; GLfloat radius8 =.04f;
	int triangleAmount8 = 20; //# of triangles used to draw circle
	GLfloat twicePi8 = 2.0f*PI ;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x8, y8); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x8 + (radius8 * cos(i *  twicePi8 / triangleAmount8)),
			    y8 + (radius8 * sin(i * twicePi8 / triangleAmount8))
			);
		}
	glEnd();
	glFlush();


 }
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("stadium");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
