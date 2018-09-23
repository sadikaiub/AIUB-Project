#include<cstdio>
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<math.h>>
# define PI 3.14159265358979323846


GLfloat ship = 0.0f;
GLfloat cloud = 0.0f;
GLfloat train = 0.0f;
GLfloat car = 0.0f;
GLfloat fish1 = 0.0f;
GLfloat fish2 = 0.0f; ///new added
GLfloat fish3 = 0.0f; ///new added
GLfloat fish4 = 0.0f; ///new added
GLfloat wave1 = -1.0f; ///new added
GLfloat wave2 = -0.7f; ///new added
GLfloat wave3 = -0.40f; ///new added
GLfloat wave4 = -0.10f; ///new added
GLfloat wave5 = 0.20f; ///new added
GLfloat wave6 = 0.50f; ///new added
GLfloat wave7 = 0.80f; ///new added
GLfloat wave8 = 1.10f; ///new added



GLfloat ship_speed = 0.008f;
GLfloat cloud_speed = 0.0009f;
GLfloat train_speed = 0.0f;
GLfloat car_speed = 0.008f;
GLfloat fish_speed1 = 0.0009f;
GLfloat fish_speed2 = 0.002f; ///new added
GLfloat fish_speed3 = 0.006f; ///new added
GLfloat fish_speed4 = 0.009f; ///new added
GLfloat wave_speed = 0.009f; ///new added

void dayLight(); ///new added
void nightLight(); ///new added
void nightMode(); ///new added
void display(); ///new added
void buildings(); ///new added
void wave(); ///new added
bool flag=true;




void update(int value) {

    if(ship > 1.8)
        ship = -1.0f;

    ship += ship_speed;

     if(cloud > 1.8)
        cloud = -1.0f;

    cloud += cloud_speed;

    if(train > 1.8)
        train = -1.0f;

    train += train_speed;

    if(car >1.8)
        car = -2.0f;

    car += car_speed;

    if(fish1 > 1.8)
        fish1 = -1.0f;

    fish1 += fish_speed1;

    if(fish2 > 1.8) ///new added
        fish2 = -1.0f;

    fish2 += fish_speed2;

    if(fish3 > 1.8)///new added
        fish3 = -1.0f;

    fish3 += fish_speed3;

    if(fish4 > 1.8)///new added
        fish4 = -1.0f;

    fish4 += fish_speed4;

    if(wave1 > 1.0)
        wave1 = -1.2f;
    if(wave2 > 1.0)
        wave2 = -1.2f;
    if(wave3 > 1.0)
        wave3 = -1.2f;
    if(wave4 > 1.0)
        wave4 = -1.2f;
    if(wave5 > 1.0)
        wave5 = -1.2f;
    if(wave6 > 1.2)
        wave6 = -1.2f;
    if(wave7 > 1.2)
        wave7 = -1.2f;
    if(wave8 > 1.2)
        wave8 = -1.2f;

    wave1 += wave_speed;
    wave2 += wave_speed;
    wave3 += wave_speed;
    wave4 += wave_speed;
    wave5 += wave_speed;
    wave6 += wave_speed;
    wave7 += wave_speed;
    wave8 += wave_speed;


	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}

/*void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			ship_speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}*/

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {
case 's':
    ship_speed = 0.0f;
    break;
case 'a':
    ship_speed = 0.009f;
    break;
glutPostRedisplay();
	}

		switch (key) {
case 'c':
    cloud_speed = 0.0f;
    break;
case 'v':
    cloud_speed = 0.0008f;
    break;
glutPostRedisplay();
	}

		switch (key) {
case 't':
    train_speed = 0.0f;
    break;
case 'y':
    train_speed = 0.007f;
    break;
glutPostRedisplay();
	}

			switch (key) {
case 'c':
    car_speed = 0.0f;
    break;
case 'v':
    car_speed = 0.006f;
    break;
glutPostRedisplay();
	}

        switch(key){
    case 'd':
        flag = true;
        dayLight();
        //display();
        break;
    case 'n':
        flag = false;
        nightLight();
        //display();
        break;
glutPostRedisplay();
        }


}





void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

//////////////////////////////////////////////////////////////////circle variable
   GLfloat radius = 0.02;
   GLfloat radius1 = 0.016;
    GLfloat x; GLfloat y;
    GLfloat twicePi = 2.0 * 3.142;
    int i;
glPushMatrix();//////////////////////////////////////////////////////////////////River
   glBegin(GL_QUADS);
      glColor3f(0.4,.4,1.1);
      glVertex2f(-1.0f, -0.6f);
      glVertex2f(-1.0f, -1.0f);
      glVertex2f(1.0f, -1.0f);
      glVertex2f(1.0f, -0.6f);

   glEnd();
glPopMatrix();



glPushMatrix();//////////////////////////////////////////////////////////////Fish 1
glTranslatef(fish1,0.0f, 0.0f);
   glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2f(-.8f, -0.8f); //matha
      glVertex2f(-.8f, -0.85f); // matha
      glVertex2f(-.78f, -0.82f); // matha

   glEnd();

    glBegin(GL_QUADS);
     glVertex2f(-.82f, -0.8f);
      glVertex2f(-.82f, -0.85f); // pet 1
      glVertex2f(-.8f, -0.85f); // pet 1
       glVertex2f(-.8f, -0.8f); // pet 1


 glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2f(-.85f, -0.8f); //lenja
      glVertex2f(-.85f, -0.85f); // lenja
      glVertex2f(-.78f, -0.82f); // lenja

   glEnd();


   glBegin(GL_LINES);
      glColor3f(0,0,0);
        glVertex2f(-.8f, -0.85f); // line
       glVertex2f(-.8f, -0.8f); // line
   glEnd();
   glPopMatrix();


///////////////////////////////////////////////////////////////////////////////Fish 2 (sadik)
glPushMatrix();
glTranslatef(fish2,0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2f(-.8f, -0.7f); //matha
      glVertex2f(-.8f, -0.75f); // matha
      glVertex2f(-.78f, -0.72f); // matha

   glEnd();

    glBegin(GL_QUADS);
     glVertex2f(-.82f, -0.7f);
      glVertex2f(-.82f, -0.75f); // pet 1
      glVertex2f(-.8f, -0.75f); // pet 1
       glVertex2f(-.8f, -0.7f); // pet 1


    glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2f(-.85f, -0.7f); //lenja
      glVertex2f(-.85f, -0.75f); // lenja
      glVertex2f(-.78f, -0.72f); // lenja

   glEnd();


   glBegin(GL_LINES);
      glColor3f(0,0,0);
        glVertex2f(-.8f, -0.75f); // line
       glVertex2f(-.8f, -0.7f); // line
   glEnd();

glPopMatrix();




glPushMatrix();////////////////////////////////////////////Fish 3 (sadik)
glTranslatef(fish3,0.0f, 0.0f);
   glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2f(-.8f, -0.9f); //matha
      glVertex2f(-.8f, -0.95f); // matha
      glVertex2f(-.78f, -0.92f); // matha

   glEnd();

    glBegin(GL_QUADS);
     glVertex2f(-.82f, -0.9f);
      glVertex2f(-.82f, -0.95f); // pet 1
      glVertex2f(-.8f, -0.95f); // pet 1
       glVertex2f(-.8f, -0.9f); // pet 1
 //  glPopMatrix();

 glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2f(-.85f, -0.9f); //lenja
      glVertex2f(-.85f, -0.95f); // lenja
      glVertex2f(-.78f, -0.92f); // lenja

   glEnd();


   glBegin(GL_LINES);
      glColor3f(0,0,0);
        glVertex2f(-.8f, -0.95f); // line
       glVertex2f(-.8f, -0.9f); // line
   glEnd();
glPopMatrix();


glPushMatrix();//////////////////////////////////////////////////////////////Fish 4 (sadik)
glTranslatef(fish4,0.0f, 0.0f);
   glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2f(-.7f, -0.8f); //matha
      glVertex2f(-.7f, -0.85f); // matha
      glVertex2f(-.68f, -0.82f); // matha

   glEnd();

    glBegin(GL_QUADS);
     glVertex2f(-.72f, -0.8f);
      glVertex2f(-.72f, -0.85f); // pet 1
      glVertex2f(-.7f, -0.85f); // pet 1
       glVertex2f(-.7f, -0.8f); // pet 1
  // glPopMatrix();

 glEnd();

   glBegin(GL_TRIANGLES);
      glColor3f(1,1,1);
      glVertex2f(-.75f, -0.8f); //lenja
      glVertex2f(-.75f, -0.85f); // lenja
      glVertex2f(-.68f, -0.82f); // lenja

   glEnd();


   glBegin(GL_LINES);
      glColor3f(0,0,0);
        glVertex2f(-.7f, -0.85f); // line
       glVertex2f(-.7f, -0.8f); // line
   glEnd();
glPopMatrix();


glPushMatrix();
    //glTranslatef(0,0.0f, 0.0f);
   glBegin(GL_QUADS); //////////////////////////////////////grass
      glColor3f(0,1,0);
      glVertex2f(-1.0f, -0.63f);
      glVertex2f(1.0f, -0.63f);
      glVertex2f(1.0f, -0.57f);
      glVertex2f(-1.0f, -0.57f);

   glEnd();
glPopMatrix();

   wave(); /// wave



glPushMatrix();  /////////////////////////////////////////////// Ship
glTranslatef(-ship,0.0f, 0.0f);
glBegin(GL_POLYGON);//nicheor ongsho
        glColor3f(0,0,0);
        glVertex2f(.4f, -0.99f);
        glVertex2f(.7f, -0.99f);
         glVertex2f(.7f, -0.95f);
         glVertex2f(.4f, -0.95f);

   glEnd();

   glBegin(GL_POLYGON);//pataton
        glColor3f(1,0,0);
        glVertex2f(.3f, -0.8f);
        glVertex2f(.4f, -0.95f);
         glVertex2f(.7f, -0.95f);
         glVertex2f(.8f, -0.8f);
   glEnd();

      glBegin(GL_POLYGON);//Sit
        glColor3f(0,0,1);
         glVertex2f(.4f, -0.8f);
          glVertex2f(.7f, -0.8f);
           glVertex2f(.65f, -0.7f);
           glVertex2f(.45f, -0.7f);
   glEnd();

   glBegin(GL_POLYGON);//janala 1
         glColor3f(0,0,0);
         glVertex2f(.46f, -0.73f);
         glVertex2f(.46f, -0.77f);
         glVertex2f(.48f, -0.77f);
         glVertex2f(.48f, -0.73f);
   glEnd();
   glBegin(GL_POLYGON);//janala 2
         glColor3f(0,0,0);
         glVertex2f(.5f, -0.77f);
         glVertex2f(.52f, -0.77f);
         glVertex2f(.52f, -0.73f);
          glVertex2f(.5f, -0.73f);
   glEnd();

      glBegin(GL_POLYGON);//janala 3
         glColor3f(0,0,0);
         glVertex2f(.54f, -0.77f);
          glVertex2f(.56f, -0.77f);
          glVertex2f(.56f, -0.73f);
           glVertex2f(.54f, -0.73f);
   glEnd();


      glBegin(GL_POLYGON);//janala 4
         glColor3f(0,0,0);
         glVertex2f(.58f, -0.77f);
          glVertex2f(.60f, -0.77f);
          glVertex2f(.60f, -0.73f);
           glVertex2f(.58f, -0.73f);
   glEnd();


      glBegin(GL_POLYGON);//janala 5
         glColor3f(0,0,0);
         glVertex2f(.62f, -0.77f);
          glVertex2f(.64f, -0.77f);
          glVertex2f(.64f, -0.73f);
           glVertex2f(.62f, -0.73f);
   glEnd();

    glBegin(GL_POLYGON);//Flag danda
         glColor3f(0,0,0);
          glVertex2f(.52f, -0.7f);
          glVertex2f(.525f, -0.7f);
          glVertex2f(.525f, -0.61f);
           glVertex2f(.52f, -0.61f);

   glEnd();

   glBegin(GL_POLYGON);//Flag
         glColor3f(0,1,0);
          glVertex2f(.48f, -0.61f);
           glVertex2f(.48f, -0.65f);
           glVertex2f(.52f, -0.65f);
           glVertex2f(.52f, -0.61f);

   glEnd();
   //flag circle
    glTranslatef(.50,-0.63f, 0.0f);
        glColor3f(1,0,0);
        glutSolidSphere(.01,50,50);
    glPopMatrix();

 glPopMatrix();






     glPushMatrix(); ///////////////////////////////////////Rail Line(sadik)
//glTranslatef(0,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(0,0,0);
      //glVertex2f(-1.0f, -0.4f);
      glVertex2f(-1.0f, -0.57f);
      glVertex2f(1.0f, -0.57f);
      glVertex2f(1.0f, -0.3f);
      glVertex2f(-1.0f, -0.3f);
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glBegin(GL_QUADS); ////lower line
  glColor3ub(192,192,192);
   glVertex2f(-1,-.52);
   glVertex2f(1,-.52);
   glVertex2f(1,-.5);
   glVertex2f(-1,-.5);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS); ////upper line
    glColor3ub(192,192,192);
   glVertex2f(-1,-.37);
   glVertex2f(1,-.37);
   glVertex2f(1,-.35);
   glVertex2f(-1,-.35);
   glEnd();
   glPopMatrix();

 ///////////////////// wood //////////////////////////////////////

    glPushMatrix();
   glBegin(GL_QUADS);
   glColor3ub(102,51,0);
   glVertex2f(-.99,-.5);
   glVertex2f(-.97,-.5);
   glVertex2f(-.95,-.37);
   glVertex2f(-.97,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.94,-.5);
   glVertex2f(-.92,-.5);
   glVertex2f(-.90,-.37);
   glVertex2f(-.92,-.37);
   glEnd();
   glPopMatrix();

     glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.89,-.5);
   glVertex2f(-.87,-.5);
   glVertex2f(-.85,-.37);
   glVertex2f(-.87,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.84,-.5);
   glVertex2f(-.82,-.5);
   glVertex2f(-.80,-.37);
   glVertex2f(-.82,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.79,-.5);
   glVertex2f(-.77,-.5);
   glVertex2f(-.75,-.37);
   glVertex2f(-.77,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.94,-.5);
   glVertex2f(-.92,-.5);
   glVertex2f(-.90,-.37);
   glVertex2f(-.92,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.89,-.5);
   glVertex2f(-.87,-.5);
   glVertex2f(-.85,-.37);
   glVertex2f(-.87,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.84,-.5);
   glVertex2f(-.82,-.5);
   glVertex2f(-.80,-.37);
   glVertex2f(-.82,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.79,-.5);
   glVertex2f(-.77,-.5);
   glVertex2f(-.75,-.37);
   glVertex2f(-.77,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.74,-.5);
   glVertex2f(-.72,-.5);
   glVertex2f(-.70,-.37);
   glVertex2f(-.72,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.69,-.5);
   glVertex2f(-.67,-.5);
   glVertex2f(-.65,-.37);
   glVertex2f(-.67,-.37);
   glEnd();
   glPopMatrix();


    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.64,-.5);
   glVertex2f(-.62,-.5);
   glVertex2f(-.60,-.37);
   glVertex2f(-.62,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.59,-.5);
   glVertex2f(-.57,-.5);
   glVertex2f(-.55,-.37);
   glVertex2f(-.57,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
   glColor3ub(102,51,0);
   glVertex2f(-.54,-.5);
   glVertex2f(-.52,-.5);
   glVertex2f(-.50,-.37);
   glVertex2f(-.52,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.49,-.5);
   glVertex2f(-.47,-.5);
   glVertex2f(-.45,-.37);
   glVertex2f(-.47,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.44,-.5);
   glVertex2f(-.42,-.5);
   glVertex2f(-.40,-.37);
   glVertex2f(-.42,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.39,-.5);
   glVertex2f(-.37,-.5);
   glVertex2f(-.35,-.37);
   glVertex2f(-.37,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.34,-.5);
   glVertex2f(-.32,-.5);
   glVertex2f(-.30,-.37);
   glVertex2f(-.32,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.29,-.5);
   glVertex2f(-.27,-.5);
   glVertex2f(-.25,-.37);
   glVertex2f(-.27,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.24,-.5);
   glVertex2f(-.22,-.5);
   glVertex2f(-.20,-.37);
   glVertex2f(-.22,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.19,-.5);
   glVertex2f(-.17,-.5);
   glVertex2f(-.15,-.37);
   glVertex2f(-.17,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.14,-.5);
   glVertex2f(-.12,-.5);
   glVertex2f(-.10,-.37);
   glVertex2f(-.12,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.09,-.5);
   glVertex2f(-.07,-.5);
   glVertex2f(-.05,-.37);
   glVertex2f(-.07,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(-.04,-.5);
   glVertex2f(-.02,-.5);
   glVertex2f(0.0,-.37);
   glVertex2f(-0.02,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.01,-.5);
   glVertex2f(0.03,-.5);
   glVertex2f(0.05,-.37);
   glVertex2f(0.03,-.37);
   glEnd();
   glPopMatrix();

    glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.06,-.5);
   glVertex2f(0.08,-.5);
   glVertex2f(0.10,-.37);
   glVertex2f(0.08,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.11,-.5);
   glVertex2f(0.13,-.5);
   glVertex2f(0.15,-.37);
   glVertex2f(0.13,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.16,-.5);
   glVertex2f(0.18,-.5);
   glVertex2f(0.20,-.37);
   glVertex2f(0.18,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.21,-.5);
   glVertex2f(0.23,-.5);
   glVertex2f(0.25,-.37);
   glVertex2f(0.23,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.26,-.5);
   glVertex2f(0.28,-.5);
   glVertex2f(0.30,-.37);
   glVertex2f(0.28,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.31,-.5);
   glVertex2f(0.33,-.5);
   glVertex2f(0.35,-.37);
   glVertex2f(0.33,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.36,-.5);
   glVertex2f(0.38,-.5);
   glVertex2f(0.40,-.37);
   glVertex2f(0.38,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.41,-.5);
   glVertex2f(0.43,-.5);
   glVertex2f(0.45,-.37);
   glVertex2f(0.43,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.46,-.5);
   glVertex2f(0.48,-.5);
   glVertex2f(0.50,-.37);
   glVertex2f(0.48,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.51,-.5);
   glVertex2f(0.53,-.5);
   glVertex2f(0.55,-.37);
   glVertex2f(0.53,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.56,-.5);
   glVertex2f(0.58,-.5);
   glVertex2f(0.60,-.37);
   glVertex2f(0.58,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.61,-.5);
   glVertex2f(0.63,-.5);
   glVertex2f(0.65,-.37);
   glVertex2f(0.63,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.66,-.5);
   glVertex2f(0.68,-.5);
   glVertex2f(0.70,-.37);
   glVertex2f(0.68,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.71,-.5);
   glVertex2f(0.73,-.5);
   glVertex2f(0.75,-.37);
   glVertex2f(0.73,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.76,-.5);
   glVertex2f(0.78,-.5);
   glVertex2f(0.80,-.37);
   glVertex2f(0.78,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.81,-.5);
   glVertex2f(0.83,-.5);
   glVertex2f(0.85,-.37);
   glVertex2f(0.83,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.86,-.5);
   glVertex2f(0.88,-.5);
   glVertex2f(0.90,-.37);
   glVertex2f(0.88,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.91,-.5);
   glVertex2f(0.93,-.5);
   glVertex2f(0.95,-.37);
   glVertex2f(0.93,-.37);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glBegin(GL_QUADS);
 glColor3ub(102,51,0);
   glVertex2f(0.96,-.5);
   glVertex2f(0.98,-.5);
   glVertex2f(1.0,-.37);
   glVertex2f(0.98,-.37);
   glEnd();
   glPopMatrix();

/////////////////  wood end ///////////////////

///////////////////////////// rain line end ///////////////////////////////////////




     ////////////////////////////////// Train ////////////////////////

      glPushMatrix();
    glTranslatef(train,0,0.0f); ///////////// 4th bogy
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(-.54,-.49);
    glVertex2f(-.46,-.49);
    glVertex2f(-.46,-.35);
    glVertex2f(-.54,-.35);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(train,0,0.0f); /////////////joainer
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex2f(-.46,-.48);
    glVertex2f(-.43,-.48);
    glVertex2f(-.43,-.46);
    glVertex2f(-.46,-.46);
    glEnd();
    glPopMatrix();

     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////right wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.52;y = -0.49f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();

     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////right wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.48; y= -.49;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();

     glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// 4th bogy roof
    glColor3f(0,1,0);
    glVertex2f(-.55,-.35);
    glVertex2f(-.45,-.35);
    glVertex2f(-.45,-.34);
    glVertex2f(-.55,-.34);
    glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// window
    glColor3f(1,0,0);
    glVertex2f(-.53,-.42);
    glVertex2f(-.51,-.42);
    glVertex2f(-.51,-.38);
    glVertex2f(-.53,-.38);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// window
    glColor3f(1,0,0);
    glVertex2f(-.49,-.42);
    glVertex2f(-.47,-.42);
    glVertex2f(-.47,-.38);
    glVertex2f(-.49,-.38);
    glEnd();
    glPopMatrix();




     glPushMatrix();
    glTranslatef(train,0,0.0f); ///////////// 3rd bogy
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(-.43,-.49);
    glVertex2f(-.35,-.49);
    glVertex2f(-.35,-.35);
    glVertex2f(-.43,-.35);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// window
    glColor3f(1,0,0);
    glVertex2f(-.42,-.42);
    glVertex2f(-.40,-.42);
    glVertex2f(-.40,-.38);
    glVertex2f(-.42,-.38);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// window
    glColor3f(1,0,0);
    glVertex2f(-.38,-.42);
    glVertex2f(-.36,-.42);
   glVertex2f(-.36,-.38);
    glVertex2f(-.38,-.38);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(train,0,0.0f); ///////////// joainer
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex2f(-.35,-.48);
    glVertex2f(-.32,-.48);
    glVertex2f(-.32,-.46);
    glVertex2f(-.35,-.46);
    glEnd();
    glPopMatrix();

     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////right wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.41;y = -0.49f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();

     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////right wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.37; y=-.49;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();


     glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// 3rd bogy roof
    glColor3f(0,1,0);
    glVertex2f(-.44,-.35);
    glVertex2f(-.34,-.35);
    glVertex2f(-.34,-.34);
    glVertex2f(-.44,-.34);
    glEnd();
    glPopMatrix();






    glPushMatrix();
    glTranslatef(train,0,0.0f); ///////////// 2nd bogy
    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(-.32,-.49);
    glVertex2f(-.24,-.49);
    glVertex2f(-.24,-.35);
    glVertex2f(-.32,-.35);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// window
    glColor3f(1,0,0);
    glVertex2f(-.31,-.42);
    glVertex2f(-.29,-.42);
    glVertex2f(-.29,-.38);
    glVertex2f(-.31,-.38);
    glEnd();
    glPopMatrix();

      glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// window
    glColor3f(1,0,0);
    glVertex2f(-.27,-.42);
    glVertex2f(-.25,-.42);
    glVertex2f(-.25,-.38);
    glVertex2f(-.27,-.38);
    glEnd();
    glPopMatrix();





    glPushMatrix();
    glTranslatef(train,0,0.0f); ///////////// joainer
    glBegin(GL_QUADS);
    glColor3f(0,1,0);
    glVertex2f(-.24,-.48);
    glVertex2f(-.2,-.48);
    glVertex2f(-.2,-.46);
    glVertex2f(-.24,-.46);
    glEnd();
    glPopMatrix();

     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////right wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.30;y = -0.49f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();

     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////right wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.26;y = -0.49f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();

     glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// last bogy roof
    glColor3f(0,1,0);
    glVertex2f(-.33,-.35);
    glVertex2f(-.23,-.35);
    glVertex2f(-.23,-.34);
    glVertex2f(-.33,-.34);
    glEnd();
    glPopMatrix();





   glPushMatrix();
   glTranslatef(train,0, 0.0f);
   glBegin(GL_QUADS); /////// 1st bogy
   glColor3f(0,0,1);
   glVertex2f(-0.2,-.49);
   glVertex2f(-.12,-.49);
   glVertex2f(-.12,-.35);
   glVertex2f(-.2,-.35);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////left wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.18f; y = -0.49f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();

     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////right wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.14f; y = -0.49f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();

    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// last bogy roof
    glColor3f(0,1,0);
    glVertex2f(-.21,-.35);
    glVertex2f(-.11,-.35);
    glVertex2f(-.11,-.34);
    glVertex2f(-.21,-.34);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// left window
    glColor3f(1,0,0);
    glVertex2f(-.19,-.42);
    glVertex2f(-.17,-.42);
    glVertex2f(-.17,-.38);
    glVertex2f(-.19,-.38);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////////// right window
    glColor3f(1,0,0);
    glVertex2f(-.15,-.42);
    glVertex2f(-.13,-.42);
    glVertex2f(-.13,-.38);
    glVertex2f(-.15,-.38);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// joiner
    glColor3f(0,1,0);
    glVertex2f(-.12,-.48);
    glVertex2f(-.09,-.48);
    glVertex2f(-.09,-.46);
    glVertex2f(-.12,-.46);
    glEnd();
    glPopMatrix();

     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// 1st part of main body
    glColor3f(0,0,1);
    glVertex2f(-.09,-.49);
    glVertex2f(-.03,-.49);
    glVertex2f(-.03,-.35);
    glVertex2f(-.09,-.35);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// upper part of main body
    glColor3f(0,0,1);
    glVertex2f(-.1,-.35);
    glVertex2f(-.02,-.35);
    glVertex2f(-.02,-.34);
    glVertex2f(-.1,-.34);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// 2nd part of main body
    glColor3f(0,0,1);
    glVertex2f(-.03,-.49);
    glVertex2f(.02,-.49);
    glVertex2f(.02,-.40);
    glVertex2f(-.03,-.40);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// window of main body
    glColor3f(1,0,0);
    glVertex2f(-.07,-.42);
    glVertex2f(-.05,-.42);
    glVertex2f(-.05,-.38);
    glVertex2f(-.07,-.38);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// pipe of main body
    glColor3f(0,0,1);
    glVertex2f(0.0,-.49);
    glVertex2f(.01,-.49);
    glVertex2f(.01,-.32);
    glVertex2f(0.0,-.32);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_QUADS); /////////// upper part of pipe
    glColor3f(0,0,1);
    glVertex2f(-.01,-.32);
    glVertex2f(.02,-.32);
    glVertex2f(.02,-.31);
    glVertex2f(-.01,-.31);
    glEnd();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////left wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.07f; y = -0.49f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();

     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////middle wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.035f; y = -0.49f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 50; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 50))), (y + (radius1 * sin(i * twicePi / 50)))
            );

    }
    glEnd(); //END
    glPopMatrix();


     glPushMatrix();
     glTranslatef(train,0, 0.0f);
    glBegin(GL_TRIANGLE_FAN);   ////////right wheel
    glColor3f(0.0f, 0.0f, 0.0f);
     x = 0.0f; y = -0.49f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius1 * cos(i * twicePi / 20))), (y + (radius1 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
    glPopMatrix();



////////////////////// End Train ///////////////////////////////


   glPushMatrix(); ///////////////////////////////////////Road (sadik)
//glTranslatef(0,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3d(0.4,0.4,0.4);
      glVertex2f(-1.0f, -0.29f);
       glVertex2f(1.0f, -0.29f);
       glVertex2f(1.0f, 0.1f);
       glVertex2f(-1.0f, 0.1f);
   glEnd();
   glPopMatrix();

    glPushMatrix(); ///////////////////////////////////////down Road Border 1 (Liza)
//glTranslatef(0,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.0);
      glVertex2f(-1.0f, -0.3f);
       glVertex2f(1.0f, -0.3f);
       glVertex2f(1.0f, -0.29f);
       glVertex2f(-1.0f, -0.29f);
   glEnd();
   glPopMatrix();

   glPushMatrix(); ///////////////////////////////////////up Road Border 1 (Liza)
//glTranslatef(0,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.0);
      glVertex2f(-1.0f, 0.1f);
       glVertex2f(1.0f, 0.1f);
       glVertex2f(1.0f, 0.11f);
       glVertex2f(-1.0f, 0.11f);
   glEnd();
   glPopMatrix();
     glPushMatrix(); ///////////////////////////////////////middle Road Border 1 (Liza)
//glTranslatef(0,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.0);
      glVertex2f(-1.0f, -0.1f);
       glVertex2f(1.0f, -0.1f);
       glVertex2f(1.0f, -0.07f);
       glVertex2f(-1.0f, -0.07f);
glEnd();
       glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(-1.0f, -0.085f);
      glVertex2f(-0.92f, -0.085f);
glEnd();
 glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(-0.88f, -0.085f);
      glVertex2f(-0.78f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(-0.74f, -0.085f);
      glVertex2f(-0.64f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(-0.6f, -0.085f);
      glVertex2f(-0.5f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(-0.46f, -0.085f);
      glVertex2f(-0.36f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(-0.32f, -0.085f);
      glVertex2f(-0.22f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(-0.18f, -0.085f);
      glVertex2f(-0.08f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(-0.04f, -0.085f);
      glVertex2f(0.06f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(0.10f, -0.085f);
      glVertex2f(0.20f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(0.24f, -0.085f);
      glVertex2f(0.34f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(0.38f, -0.085f);
      glVertex2f(0.48f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(0.52f, -0.085f);
      glVertex2f(0.62f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(0.66f, -0.085f);
      glVertex2f(0.76f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(0.80f, -0.085f);
      glVertex2f(0.90f, -0.085f);
glEnd();
glBegin(GL_LINES);
      glColor3d(1.0,1.0,1.0);
      glVertex2f(0.94f, -0.085f);
      glVertex2f(1.0f, -0.085f);
glEnd();
glPopMatrix();


       glPushMatrix(); ///////////////////////////////////////car 1 lower part
glTranslatef(car,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3d(1.0,0.0,.0);
      glVertex2f(0.2f, -0.24f);
       glVertex2f(0.4f, -0.24f);
       glVertex2f(0.38f, -0.19f);
       glVertex2f(0.22f, -0.19f);
   glEnd();

   glBegin(GL_QUADS);///////////////////////////////////////car 1 upper  part (Liza)
      glColor3d(1.0f,0.0f,.0f);
       glVertex2f(0.24f, -0.2f);
       glVertex2f(0.36f, -0.2f);
       glVertex2f(0.34f, -0.14f);
       glVertex2f(0.26f, -0.14f);
   glEnd();

     glBegin(GL_QUADS);///////////////////////////////////////car 1 upper white part part (LIza)
      glColor3d(1.0,1.0,1.0);
       glVertex2f(0.25f, -0.2f);
       glVertex2f(0.295f, -0.2f);
       glVertex2f(0.295f, -0.15f);
       glVertex2f(0.266f, -0.15f);

   glEnd();

    glBegin(GL_QUADS);///////////////////////////////////////car 1 upper white part part
      glColor3d(1.0,1.0,1.0);
       glVertex2f(0.305f, -0.2f);
       glVertex2f(0.35f, -0.2f);
       glVertex2f(0.334f, -0.15f);
       glVertex2f(0.305f, -0.15f);

   glEnd();

glPopMatrix();
 // chaka 1
glPushMatrix();
glTranslatef(car,0.0f, 0.0f);

    glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = 0.25f; y = -0.24f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

// chaka 2
    glBegin(GL_TRIANGLE_FAN); //////////////////BEGIN CIRCLE (Liza)
    glColor3f(0.0f, 0.0f, 0.0f);
    x = 0.34f;  y = -0.24f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

glPopMatrix();

    glPushMatrix(); ///////////////////////////////////////car 2 lower part (Liza)
glTranslatef(car,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3d(0.0,0.0,1.0);
      glVertex2f(-0.3f, -0.24f);
       glVertex2f(-0.12f, -0.24f);
       glVertex2f(-0.12f, -0.19f);
       glVertex2f(-0.3f, -0.19f);

    glEnd();

     glBegin(GL_QUADS);///////////////////////////////////////car 2 upper white part part(Liza)
      glColor3d(1.0,1.0,1.0);
       glVertex2f(-0.21f, -0.19f);
       glVertex2f(-0.12f, -0.19f);
       glVertex2f(-0.16f, -0.12f);
       glVertex2f(-0.21f, -0.12f);

   glEnd();

     glBegin(GL_QUADS);///////////////////////////////////////car 2 upper white part part (Liza)
      glColor3d(0.0,0.0,1.0);
       glVertex2f(-0.2f, -0.18f);
       glVertex2f(-0.14f, -0.18f);
       glVertex2f(-0.16f, -0.13f);
       glVertex2f(-0.2f, -0.13f);

   glEnd();

///////////////////////////////////////car 2 upper blue part part (Liza)
   glBegin(GL_QUADS);
      glColor3d(0.0,0.0,1.0);
      glVertex2f(-0.3f, -0.19f);
       glVertex2f(-0.21f, -0.19f);
       glVertex2f(-0.21f, -0.12f);
       glVertex2f(-0.3f, -0.12f);

   glEnd();

   glPopMatrix();
 // 2nd car chaka 1
glPushMatrix();
glTranslatef(car,0.0f, 0.0f);
   glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.26f; y = -0.24f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

// chaka 2
    glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
     glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.16; y = -0.24f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

glPopMatrix();

/////////////////////////////////////////////////////car 7
    glPushMatrix();
    glTranslatef(car,0.0f, 0.0f);
    glBegin(GL_POLYGON);
      glColor3f(1.0,1.0,0.0);
      glVertex2f(0.7f, -0.24f);
       glVertex2f(0.87f, -0.24f);
       glVertex2f(0.87f, -0.17f);
       glVertex2f(0.84f, -0.12f);
       glVertex2f(0.7f, -0.12f);
   glEnd();
   glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.0);
      glVertex2f(0.825f, -0.18f);
       glVertex2f(0.865f, -0.18f);
       glVertex2f(0.835f, -0.13f);
       glVertex2f(0.825f, -0.13f);

    glEnd();
    glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.0);
      glVertex2f(0.7f, -0.2f);
       glVertex2f(0.87f, -0.2f);
       glVertex2f(0.87f, -0.19f);
       glVertex2f(0.7f, -0.19f);

    glEnd();

    glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.0);
      glVertex2f(0.705f, -0.18f);
       glVertex2f(0.725f, -0.18f);
       glVertex2f(0.725f, -0.13f);
       glVertex2f(0.705f, -0.13f);

    glEnd();

    glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.0);
      glVertex2f(0.735f, -0.18f);
       glVertex2f(0.755f, -0.18f);
       glVertex2f(0.755f, -0.13f);
       glVertex2f(0.735f, -0.13f);

    glEnd();
glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.0);
      glVertex2f(0.765f, -0.18f);
       glVertex2f(0.785f, -0.18f);
       glVertex2f(0.785f, -0.13f);
       glVertex2f(0.765f, -0.13f);

    glEnd();
glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.0);
      glVertex2f(0.795f, -0.18f);
       glVertex2f(0.815f, -0.18f);
       glVertex2f(0.815f, -0.13f);
       glVertex2f(0.795f, -0.13f);

    glEnd();

glPopMatrix();
glPushMatrix();
glTranslatef(car,0.0f, 0.0f);
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = 0.74f; y = -0.24f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = 0.83f; y = -0.24;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

glPopMatrix();


//car 3

    glPushMatrix(); ///////////////////////////////////////car 3 lower part (Liza)
glTranslatef(car,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3d(0.0,0.900,0.0);
      glVertex2f(-0.85f, -0.24f);
       glVertex2f(-0.7f, -0.24f);
       glVertex2f(-0.7f, -0.19f);
       glVertex2f(-0.85f, -0.19f);
glEnd();

glBegin(GL_QUADS);
      glColor3d(1.0,1.0,0.0);

       glVertex2f(-0.78f, -0.19f);
       glVertex2f(-0.715f, -0.19f);
       glVertex2f(-0.74f, -0.14f);
       glVertex2f(-0.78f, -0.14f);
glEnd();

glPopMatrix();

  glPushMatrix();
  glTranslatef(car,0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.82f; y = -0.24f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

// chaka 2
    glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
     glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.73; y = -0.24f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
glPopMatrix();

//car 4

  glPushMatrix(); ///////////////////////////////////////car 4 lower part
glTranslatef(-car,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3d(1.0,0.0,.0);
      glVertex2f(-0.91f, -0.03f);
       glVertex2f(-0.71f, -0.03f);
       glVertex2f(-0.74f, 0.02f);
       glVertex2f(-0.88f, 0.02f);
   glEnd();

   //car 4 upper part
     glBegin(GL_QUADS);
      glColor3d(1.0,1.0,1.0);
       glVertex2f(-0.86f, 0.02f);
       glVertex2f(-0.76f, 0.02f);
        glVertex2f(-0.78f, 0.07f);
        glVertex2f(-0.84f, 0.07f);
   glEnd();

glBegin(GL_QUADS);
      glColor3d(1.0,0.0,0.0);
       glVertex2f(-0.85f, 0.025f);
       glVertex2f(-0.81f, 0.025f);
        glVertex2f(-0.81f, 0.062f);
        glVertex2f(-0.83f, 0.062f);
   glEnd();


glBegin(GL_QUADS);
      glColor3d(1.0,0.0,0.0);
       glVertex2f(-0.805f, 0.025f);
       glVertex2f(-0.77f, 0.025f);
        glVertex2f(-0.79f, 0.062f);
        glVertex2f(-0.805f, 0.062f);
   glEnd();

glPopMatrix();//4rd gari chaka

glPushMatrix();
glTranslatef(-car,0.0f, 0.0f);
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.85f; y = -0.03f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.77f; y = -0.03;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

glPopMatrix();

//car 5
 glPushMatrix(); ///////////////////////////////////////car 5 lower part
glTranslatef(-car,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3d(0.0,0.0,0.500);
      glVertex2f(-0.041f, -0.03f);
       glVertex2f(0.1f, -0.03f);
       glVertex2f(0.1f, 0.02f);
       glVertex2f(-0.041f,0.02f);
   glEnd();
//car 5 upper part
     glBegin(GL_QUADS);
      glColor3d(0.0,1.0,1.0);
       glVertex2f(-0.03f, 0.02f);
       glVertex2f( 0.03f, 0.02f);
        glVertex2f( 0.03f, 0.06f);
        glVertex2f(-0.01f, 0.06f);
   glEnd();
glPopMatrix();
   glPushMatrix();
   glTranslatef(-car,0.0f, 0.0f);
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = -0.01f; y = -0.03f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = 0.065f; y = -0.03;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

glPopMatrix();
//car 6
glPushMatrix(); ///////////////////////////////////////car 6 lower part
glTranslatef(-car,0.0f, 0.0f);

   glBegin(GL_QUADS);
      glColor3d(0.0,0.900,0.0);
      glVertex2f(0.6f, -0.03f);
       glVertex2f(0.75f, -0.03f);
       glVertex2f(0.75f, 0.03f);
       glVertex2f(0.6f,0.03f);
   glEnd();
   //car 6 upper part
   glBegin(GL_QUADS);
      glColor3d(0.0,0.900,0.0);
           glVertex2f(0.6f,0.03f);
           glVertex2f(0.75f, 0.03f);
           glVertex2f(0.75f,0.06f);
           glVertex2f(0.63f, 0.06f);
   glEnd();
glBegin(GL_QUADS);
      glColor3d(1.0,1.0,0.0);
      glVertex2f(0.61f, -0.03f);
       glVertex2f(0.75f, -0.03f);
       glVertex2f(0.75f, 0.01f);
       glVertex2f(0.64f,0.01f);
   glEnd();

    glBegin(GL_QUADS);
      glColor3d(1.0,1.0,0.0);
      glVertex2f(0.605f, 0.01f);
       glVertex2f(0.632f, 0.01f);
       glVertex2f(0.632f, 0.05f);
       glVertex2f(0.63f,0.05f);
   glEnd();


    glBegin(GL_QUADS);
      glColor3d(0.700,0.700,0.700);
      glVertex2f(0.64f, 0.01f);
       glVertex2f(0.75f, 0.01f);
       glVertex2f(0.75f, 0.09f);
       glVertex2f(0.64f,0.09f);
   glEnd();
glPopMatrix();

glPushMatrix();
glTranslatef(-car,0.0f, 0.0f);
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = 0.63f; y = -0.03f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3f(0.0f, 0.0f, 0.0f);
     x = 0.72f; y = -0.03;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius * cos(i * twicePi / 20))), (y + (radius * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

glPopMatrix();
  glPushMatrix(); /////////////////////////////////////////grass 2
   glBegin(GL_QUADS);
         glColor3ub(203,92,13);
      glVertex2f(-1.0f, 0.11f);
       glVertex2f(1.0f, 0.11f);
       glVertex2f(1.0f, 0.14f);
       glVertex2f(-1.0f, 0.14f);

   glEnd();
   glPopMatrix();

   glPushMatrix(); /////////////////////////////////////////Sky(sadik)
   glBegin(GL_QUADS);
      glColor3ub(135,206,235);
        glVertex2f(-1.0f, 0.14f);
       glVertex2f(1.0f, 0.14f);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(-1.0f, 1.0f);
   glEnd();
   glPopMatrix();


//////////////////////////////// hill start //////////////////////////////
    glPushMatrix();

      glPushMatrix();/////// 1st hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3f(0.0,2.0,0.0);
    glTranslatef(-0.86, 0.42, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

     glPushMatrix();/////// 2nd hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3f(0.0,2.0,0.0);
    glTranslatef(-.55, 0.41, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

     glPushMatrix();/////// 3rd hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3f(0.0,2.0,0.0);
    glTranslatef(-.32, 0.409, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

     glPushMatrix();/////// 4th hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3f(0.0,2.0,0.0);
    glTranslatef(0.044, 0.44, 0.0);
    glutSolidSphere(.33,50,50);
    glPopMatrix();

     glPushMatrix();/////// 5th hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3f(0.0,2.0,0.0);
    glTranslatef(0.084, 0.44, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

     glPushMatrix();/////// 6th hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3f(0.0,2.0,0.0);
    glTranslatef(0.1, 0.42, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

    glPushMatrix();/////// 6th hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3f(0.0,2.0,0.0);
    glTranslatef(0.36, 0.36, 0.0);
    glutSolidSphere(.25,50,50);
    glPopMatrix();

     glPushMatrix();/////// 7th hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3f(0.0,2.0,0.0);
    glTranslatef(0.66, 0.36, 0.0);
    glutSolidSphere(.25,50,50);
    glPopMatrix();

     glPushMatrix();/////// 8th hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3f(0.0,2.0,0.0);
    glTranslatef(0.88, 0.36, 0.0);
    glutSolidSphere(.25,50,50);
    glPopMatrix();


    glPopMatrix();

    glPopMatrix();
  glPushMatrix(); /////////////////////////////////////////grass 2
   glBegin(GL_QUADS);
         glColor3ub(203,92,13);
      glVertex2f(-1.0f, 0.11f);
       glVertex2f(1.0f, 0.11f);
       glVertex2f(1.0f, 0.14f);
       glVertex2f(-1.0f, 0.14f);

   glEnd();
   glPopMatrix();

   /////////////////////////// hill end ///////////////////////////


      ////////////////Cloud 1
   glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
   glColor3f(1.0,1.0,1.0);
    glTranslatef(-0.9, 0.9, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();

         ////////////////Cloud 2
      glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
   glColor3f(1.0,1.0,1.0);
    glTranslatef(-0.8, 0.9, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();

      ////////////////Cloud 3
      glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
   glColor3f(1.0,1.0,1.0);
    glTranslatef(-0.9, 0.8, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();

     ////////////////Cloud 4
      glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
   glColor3f(1.0,1.0,1.0);
    glTranslatef(-0.8, 0.8, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();

     ////////////////Cloud 5
      glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
   glColor3f(1.0,1.0,1.0);
    glTranslatef(-0.85, 0.85, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();



     glPushMatrix();///////Sun
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(253,165,15);
    glTranslatef(0.86, 0.9, 0.0);
    glutSolidSphere(.07,50,50);
    glPopMatrix();

    buildings();

    //wave();


    if(flag) /// checking for Day or Night
    {
        glFlush();
    }else if(!flag)
    {
        nightMode();
    }


}



void wave() /////////wave (anik)
{

    glPushMatrix();///dheu 1
      glTranslatef(wave1,-0.65,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	//glColor3ub(100,149,100);
	glColor3f(0.4,.4,1.1);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu 2
      glTranslatef(wave2,-0.65,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3f(0.4,.4,1.1); //glColor3ub(100,0,100);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu 3
      glTranslatef(wave3,-0.65,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3f(0.4,.4,1.1); //glColor3ub(100,0,00);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu 4
      glTranslatef(wave4,-0.65,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3f(0.4,.4,1.1); //glColor3ub(100,149,100);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu 5
      glTranslatef(wave5,-0.65,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3f(0.4,.4,1.1); //glColor3ub(100,149,100);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu 6
      glTranslatef(wave6,-0.65,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3f(0.4,.4,1.1); //glColor3ub(100,149,100);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu 7
      glTranslatef(wave7,-0.65,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3f(0.4,.4,1.1); //glColor3ub(100,149,100);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();///dheu 8
      glTranslatef(wave8,-0.65,0);
      glScaled(4,1,1);
     glBegin(GL_POLYGON);
	glColor3f(0.4,.4,1.1); //glColor3ub(100,149,100);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;
		float r=0.05;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix();


}

























/////---------------------------Buildings  (anik)
void buildings()
{
    GLfloat radius = 0.02;
   GLfloat radius1 = 0.016;
    GLfloat x; GLfloat y;
    GLfloat twicePi = 2.0 * 3.142;
    int i;


    glPushMatrix(); /////////////////////////////////////////Building 1(sadik)
//glTranslatef(0,0.0f, 0.0f);
   glBegin(GL_POLYGON);
   glColor3f(0.700 ,0.700,0.700);
       glVertex2f(-1.0f, 0.14f);
       glVertex2f(-0.9f, 0.14f);
       glVertex2f(-0.9f, 0.5f);
       glVertex2f(-0.92f, 0.55f);
       glVertex2f(-0.99f, 0.55f);
   glEnd();

   glBegin(GL_POLYGON); //Door
   glColor3f(0,0,0);
       glVertex2f(-0.96f, 0.14f);
       glVertex2f(-0.94f, 0.14f);
        glVertex2f(-0.94f, 0.3f);
         glVertex2f(-0.96f, 0.3f);

   glEnd();

   glBegin(GL_POLYGON); //Window1
   glColor3f(0,0,0);

         glVertex2f(-0.98f, 0.5f);
          glVertex2f(-0.97f, 0.5f);
           glVertex2f(-0.97f, 0.48f);
            glVertex2f(-0.98f, 0.48f);


   glEnd();

   glBegin(GL_POLYGON); //Window2
   glColor3f(0,0,0);

         glVertex2f(-0.96f, 0.5f);
          glVertex2f(-0.95f, 0.5f);
           glVertex2f(-0.95f, 0.48f);
            glVertex2f(-0.96f, 0.48f);
   glEnd();

    glBegin(GL_POLYGON); //Window3
   glColor3f(0,0,0);

         glVertex2f(-0.94f, 0.5f);
          glVertex2f(-0.93f, 0.5f);
           glVertex2f(-0.93f, 0.48f);
            glVertex2f(-0.94f, 0.48f);
   glEnd();
   glPopMatrix();

     glBegin(GL_POLYGON); //Window4
   glColor3f(0,0,0);

         glVertex2f(-0.92f, 0.5f);
          glVertex2f(-0.91f, 0.5f);
           glVertex2f(-0.91f, 0.48f);
            glVertex2f(-0.92f, 0.48f);
   glEnd();

   glBegin(GL_POLYGON); //Window5
   glColor3f(0,0,0);

         glVertex2f(-0.98f, 0.46f);
          glVertex2f(-0.97f, 0.46f);
           glVertex2f(-0.97f, 0.44f);
            glVertex2f(-0.98f, 0.44f);


   glEnd();
     glBegin(GL_POLYGON); //Window6
   glColor3f(0,0,0);

         glVertex2f(-0.96f, 0.46f);
          glVertex2f(-0.95f, 0.46f);
           glVertex2f(-0.95f, 0.44f);
            glVertex2f(-0.96f, 0.44f);
   glEnd();
   glBegin(GL_POLYGON); //Window7
   glColor3f(0,0,0);

         glVertex2f(-0.94f, 0.46f);
          glVertex2f(-0.93f, 0.46f);
           glVertex2f(-0.93f, 0.44f);
            glVertex2f(-0.94f, 0.44f);
   glEnd();

     glBegin(GL_POLYGON); //Window8
   glColor3f(0,0,0);

         glVertex2f(-0.92f, 0.46f);
          glVertex2f(-0.91f, 0.46f);
           glVertex2f(-0.91f, 0.44f);
            glVertex2f(-0.92f, 0.44f);
   glEnd();
    glBegin(GL_POLYGON); //Window9
   glColor3f(0,0,0);

         glVertex2f(-0.98f, 0.42f);
          glVertex2f(-0.97f, 0.42f);
           glVertex2f(-0.97f, 0.40f);
            glVertex2f(-0.98f, 0.40f);


   glEnd();
    glBegin(GL_POLYGON); //Window10
   glColor3f(0,0,0);

         glVertex2f(-0.96f, 0.42f);
          glVertex2f(-0.95f, 0.42f);
           glVertex2f(-0.95f, 0.40f);
            glVertex2f(-0.96f, 0.40f);
   glEnd();
   glBegin(GL_POLYGON); //Window11
   glColor3f(0,0,0);

         glVertex2f(-0.94f, 0.42f);
          glVertex2f(-0.93f, 0.42f);
           glVertex2f(-0.93f, 0.40f);
            glVertex2f(-0.94f, 0.40f);
   glEnd();

     glBegin(GL_POLYGON); //Window12
   glColor3f(0,0,0);

         glVertex2f(-0.92f, 0.42f);
          glVertex2f(-0.91f, 0.42f);
           glVertex2f(-0.91f, 0.40f);
            glVertex2f(-0.92f, 0.40f);
   glEnd();

    glBegin(GL_QUADS);/////////// Building middle line
    glColor3d(0.4,0.4,0.4);
      glVertex2f(-0.99f, .32f);
      glVertex2f(-0.9f, .32f);
      glVertex2f(-0.9f, .36f);
      glVertex2f(-0.99f, .36f);
   glEnd();


     glPushMatrix(); /////////////////////////////////////////Building 2(sadik)
//glTranslatef(0,0.0f, 0.0f);
   glBegin(GL_POLYGON);
   glColor3f(0.700 ,0.700,0.700);
       glVertex2f(-0.88f, 0.14f);
       glVertex2f(-0.79f, 0.14f);
       glVertex2f(-0.79f, 0.5f);
       glVertex2f(-0.82f, 0.55f);
       glVertex2f(-0.88f, 0.55f);

   glEnd();

    glBegin(GL_POLYGON); /////Door
   glColor3f(0,0,0);
       glVertex2f(-0.85f, 0.14f);
       glVertex2f(-0.83f, 0.14f);
        glVertex2f(-0.83f, 0.3f);
         glVertex2f(-0.85f, 0.3f);

   glEnd();
   glBegin(GL_POLYGON); //Window1
   glColor3f(0,0,0);

         glVertex2f(-0.87f, 0.5f);
          glVertex2f(-0.86f, 0.5f);
           glVertex2f(-0.86f, 0.48f);
            glVertex2f(-0.87f, 0.48f);


   glEnd();
   glBegin(GL_POLYGON); //Window2
   glColor3f(0,0,0);

         glVertex2f(-0.85f, 0.5f);
          glVertex2f(-0.84f, 0.5f);
           glVertex2f(-0.84f, 0.48f);
            glVertex2f(-0.85f, 0.48f);
   glEnd();

    glBegin(GL_POLYGON); //Window3
   glColor3f(0,0,0);

         glVertex2f(-0.83f, 0.5f);
          glVertex2f(-0.82f, 0.5f);
           glVertex2f(-0.82f, 0.48f);
            glVertex2f(-0.83f, 0.48f);
   glEnd();
   glPopMatrix();

     glBegin(GL_POLYGON); //Window4
   glColor3f(0,0,0);

         glVertex2f(-0.81f, 0.5f);
          glVertex2f(-0.80f, 0.5f);
           glVertex2f(-0.80f, 0.48f);
            glVertex2f(-0.81f, 0.48f);
   glEnd();

   glBegin(GL_POLYGON); //Window5
   glColor3f(0,0,0);

         glVertex2f(-0.87f, 0.46f);
          glVertex2f(-0.86f, 0.46f);
           glVertex2f(-0.86f, 0.44f);
            glVertex2f(-0.87f, 0.44f);


   glEnd();
     glBegin(GL_POLYGON); //Window6
   glColor3f(0,0,0);

         glVertex2f(-0.85f, 0.46f);
          glVertex2f(-0.84f, 0.46f);
           glVertex2f(-0.84f, 0.44f);
            glVertex2f(-0.85f, 0.44f);
   glEnd();
   glBegin(GL_POLYGON); //Window7
   glColor3f(0,0,0);

         glVertex2f(-0.83f, 0.46f);
          glVertex2f(-0.82f, 0.46f);
           glVertex2f(-0.82f, 0.44f);
            glVertex2f(-0.83f, 0.44f);
   glEnd();

     glBegin(GL_POLYGON); //Window8
   glColor3f(0,0,0);

         glVertex2f(-0.81f, 0.46f);
          glVertex2f(-0.80f, 0.46f);
           glVertex2f(-0.80f, 0.44f);
            glVertex2f(-0.81f, 0.44f);
   glEnd();
    glBegin(GL_POLYGON); //Window9
   glColor3f(0,0,0);

         glVertex2f(-0.87f, 0.42f);
          glVertex2f(-0.86f, 0.42f);
           glVertex2f(-0.86f, 0.40f);
            glVertex2f(-0.87f, 0.40f);


   glEnd();
    glBegin(GL_POLYGON); //Window10
   glColor3f(0,0,0);

         glVertex2f(-0.85f, 0.42f);
          glVertex2f(-0.84f, 0.42f);
           glVertex2f(-0.84f, 0.40f);
            glVertex2f(-0.85f, 0.40f);
   glEnd();
   glBegin(GL_POLYGON); //Window11
   glColor3f(0,0,0);

         glVertex2f(-0.83f, 0.42f);
          glVertex2f(-0.82f, 0.42f);
           glVertex2f(-0.82f, 0.40f);
            glVertex2f(-0.83f, 0.40f);
   glEnd();

     glBegin(GL_POLYGON); //Window12
   glColor3f(0,0,0);

         glVertex2f(-0.81f, 0.42f);
          glVertex2f(-0.80f, 0.42f);
           glVertex2f(-0.80f, 0.40f);
            glVertex2f(-0.81f, 0.40f);
   glEnd();


    glBegin(GL_QUADS);/////////// Building middle line
    glColor3d(0.4,0.4,0.4);
      glVertex2f(-0.88f, .32f);
      glVertex2f(-0.79f, .32f);
      glVertex2f(-0.79f, .36f);
      glVertex2f(-0.88f, .36f);
   glEnd();


   glPopMatrix();


   glPushMatrix(); /////////////////////////////////////////Building 3(sadik)
//glTranslatef(0.90,0.91,);
   glBegin(GL_POLYGON);
   glColor3f(0.700 ,0.700,0.700);
       glVertex2f(-0.77f, 0.14f);
       glVertex2f(-0.68f, 0.14f);
       glVertex2f(-0.68f, 0.5f);
       glVertex2f(-0.72f, 0.55f);
       glVertex2f(-0.77f, 0.55f);
   glEnd();
       glBegin(GL_POLYGON);//// Door
   glColor3f(0,0,0);
       glVertex2f(-0.74f, 0.14f);
       glVertex2f(-0.72f, 0.14f);
        glVertex2f(-0.72f, 0.3f);
         glVertex2f(-0.74f, 0.3f);

   glEnd();

      glBegin(GL_POLYGON); //Window1
   glColor3f(0,0,0);

         glVertex2f(-0.76f, 0.5f);
          glVertex2f(-0.75f, 0.5f);
           glVertex2f(-0.75f, 0.48f);
            glVertex2f(-0.76f, 0.48f);


   glEnd();
   glBegin(GL_POLYGON); //Window2
   glColor3f(0,0,0);

         glVertex2f(-0.74f, 0.5f);
          glVertex2f(-0.73f, 0.5f);
           glVertex2f(-0.73f, 0.48f);
            glVertex2f(-0.74f, 0.48f);
   glEnd();

    glBegin(GL_POLYGON); //Window3
   glColor3f(0,0,0);

         glVertex2f(-0.72f, 0.5f);
          glVertex2f(-0.71f, 0.5f);
           glVertex2f(-0.71f, 0.48f);
            glVertex2f(-0.72f, 0.48f);
   glEnd();
   glPopMatrix();

     glBegin(GL_POLYGON); //Window4
   glColor3f(0,0,0);

         glVertex2f(-0.70f, 0.5f);
          glVertex2f(-0.69f, 0.5f);
           glVertex2f(-0.69f, 0.48f);
            glVertex2f(-0.70f, 0.48f);
   glEnd();

   glBegin(GL_POLYGON); //Window5
   glColor3f(0,0,0);

         glVertex2f(-0.76f, 0.46f);
          glVertex2f(-0.75f, 0.46f);
           glVertex2f(-0.75f, 0.44f);
            glVertex2f(-0.76f, 0.44f);


   glEnd();
     glBegin(GL_POLYGON); //Window6
   glColor3f(0,0,0);

         glVertex2f(-0.74f, 0.46f);
          glVertex2f(-0.73f, 0.46f);
           glVertex2f(-0.73f, 0.44f);
            glVertex2f(-0.74f, 0.44f);
   glEnd();
   glBegin(GL_POLYGON); //Window7
   glColor3f(0,0,0);

         glVertex2f(-0.72f, 0.46f);
          glVertex2f(-0.71f, 0.46f);
           glVertex2f(-0.71f, 0.44f);
            glVertex2f(-0.72f, 0.44f);
   glEnd();

     glBegin(GL_POLYGON); //Window8
   glColor3f(0,0,0);

         glVertex2f(-0.70f, 0.46f);
          glVertex2f(-0.69f, 0.46f);
           glVertex2f(-0.69f, 0.44f);
            glVertex2f(-0.70f, 0.44f);
   glEnd();
    glBegin(GL_POLYGON); //Window9
   glColor3f(0,0,0);

         glVertex2f(-0.76f, 0.42f);
          glVertex2f(-0.75f, 0.42f);
           glVertex2f(-0.75f, 0.40f);
            glVertex2f(-0.76f, 0.40f);


   glEnd();
    glBegin(GL_POLYGON); //Window10
   glColor3f(0,0,0);

         glVertex2f(-0.74f, 0.42f);
          glVertex2f(-0.73f, 0.42f);
           glVertex2f(-0.73f, 0.40f);
            glVertex2f(-0.74f, 0.40f);
   glEnd();
   glBegin(GL_POLYGON); //Window11
   glColor3f(0,0,0);

         glVertex2f(-0.72f, 0.42f);
          glVertex2f(-0.71f, 0.42f);
           glVertex2f(-0.71f, 0.40f);
            glVertex2f(-0.72f, 0.40f);
   glEnd();

     glBegin(GL_POLYGON); //Window12
   glColor3f(0,0,0);

         glVertex2f(-0.70f, 0.42f);
          glVertex2f(-0.69f, 0.42f);
           glVertex2f(-0.69f, 0.40f);
            glVertex2f(-0.70f, 0.40f);
   glEnd();

    glBegin(GL_QUADS);/////////// Building middle line
    glColor3d(0.4,0.4,0.4);
      glVertex2f(-0.77f, .32f);
      glVertex2f(-0.68f, .32f);
      glVertex2f(-0.68f, .36f);
      glVertex2f(-0.77f, .36f);
   glEnd();

   glPopMatrix();

      glPushMatrix(); /////////////////////////////////////////Hospital (sadik)
//glTranslatef(0,0.0f, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(139,157,195);
       glVertex2f(-0.66f, 0.14f);
       glVertex2f(-0.62f, 0.14f);
       //glVertex2f(-0.58f, 0.25f);
      // glVertex2f(-0.55f, 0.25f);
      // glVertex2f(-0.51f, 0.2f);
       // glVertex2f(-0.47f, 0.2f);
      //  glVertex2f(-0.47f, 0.5f);
        //glVertex2f(-0.51f, 0.45f);
         //glVertex2f(-0.55f, 0.5f);
         //glVertex2f(-0.58f, 0.5f);
         glVertex2f(-0.62f, 0.45f);
         glVertex2f(-0.66f, 0.5f);
   glEnd();

      glBegin(GL_POLYGON);
   glColor3f(1,1,1);

       glVertex2f(-0.62f, 0.14f);
       glVertex2f(-0.51f, 0.14f);
        glVertex2f(-0.55f, 0.25f);
        glVertex2f(-0.58f, 0.25f);
   glEnd();

      glBegin(GL_POLYGON);
   glColor3ub(139,157,195);
        glVertex2f(-0.51f, 0.14f);
        glVertex2f(-0.47f, 0.14f);
        glVertex2f(-0.47f, 0.5f);
        glVertex2f(-0.51f, 0.45f);
   glEnd();

        glBegin(GL_POLYGON);
  glColor3ub(223,227,238);
    glVertex2f(-0.62f, 0.14f);
    glVertex2f(-0.58f, 0.25f);
     glVertex2f(-0.58f, 0.5f);
         glVertex2f(-0.62f, 0.45f);
   glEnd();

    glBegin(GL_QUADS);
     glColor3ub(139,157,195);//middle
    glVertex2f(-0.58f, 0.25f);
       glVertex2f(-0.55f, 0.25f);
        glVertex2f(-0.55f, 0.5f);
        glVertex2f(-0.58f, 0.5f);
   glEnd();

   glBegin(GL_POLYGON);
glColor3ub(223,227,238);
    glVertex2f(-0.55f, 0.25f);
    glVertex2f(-0.51f, 0.14f);
    glVertex2f(-0.51f, 0.45f);
    glVertex2f(-0.55f, 0.5f);
   glEnd();


    glBegin(GL_TRIANGLES);
   glColor3f(0.0,0.0 ,0.600);
       //  glVertex2f(-0.66f, 0.5f);
        //  glVertex2f(-0.62f, 0.45f);
       //   glVertex2f(-0.58f, 0.5f);
         // glVertex2f(-0.55f, 0.5f);
        //  glVertex2f(-0.51f, 0.45f);
          glVertex2f(-0.47f, 0.5f);
           glVertex2f(-0.57f, 0.6f);
            glVertex2f(-0.66f, 0.5f);


   glEnd();


    glBegin(GL_TRIANGLES);
   glColor3f(0.0,0.0,0.600);
         glVertex2f(-0.66f, 0.5f);
          glVertex2f(-0.62f, 0.45f);
          glVertex2f(-0.58f, 0.5f);
   glEnd();
    glBegin(GL_TRIANGLES);
   glColor3f(0.0,0.0 ,0.600);
        glVertex2f(-0.51f, 0.45f);
         glVertex2f(-0.55f, 0.5f);
         glVertex2f(-0.47f, 0.5f);
   glEnd();
   glBegin(GL_POLYGON);
    glColor3f(1,1,1); // Hospital Icon 1
    glVertex2f(-0.575f, 0.45f);
     glVertex2f(-0.550f, 0.45f);
     glVertex2f(-0.550, 0.455f);
     glVertex2f(-0.575f, 0.455f);
   glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1,1,1); // Hospital Icon2
    glVertex2f(-0.56f, 0.475f);
    glVertex2f(-0.56f, 0.430f);
    glVertex2f(-0.565f, 0.430f);
     glVertex2f(-0.565f, 0.475f);

glEnd();

    glBegin(GL_QUADS); // left side window1
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.645f, 0.29f);
       glVertex2f(-0.635f, 0.29f);
       glVertex2f(-0.635f, 0.34f);
        glVertex2f(-0.645f, 0.34f);
   glEnd();

    glBegin(GL_QUADS); //left side window2
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.645f, 0.36f);
       glVertex2f(-0.635f, 0.36f);
       glVertex2f(-0.635f, 0.41f);
        glVertex2f(-0.645f, 0.41f);

          glBegin(GL_QUADS); //left side middle window 1 (top)
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.61f, 0.36f);
       glVertex2f(-0.60f, 0.37f);
       glVertex2f(-0.60f, 0.42f);
        glVertex2f(-0.61f, 0.41f);

         glBegin(GL_QUADS); //left side middle window 1 (down)
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.61f, 0.29f);
       glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.60f, 0.35f);
        glVertex2f(-0.61f, 0.34f);
          glBegin(GL_QUADS); //left side middle window 2 (top)
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.595f, 0.37f);
       glVertex2f(-0.585f, 0.38f);
       glVertex2f(-0.585f, 0.43f);
        glVertex2f(-0.595f, 0.42f);

        glBegin(GL_QUADS); //left side middle window 2 (down)
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.595f, 0.30f);
       glVertex2f(-0.585f, 0.31f);
       glVertex2f(-0.585f, 0.36f);
        glVertex2f(-0.595f, 0.35f);

        glBegin(GL_QUADS); // right side window1
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.49f, 0.29f);
       glVertex2f(-0.48f, 0.29f);
       glVertex2f(-0.48f, 0.34f);
        glVertex2f(-0.49f, 0.34f);
   glEnd();


        glBegin(GL_QUADS); // right side middle window 1 (down)
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.53f, 0.30f);
       glVertex2f(-0.52f, 0.29f);
       glVertex2f(-0.52f, 0.34f);
        glVertex2f(-0.53f, 0.35f);
   glEnd();


        glBegin(GL_QUADS); // right side middle window 1 (top)
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.53f, 0.36f);
       glVertex2f(-0.52f, 0.35f);
       glVertex2f(-0.52f, 0.40f);
        glVertex2f(-0.53f, 0.41f);
   glEnd();

       glBegin(GL_QUADS); // right side middle window 2 (down)
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.545f, 0.31f);
       glVertex2f(-0.535f, 0.30f);
       glVertex2f(-0.535f, 0.35f);
        glVertex2f(-0.545f, 0.36f);
   glEnd();

   glBegin(GL_QUADS); // right side middle window 2 (down)
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.545f, 0.37f);
       glVertex2f(-0.535f, 0.36f);
       glVertex2f(-0.535f, 0.41f);
        glVertex2f(-0.545f, 0.42f);
   glEnd();

     glBegin(GL_QUADS); // right side window2
    glColor3f(0,0,0);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.49f, 0.36f);
       glVertex2f(-0.48f, 0.36f);
       glVertex2f(-0.48f, 0.41f);
        glVertex2f(-0.49f, 0.41f);
   glEnd();

glPopMatrix();
// red building
glPushMatrix();
    glBegin(GL_QUADS);
   glColor3ub(202,0,53);//////////

        glVertex2f(-0.02f, 0.14f);
         glVertex2f(0.215f, 0.14f);
         glVertex2f(0.215f, 0.54f);
         glVertex2f(-0.02f, 0.54f);
glEnd();
glBegin(GL_QUADS);
   glColor3ub(146,7,62);//////////

        glVertex2f(0.215f, 0.14f);
         glVertex2f(0.25f, 0.14f);
         glVertex2f(0.25f, 0.48f);
         glVertex2f(0.215f, 0.54f);
glEnd();

glBegin(GL_QUADS);
   glColor3ub(202,0,53);//////////

        glVertex2f(0.04f, 0.54f);
         glVertex2f(0.16f, 0.54f);
         glVertex2f(0.16f, 0.62f);
         glVertex2f(0.04f, 0.62f);
glEnd();

glBegin(GL_QUADS);
   glColor3ub(146,7,62);//////////

        glVertex2f(0.16f, 0.54f);
         glVertex2f(0.18f, 0.54f);
         glVertex2f(0.18f, 0.58f);
         glVertex2f(0.16f, 0.62f);
glEnd();

glBegin(GL_TRIANGLES);
   glColor3ub(202,0,53);//////////

        glVertex2f(0.04f, 0.62f);
         glVertex2f(0.16f, 0.62f);
         glVertex2f(0.11f, 0.68f);
glEnd();

 glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////door

        glVertex2f(0.07f, 0.14f);
         glVertex2f(0.14f, 0.14f);
         glVertex2f(0.14f, 0.28f);
         glVertex2f(0.07f, 0.28f);
glEnd();

glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////windows

        glVertex2f(0.0f, 0.42f);
         glVertex2f(0.03f, 0.42f);
         glVertex2f(0.03f, 0.48f);
         glVertex2f(0.0f, 0.48f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.05f, 0.42f);
         glVertex2f(0.08f, 0.42f);
         glVertex2f(0.08f, 0.48f);
         glVertex2f(0.05f, 0.48f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.1f, 0.42f);
         glVertex2f(0.13f, 0.42f);
         glVertex2f(0.13f, 0.48f);
         glVertex2f(0.1f, 0.48f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.15f, 0.42f);
         glVertex2f(0.18f, 0.42f);
         glVertex2f(0.18f, 0.48f);
         glVertex2f(0.15f, 0.48f);
glEnd();

glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.0f, 0.32f);
         glVertex2f(0.03f, 0.32f);
         glVertex2f(0.03f, 0.38f);
         glVertex2f(0.00f, 0.38f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.05f, 0.32f);
         glVertex2f(0.08f, 0.32f);
         glVertex2f(0.08f, 0.38f);
         glVertex2f(0.05f, 0.38f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.1f, 0.32f);
         glVertex2f(0.13f, 0.32f);
         glVertex2f(0.13f, 0.38f);
         glVertex2f(0.1f, 0.38f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.15f, 0.32f);
         glVertex2f(0.18f, 0.32f);
         glVertex2f(0.18f, 0.38f);
         glVertex2f(0.15f, 0.38f);
glEnd();
glPopMatrix();

//factory////////////////////////
glPushMatrix();

glBegin(GL_QUADS);
   glColor3ub(135,60,190);//////////

        glVertex2f(0.31f, 0.14f);
         glVertex2f(0.41f, 0.14f);
         glVertex2f(0.41f, 0.54f);
         glVertex2f(0.31f, 0.34f);
glEnd();

glBegin(GL_QUADS);
   glColor3ub(135,60,190);//////////

        glVertex2f(0.41f, 0.14f);
         glVertex2f(0.51f, 0.14f);
         glVertex2f(0.51f, 0.54f);
         glVertex2f(0.41f, 0.34f);
glEnd();

glBegin(GL_QUADS);
   glColor3ub(135,60,190);//////////

        glVertex2f(0.51f, 0.14f);
         glVertex2f(0.61f, 0.14f);
         glVertex2f(0.61f, 0.54f);
         glVertex2f(0.51f, 0.34f);
glEnd();
glBegin(GL_QUADS);
   glColor3ub(135,60,190);//////////

        glVertex2f(0.33f, 0.37f);
         glVertex2f(0.36f, 0.37f);
         glVertex2f(0.36f, 0.59f);
         glVertex2f(0.33f, 0.59f);
glEnd();

glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.33f, 0.2f);
         glVertex2f(0.38f, 0.2f);
         glVertex2f(0.38f, 0.27f);
         glVertex2f(0.33f, 0.27f);
glEnd();

glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.43f, 0.2f);
         glVertex2f(0.48f, 0.2f);
         glVertex2f(0.48f, 0.27f);
         glVertex2f(0.43f, 0.27f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

        glVertex2f(0.53f, 0.2f);
         glVertex2f(0.58f, 0.2f);
         glVertex2f(0.58f, 0.27f);
         glVertex2f(0.53f, 0.27f);
glEnd();
glPopMatrix();

glPushMatrix();
GLfloat radius6 = 0.025;
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
glColor3ub(177,186,181);     x = 0.35f; y = 0.59f;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius6 * cos(i * twicePi / 20))), (y + (radius6 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

 GLfloat radius7 = 0.028;
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3ub(177,186,181);
     x = 0.37f; y = 0.62;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius7 * cos(i * twicePi / 20))), (y + (radius7 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

 GLfloat radius2 = 0.031;
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3ub(177,186,181);
     x = 0.39f; y = 0.64;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius2 * cos(i * twicePi / 20))), (y + (radius2 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
 GLfloat radius3 = 0.034;
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3ub(177,186,181);
     x = 0.41f; y = 0.66;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius3 * cos(i * twicePi / 20))), (y + (radius3 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END

 GLfloat radius4 = 0.037;
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3ub(177,186,181);
     x = 0.43f; y = 0.68;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius4 * cos(i * twicePi / 20))), (y + (radius4 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
 GLfloat radius5 = 0.04;
     glBegin(GL_TRIANGLE_FAN); //BEGIN CIRCLE
    glColor3ub(177,186,181);
     x = 0.45f; y = 0.7;
    glVertex2f(x, y); // center of circle
    for (i = 0; i <= 20; i++)   {
        glVertex2f (
            (x + (radius5 * cos(i * twicePi / 20))), (y + (radius5 * sin(i * twicePi / 20)))
            );

    }
    glEnd(); //END
glPopMatrix();
glPopMatrix();
//////////////////////////////last building
glPushMatrix();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.600);//////////

        glVertex2f(0.7f, 0.14f);
         glVertex2f(0.9f, 0.14f);
         glVertex2f(0.9f, 0.61f);
         glVertex2f(0.7f, 0.61f);
glEnd();

glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.500);//////////

         glVertex2f(0.9f, 0.14f);
         glVertex2f(0.93f, 0.14f);
         glVertex2f(0.93f, 0.54f);
         glVertex2f(0.9f, 0.61f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////door

         glVertex2f(0.78f, 0.14f);
         glVertex2f(0.82f, 0.14f);
         glVertex2f(0.82f, 0.28f);
         glVertex2f(0.78f, 0.28f);
glEnd();

glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////windows

         glVertex2f(0.71f, 0.48f);
         glVertex2f(0.735f, 0.48f);
         glVertex2f(0.735f, 0.55f);
         glVertex2f(0.71f, 0.55f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

         glVertex2f(0.71f, 0.3f);
         glVertex2f(0.735f, 0.3f);
         glVertex2f(0.735f, 0.37f);
         glVertex2f(0.71f, 0.37f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

         glVertex2f(0.89f, 0.48f);
         glVertex2f(0.865f, 0.48f);
         glVertex2f(0.865f, 0.55f);
         glVertex2f(0.89f, 0.55f);
glEnd();
glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

         glVertex2f(0.89f, 0.3f);
         glVertex2f(0.865f, 0.3f);
         glVertex2f(0.865f, 0.37f);
         glVertex2f(0.89f, 0.37f);
glEnd();

glBegin(GL_QUADS);
   glColor3f(0.0,0.0,0.0);//////////

         glVertex2f(0.78f, 0.39f);
         glVertex2f(0.815f, 0.39f);
         glVertex2f(0.815f, 0.48f);
         glVertex2f(0.78f, 0.48f);
glEnd();

glPopMatrix();


glPushMatrix();
    glBegin(GL_QUADS);//////////////////////////////////////////////////////////////////////////Field
   glColor3f(0,.2,0);////// nicer onghso
       glVertex2f(-0.40f, 0.14f);
        glVertex2f(-0.10f, 0.14f);
        glVertex2f(-0.10f, 0.25f);
        glVertex2f(-0.40f, 0.25f);
   glEnd();
   glPopMatrix();
glPushMatrix();
    glBegin(GL_QUADS);
   glColor3f(0,.5,0);//////////main field

        glVertex2f(-0.40f, 0.25f);
         glVertex2f(-0.10f, 0.25f);
          glVertex2f(-0.14f, 0.6f);
           glVertex2f(-0.36f, 0.6f);
   glEnd();


    glBegin(GL_LINES);
   glColor3f(1,1,1);//////////main field line 1

       glVertex2f(-0.35f, 0.30f);
        glVertex2f(-0.15f, 0.30f);
        // glVertex2f(-0.18f, 0.58f);
        //  glVertex2f(-0.32f, 0.58f);
   glEnd();

     glBegin(GL_LINES);
   glColor3f(1,1,1);//////////main field line 2

        glVertex2f(-0.15f, 0.30f);
         glVertex2f(-0.18f, 0.58f);

   glEnd();

    glBegin(GL_LINES);
   glColor3f(1,1,1);//////////main field line 3
        glVertex2f(-0.18f, 0.58f);
         glVertex2f(-0.32f, 0.58f);

   glEnd();

    glBegin(GL_LINES);
   glColor3f(1,1,1);//////////main field line 4
    glVertex2f(-0.32f, 0.58f);
    glVertex2f(-0.35f, 0.30f);

   glEnd();

     glBegin(GL_LINES);
   glColor3f(1,1,1);//////////main field line

    glVertex2f(-0.25f, 0.30f);
    glVertex2f(-0.25f, 0.58f);


   glEnd();

     glBegin(GL_LINES);
   glColor3f(1,1,1);//////////main field line 1

       glVertex2f(-0.35f, 0.30f);
        glVertex2f(-0.15f, 0.30f);
        // glVertex2f(-0.18f, 0.58f);
        //  glVertex2f(-0.32f, 0.58f);
 glEnd();
 glPopMatrix();
    glPushMatrix();////////field circle
    glTranslatef(-.25,0.45f, 0.0f);
        glColor3f(1.0,1.0,1.0);
        glutSolidSphere(.03,50,50);
    glPopMatrix();

     glPopMatrix();
    glPushMatrix();////////field circle
    glTranslatef(-.25,0.45f, 0.0f);
        glColor3f(0,.5,0);
        glutSolidSphere(.026,50,50);
    glPopMatrix();

    glPushMatrix();////////field Lamp post
   // glTranslatef(-.25,0.45f, 0.0f);
   glBegin(GL_QUADS);
        glColor3f(0.0,0.0,0.0);
        glVertex2f(-0.45f, 0.14f);
        glVertex2f(-0.43f, 0.14f);
         glVertex2f(-0.43f, 0.5f);
         glVertex2f(-0.45f, 0.5f);
      glEnd();
    glPopMatrix();

       glPushMatrix();////////field Lamp post circle
    glTranslatef(-.44,0.5f, 0.0f);
        glColor3f(0.0,0.0,0.0);
        glutSolidSphere(.02,50,50);
    glPopMatrix();

    glPushMatrix();////////field Lamp post
   // glTranslatef(-.25,0.45f, 0.0f);
   glBegin(GL_POLYGON);
        glColor3f(1.0,2.0,0.0);
        glVertex2f(-0.43f, 0.45);
        glVertex2f(-0.40f, 0.42);
        glVertex2f(-0.40f, 0.52f);

      glEnd();
    glPopMatrix();



     glPushMatrix();///// tree //////////////////////
   // glTranslatef(-.25,0.45f, 0.0f);
   glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2f(-0.86,.6);
        glVertex2f(-0.84, 0.6);
        glVertex2f(-0.84, 0.68);
        glVertex2f(-.86,.68);

      glEnd();
    glPopMatrix();

     glPushMatrix();///////
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.862, 0.68, 0.0);
    glutSolidSphere(.016,50,50);
    glPopMatrix();

     glPushMatrix();///////
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.85, 0.69, 0.0);
    glutSolidSphere(.019,50,50);
    glPopMatrix();

    glPushMatrix();
   // glTranslatef(-.25,0.45f, 0.0f);
   glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2f(-0.82,.6);
        glVertex2f(-0.8, 0.6);
        glVertex2f(-0.8, 0.68);
        glVertex2f(-.82,.68);

      glEnd();
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.822, 0.68, 0.0);
    glutSolidSphere(.016,50,50);
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.81, 0.69, 0.0);
    glutSolidSphere(.019,50,50);
    glPopMatrix();


    glPushMatrix();
   // glTranslatef(-.25,0.45f, 0.0f);
   glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2f(-0.78,.6);
        glVertex2f(-0.76, 0.6);
        glVertex2f(-0.76, 0.68);
        glVertex2f(-.78,.68);

      glEnd();
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.782, 0.68, 0.0);
    glutSolidSphere(.016,50,50);
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.77, 0.69, 0.0);
    glutSolidSphere(.019,50,50);
    glPopMatrix();


     glPushMatrix();
   // glTranslatef(-.25,0.45f, 0.0f);
   glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2f(-0.22,.62);
        glVertex2f(-0.2, 0.62);
        glVertex2f(-0.2, 0.68);
        glVertex2f(-.22,.68);

      glEnd();
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.222, 0.68, 0.0);
    glutSolidSphere(.016,50,50);
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.21, 0.69, 0.0);
    glutSolidSphere(.019,50,50);
    glPopMatrix();

      glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.232, 0.69, 0.0);
    glutSolidSphere(.016,50,50);
    glPopMatrix();

     glPushMatrix();
   // glTranslatef(-.25,0.45f, 0.0f);
   glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2f(-0.26,.62);
        glVertex2f(-0.28, 0.62);
        glVertex2f(-0.28, 0.68);
        glVertex2f(-.26,.68);

      glEnd();
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.262, 0.68, 0.0);
    glutSolidSphere(.016,50,50);
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.27, 0.69, 0.0);
    glutSolidSphere(.019,50,50);
    glPopMatrix();

     glPushMatrix();
   // glTranslatef(-.25,0.45f, 0.0f);
   glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2f(-0.5,.62);
        glVertex2f(-0.52, 0.62);
        glVertex2f(-0.52, 0.68);
        glVertex2f(-.5,.68);

      glEnd();
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.502, 0.68, 0.0);
    glutSolidSphere(.016,50,50);
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(-0.51, 0.69, 0.0);
    glutSolidSphere(.019,50,50);
    glPopMatrix();

    glPushMatrix();
   // glTranslatef(-.25,0.45f, 0.0f);
   glBegin(GL_POLYGON);
        glColor3ub(139,69,19);
        glVertex2f(0.64,.6);
        glVertex2f(0.66, 0.6);
        glVertex2f(0.66, 0.68);
        glVertex2f(.64,.68);

      glEnd();
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(0.642, 0.68, 0.0);
    glutSolidSphere(.016,50,50);
    glPopMatrix();

     glPushMatrix();
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(0,100,0);
    glTranslatef(0.65, 0.69, 0.0);
    glutSolidSphere(.019,50,50);
    glPopMatrix();




}

void dayLight() ////////////////////day (anik)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    display();


}

void nightLight() ////////////////////day (anik)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    display();
    nightMode();
    glFlush();

}

void circle1(GLfloat x, GLfloat y, GLfloat radius) ////////////////(anik)
{
    float angle;
    glBegin(GL_POLYGON);
    for(int i=0;i<100;i++)
	{
        angle = i*2*(M_PI/100);
        glVertex2f(x+(cos(angle)*radius),y+(sin(angle)*radius));
    }
    glEnd();
}


void moon() ///////////////////moon (anik)
{
    glColor3f(1.0,1.0,1.0);
    circle1(0.85,0.89, 0.05);
    glColor3ub(30, 30, 30);
    circle1(0.84,0.9,0.05);

}


void nightMode()//////////-------night mode (anik)
{

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(30,30,30);
    glVertex2f(-1, 0.14);
    glVertex2f(1, .14);
    glVertex2f(1, 1);
    glVertex2f(-1, 1);
    glEnd();
    glPopMatrix();

    ///------------Stars

    glColor3f(1.0,1.0,0.0);
    circle1(-0.7, 0.7, 0.002);
	circle1(-0.8, 0.8, 0.002);
	circle1(-.65, 0.7, 0.002);
	circle1(-0.6, 0.9, 0.002);
	circle1(-0.0, 0.8, 0.002);
	circle1(0.55, 0.6, 0.002);
	circle1(-0.2, 0.65, 0.002);
	circle1(-0.3, 0.8, 0.003);
	circle1(0.4, 0.75, 0.003);
	circle1(0.6, 0.78, 0.002);
	circle1(0.5, 0.8, 0.002);
	circle1(0.65, 0.7, 0.002);
	circle1(0.7, 0.7, 0.002);
	circle1(0.2, 0.8, 0.002);
	circle1(0.35, 0.9, 0.002);
	circle1(0.1, 0.67, 0.002);
	circle1(0.-1, 0.77, 0.002);

	moon(); /////////moon (anik)

	/////////////////////////////////// hill start //////////////////////////////
    glPushMatrix();

      glPushMatrix();/////// 1st hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(34,139,34);
    glTranslatef(-0.86, 0.42, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

     glPushMatrix();/////// 2nd hill
 //glTranslatef(0.0f,-position, 0.0f);
      glColor3ub(34,139,34);
    glTranslatef(-.55, 0.41, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

     glPushMatrix();/////// 3rd hill
 //glTranslatef(0.0f,-position, 0.0f);
      glColor3ub(34,139,34);
    glTranslatef(-.32, 0.409, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

     glPushMatrix();/////// 4th hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(34,139,34);
    glTranslatef(0.044, 0.44, 0.0);
    glutSolidSphere(.33,50,50);
    glPopMatrix();

     glPushMatrix();/////// 5th hill
 //glTranslatef(0.0f,-position, 0.0f);
      glColor3ub(34,139,34);
    glTranslatef(0.084, 0.44, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

     glPushMatrix();/////// 6th hill
 //glTranslatef(0.0f,-position, 0.0f);
      glColor3ub(34,139,34);
    glTranslatef(0.1, 0.42, 0.0);
    glutSolidSphere(.3,50,50);
    glPopMatrix();

    glPushMatrix();/////// 6th hill
 //glTranslatef(0.0f,-position, 0.0f);
    glColor3ub(34,139,34);
    glTranslatef(0.36, 0.36, 0.0);
    glutSolidSphere(.25,50,50);
    glPopMatrix();

     glPushMatrix();/////// 7th hill
 //glTranslatef(0.0f,-position, 0.0f);
     glColor3ub(34,139,34);
    glTranslatef(0.66, 0.36, 0.0);
    glutSolidSphere(.25,50,50);
    glPopMatrix();

     glPushMatrix();/////// 8th hill
 //glTranslatef(0.0f,-position, 0.0f);
   glColor3ub(34,139,34);
    glTranslatef(0.88, 0.36, 0.0);
    glutSolidSphere(.25,50,50);
    glPopMatrix();


    glPopMatrix();

   /////////////////////////// hill end ///////////////////////////

   glPushMatrix(); /////////////////////////////////////////grass 2(sadik)
   glBegin(GL_QUADS);
      glColor3ub(203,92,13);
      glVertex2f(-1.0f, 0.11f);
       glVertex2f(1.0f, 0.11f);
       glVertex2f(1.0f, 0.14f);
       glVertex2f(-1.0f, 0.14f);

   glEnd();
   glPopMatrix();

   glPushMatrix();
    //glTranslatef(0,0.0f, 0.0f);
   glBegin(GL_QUADS); //////////////////////////////////////grass
       glColor3ub(34,139,34);
      glVertex2f(-1.0f, -0.63f);
      glVertex2f(1.0f, -0.63f);
      glVertex2f(1.0f, -0.57f);
      glVertex2f(-1.0f, -0.57f);

   glEnd();
glPopMatrix();

wave();

/// ship & flag in night
glPushMatrix();  /////////////////////////////////////////////// Ship
glTranslatef(-ship,0.0f, 0.0f);
glBegin(GL_POLYGON);//nicheor ongsho
        glColor3f(0,0,0);
        glVertex2f(.4f, -0.99f);
        glVertex2f(.7f, -0.99f);
         glVertex2f(.7f, -0.95f);
         glVertex2f(.4f, -0.95f);

   glEnd();

   glBegin(GL_POLYGON);//pataton
        glColor3f(1,0,0);
        glVertex2f(.3f, -0.8f);
        glVertex2f(.4f, -0.95f);
         glVertex2f(.7f, -0.95f);
         glVertex2f(.8f, -0.8f);
   glEnd();

      glBegin(GL_POLYGON);//Sit
        glColor3f(0,0,1);
         glVertex2f(.4f, -0.8f);
          glVertex2f(.7f, -0.8f);
           glVertex2f(.65f, -0.7f);
           glVertex2f(.45f, -0.7f);
   glEnd();

   glBegin(GL_POLYGON);//janala 1
         glColor3f(0,0,0);
         glVertex2f(.46f, -0.73f);
         glVertex2f(.46f, -0.77f);
         glVertex2f(.48f, -0.77f);
         glVertex2f(.48f, -0.73f);
   glEnd();
   glBegin(GL_POLYGON);//janala 2
         glColor3f(0,0,0);
         glVertex2f(.5f, -0.77f);
         glVertex2f(.52f, -0.77f);
         glVertex2f(.52f, -0.73f);
          glVertex2f(.5f, -0.73f);
   glEnd();

      glBegin(GL_POLYGON);//janala 3
         glColor3f(0,0,0);
         glVertex2f(.54f, -0.77f);
          glVertex2f(.56f, -0.77f);
          glVertex2f(.56f, -0.73f);
           glVertex2f(.54f, -0.73f);
   glEnd();


      glBegin(GL_POLYGON);//janala 4
         glColor3f(0,0,0);
         glVertex2f(.58f, -0.77f);
          glVertex2f(.60f, -0.77f);
          glVertex2f(.60f, -0.73f);
           glVertex2f(.58f, -0.73f);
   glEnd();


      glBegin(GL_POLYGON);//janala 5
         glColor3f(0,0,0);
         glVertex2f(.62f, -0.77f);
          glVertex2f(.64f, -0.77f);
          glVertex2f(.64f, -0.73f);
           glVertex2f(.62f, -0.73f);
   glEnd();

    glBegin(GL_POLYGON);//Flag danda
         glColor3f(0,0,0);
          glVertex2f(.52f, -0.7f);
          glVertex2f(.525f, -0.7f);
          glVertex2f(.525f, -0.61f);
           glVertex2f(.52f, -0.61f);

   glEnd();

   glBegin(GL_POLYGON);//Flag
         glColor3f(0,1,0);
          glVertex2f(.48f, -0.61f);
           glVertex2f(.48f, -0.65f);
           glVertex2f(.52f, -0.65f);
           glVertex2f(.52f, -0.61f);

   glEnd();
   //flag circle
    glTranslatef(.50,-0.63f, 0.0f);
        glColor3f(1,0,0);
        glutSolidSphere(.01,50,50);
    glPopMatrix();

 glPopMatrix();



///=========================================





    buildings(); ///------buildings

    ///-----------1st building windows
glBegin(GL_POLYGON); //Door
    glColor3f(0.9,0.9,0.9);
       glVertex2f(-0.96f, 0.14f);
       glVertex2f(-0.94f, 0.14f);
        glVertex2f(-0.94f, 0.3f);
         glVertex2f(-0.96f, 0.3f);

    glEnd();

glBegin(GL_POLYGON); //Window1
    glColor3ub(255,255,80);

         glVertex2f(-0.98f, 0.5f);
          glVertex2f(-0.97f, 0.5f);
           glVertex2f(-0.97f, 0.48f);
            glVertex2f(-0.98f, 0.48f);


   glEnd();

glBegin(GL_POLYGON); //Window2
   glColor3ub(255,255,80);

         glVertex2f(-0.96f, 0.5f);
          glVertex2f(-0.95f, 0.5f);
           glVertex2f(-0.95f, 0.48f);
            glVertex2f(-0.96f, 0.48f);
   glEnd();

glBegin(GL_POLYGON); //Window3
    glColor3ub(255,255,80);

         glVertex2f(-0.94f, 0.5f);
          glVertex2f(-0.93f, 0.5f);
           glVertex2f(-0.93f, 0.48f);
            glVertex2f(-0.94f, 0.48f);
   glEnd();
glPopMatrix();

glBegin(GL_POLYGON); //Window4
    glColor3ub(255,255,80);

         glVertex2f(-0.92f, 0.5f);
          glVertex2f(-0.91f, 0.5f);
           glVertex2f(-0.91f, 0.48f);
            glVertex2f(-0.92f, 0.48f);
   glEnd();

   glBegin(GL_POLYGON); //Window5
   glColor3ub(255,255,80);

         glVertex2f(-0.98f, 0.46f);
          glVertex2f(-0.97f, 0.46f);
           glVertex2f(-0.97f, 0.44f);
            glVertex2f(-0.98f, 0.44f);


   glEnd();
    glBegin(GL_POLYGON); //Window6
    glColor3ub(255,255,80);

         glVertex2f(-0.96f, 0.46f);
          glVertex2f(-0.95f, 0.46f);
           glVertex2f(-0.95f, 0.44f);
            glVertex2f(-0.96f, 0.44f);
   glEnd();
   glBegin(GL_POLYGON); //Window7
   glColor3ub(255,255,80);

         glVertex2f(-0.94f, 0.46f);
          glVertex2f(-0.93f, 0.46f);
           glVertex2f(-0.93f, 0.44f);
            glVertex2f(-0.94f, 0.44f);
   glEnd();

    glBegin(GL_POLYGON); //Window8
    glColor3ub(255,255,80);

         glVertex2f(-0.92f, 0.46f);
          glVertex2f(-0.91f, 0.46f);
           glVertex2f(-0.91f, 0.44f);
            glVertex2f(-0.92f, 0.44f);
   glEnd();
    glBegin(GL_POLYGON); //Window9
    glColor3ub(255,255,80);

         glVertex2f(-0.98f, 0.42f);
          glVertex2f(-0.97f, 0.42f);
           glVertex2f(-0.97f, 0.40f);
            glVertex2f(-0.98f, 0.40f);


   glEnd();
    glBegin(GL_POLYGON); //Window10
    glColor3ub(255,255,80);

         glVertex2f(-0.96f, 0.42f);
          glVertex2f(-0.95f, 0.42f);
           glVertex2f(-0.95f, 0.40f);
            glVertex2f(-0.96f, 0.40f);
   glEnd();
   glBegin(GL_POLYGON); //Window11
   glColor3ub(255,255,80);

         glVertex2f(-0.94f, 0.42f);
          glVertex2f(-0.93f, 0.42f);
           glVertex2f(-0.93f, 0.40f);
            glVertex2f(-0.94f, 0.40f);
   glEnd();

    glBegin(GL_POLYGON); //Window12
    glColor3ub(255,255,80);

         glVertex2f(-0.92f, 0.42f);
          glVertex2f(-0.91f, 0.42f);
           glVertex2f(-0.91f, 0.40f);
            glVertex2f(-0.92f, 0.40f);
   glEnd();
   ///--------------2nd building windows

   glBegin(GL_POLYGON); /////Door
   glColor3f(0.9,0.9,0.9);
       glVertex2f(-0.85f, 0.14f);
       glVertex2f(-0.83f, 0.14f);
        glVertex2f(-0.83f, 0.3f);
         glVertex2f(-0.85f, 0.3f);

   glEnd();

   glBegin(GL_POLYGON); //Window1
   glColor3ub(255,255,80);

         glVertex2f(-0.87f, 0.5f);
          glVertex2f(-0.86f, 0.5f);
           glVertex2f(-0.86f, 0.48f);
            glVertex2f(-0.87f, 0.48f);


   glEnd();
   glBegin(GL_POLYGON); //Window2
   glColor3ub(255,255,80);

         glVertex2f(-0.85f, 0.5f);
          glVertex2f(-0.84f, 0.5f);
           glVertex2f(-0.84f, 0.48f);
            glVertex2f(-0.85f, 0.48f);
   glEnd();

    glBegin(GL_POLYGON); //Window3
   glColor3ub(255,255,80);

         glVertex2f(-0.83f, 0.5f);
          glVertex2f(-0.82f, 0.5f);
           glVertex2f(-0.82f, 0.48f);
            glVertex2f(-0.83f, 0.48f);
   glEnd();
   glPopMatrix();

     glBegin(GL_POLYGON); //Window4
   glColor3ub(255,255,80);

         glVertex2f(-0.81f, 0.5f);
          glVertex2f(-0.80f, 0.5f);
           glVertex2f(-0.80f, 0.48f);
            glVertex2f(-0.81f, 0.48f);
   glEnd();

   glBegin(GL_POLYGON); //Window5
   glColor3ub(255,255,80);

         glVertex2f(-0.87f, 0.46f);
          glVertex2f(-0.86f, 0.46f);
           glVertex2f(-0.86f, 0.44f);
            glVertex2f(-0.87f, 0.44f);


   glEnd();
     glBegin(GL_POLYGON); //Window6
   glColor3ub(255,255,80);

         glVertex2f(-0.85f, 0.46f);
          glVertex2f(-0.84f, 0.46f);
           glVertex2f(-0.84f, 0.44f);
            glVertex2f(-0.85f, 0.44f);
   glEnd();
   glBegin(GL_POLYGON); //Window7
   glColor3ub(255,255,80);

         glVertex2f(-0.83f, 0.46f);
          glVertex2f(-0.82f, 0.46f);
           glVertex2f(-0.82f, 0.44f);
            glVertex2f(-0.83f, 0.44f);
   glEnd();

     glBegin(GL_POLYGON); //Window8
   glColor3ub(255,255,80);

         glVertex2f(-0.81f, 0.46f);
          glVertex2f(-0.80f, 0.46f);
           glVertex2f(-0.80f, 0.44f);
            glVertex2f(-0.81f, 0.44f);
   glEnd();
    glBegin(GL_POLYGON); //Window9
   glColor3ub(255,255,80);

         glVertex2f(-0.87f, 0.42f);
          glVertex2f(-0.86f, 0.42f);
           glVertex2f(-0.86f, 0.40f);
            glVertex2f(-0.87f, 0.40f);


   glEnd();
    glBegin(GL_POLYGON); //Window10
   glColor3ub(255,255,80);

         glVertex2f(-0.85f, 0.42f);
          glVertex2f(-0.84f, 0.42f);
           glVertex2f(-0.84f, 0.40f);
            glVertex2f(-0.85f, 0.40f);
   glEnd();
   glBegin(GL_POLYGON); //Window11
   glColor3ub(255,255,80);

         glVertex2f(-0.83f, 0.42f);
          glVertex2f(-0.82f, 0.42f);
           glVertex2f(-0.82f, 0.40f);
            glVertex2f(-0.83f, 0.40f);
   glEnd();

     glBegin(GL_POLYGON); //Window12
   glColor3ub(255,255,80);

         glVertex2f(-0.81f, 0.42f);
          glVertex2f(-0.80f, 0.42f);
           glVertex2f(-0.80f, 0.40f);
            glVertex2f(-0.81f, 0.40f);
   glEnd();
   ///--------------3rd building windows

   glBegin(GL_POLYGON);//// Door
   glColor3f(0.9,0.9,0.9);
       glVertex2f(-0.74f, 0.14f);
       glVertex2f(-0.72f, 0.14f);
        glVertex2f(-0.72f, 0.3f);
         glVertex2f(-0.74f, 0.3f);

   glEnd();

    glBegin(GL_POLYGON); //Window1
   glColor3ub(255,255,80);

         glVertex2f(-0.76f, 0.5f);
          glVertex2f(-0.75f, 0.5f);
           glVertex2f(-0.75f, 0.48f);
            glVertex2f(-0.76f, 0.48f);


   glEnd();
   glBegin(GL_POLYGON); //Window2
   glColor3ub(255,255,80);

         glVertex2f(-0.74f, 0.5f);
          glVertex2f(-0.73f, 0.5f);
           glVertex2f(-0.73f, 0.48f);
            glVertex2f(-0.74f, 0.48f);
   glEnd();

    glBegin(GL_POLYGON); //Window3
   glColor3ub(255,255,80);

         glVertex2f(-0.72f, 0.5f);
          glVertex2f(-0.71f, 0.5f);
           glVertex2f(-0.71f, 0.48f);
            glVertex2f(-0.72f, 0.48f);
   glEnd();
   glPopMatrix();

     glBegin(GL_POLYGON); //Window4
   glColor3ub(255,255,80);

         glVertex2f(-0.70f, 0.5f);
          glVertex2f(-0.69f, 0.5f);
           glVertex2f(-0.69f, 0.48f);
            glVertex2f(-0.70f, 0.48f);
   glEnd();

   glBegin(GL_POLYGON); //Window5
   glColor3ub(255,255,80);

         glVertex2f(-0.76f, 0.46f);
          glVertex2f(-0.75f, 0.46f);
           glVertex2f(-0.75f, 0.44f);
            glVertex2f(-0.76f, 0.44f);


   glEnd();
     glBegin(GL_POLYGON); //Window6
   glColor3ub(255,255,80);

         glVertex2f(-0.74f, 0.46f);
          glVertex2f(-0.73f, 0.46f);
           glVertex2f(-0.73f, 0.44f);
            glVertex2f(-0.74f, 0.44f);
   glEnd();
   glBegin(GL_POLYGON); //Window7
   glColor3ub(255,255,80);

         glVertex2f(-0.72f, 0.46f);
          glVertex2f(-0.71f, 0.46f);
           glVertex2f(-0.71f, 0.44f);
            glVertex2f(-0.72f, 0.44f);
   glEnd();

     glBegin(GL_POLYGON); //Window8
   glColor3ub(255,255,80);

         glVertex2f(-0.70f, 0.46f);
          glVertex2f(-0.69f, 0.46f);
           glVertex2f(-0.69f, 0.44f);
            glVertex2f(-0.70f, 0.44f);
   glEnd();
    glBegin(GL_POLYGON); //Window9
   glColor3ub(255,255,80);

         glVertex2f(-0.76f, 0.42f);
          glVertex2f(-0.75f, 0.42f);
           glVertex2f(-0.75f, 0.40f);
            glVertex2f(-0.76f, 0.40f);


   glEnd();
    glBegin(GL_POLYGON); //Window10
   glColor3ub(255,255,80);

         glVertex2f(-0.74f, 0.42f);
          glVertex2f(-0.73f, 0.42f);
           glVertex2f(-0.73f, 0.40f);
            glVertex2f(-0.74f, 0.40f);
   glEnd();
   glBegin(GL_POLYGON); //Window11
   glColor3ub(255,255,80);

         glVertex2f(-0.72f, 0.42f);
          glVertex2f(-0.71f, 0.42f);
           glVertex2f(-0.71f, 0.40f);
            glVertex2f(-0.72f, 0.40f);
   glEnd();

     glBegin(GL_POLYGON); //Window12
   glColor3ub(255,255,80);

         glVertex2f(-0.70f, 0.42f);
          glVertex2f(-0.69f, 0.42f);
           glVertex2f(-0.69f, 0.40f);
            glVertex2f(-0.70f, 0.40f);
   glEnd();

   ///---------hospital windows
   glBegin(GL_QUADS); // left side window1
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.645f, 0.29f);
       glVertex2f(-0.635f, 0.29f);
       glVertex2f(-0.635f, 0.34f);
        glVertex2f(-0.645f, 0.34f);
   glEnd();

    glBegin(GL_QUADS); //left side window2
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.645f, 0.36f);
       glVertex2f(-0.635f, 0.36f);
       glVertex2f(-0.635f, 0.41f);
        glVertex2f(-0.645f, 0.41f);

          glBegin(GL_QUADS); //left side middle window 1 (top)
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.61f, 0.36f);
       glVertex2f(-0.60f, 0.37f);
       glVertex2f(-0.60f, 0.42f);
        glVertex2f(-0.61f, 0.41f);

         glBegin(GL_QUADS); //left side middle window 1 (down)
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.61f, 0.29f);
       glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.60f, 0.35f);
        glVertex2f(-0.61f, 0.34f);
          glBegin(GL_QUADS); //left side middle window 2 (top)
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.595f, 0.37f);
       glVertex2f(-0.585f, 0.38f);
       glVertex2f(-0.585f, 0.43f);
        glVertex2f(-0.595f, 0.42f);

        glBegin(GL_QUADS); //left side middle window 2 (down)
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.595f, 0.30f);
       glVertex2f(-0.585f, 0.31f);
       glVertex2f(-0.585f, 0.36f);
        glVertex2f(-0.595f, 0.35f);

        glBegin(GL_QUADS); // right side window1
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.49f, 0.29f);
       glVertex2f(-0.48f, 0.29f);
       glVertex2f(-0.48f, 0.34f);
        glVertex2f(-0.49f, 0.34f);
   glEnd();


        glBegin(GL_QUADS); // right side middle window 1 (down)
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.53f, 0.30f);
       glVertex2f(-0.52f, 0.29f);
       glVertex2f(-0.52f, 0.34f);
        glVertex2f(-0.53f, 0.35f);
   glEnd();


        glBegin(GL_QUADS); // right side middle window 1 (top)
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.53f, 0.36f);
       glVertex2f(-0.52f, 0.35f);
       glVertex2f(-0.52f, 0.40f);
        glVertex2f(-0.53f, 0.41f);
   glEnd();

       glBegin(GL_QUADS); // right side middle window 2 (down)
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.545f, 0.31f);
       glVertex2f(-0.535f, 0.30f);
       glVertex2f(-0.535f, 0.35f);
        glVertex2f(-0.545f, 0.36f);
   glEnd();

   glBegin(GL_QUADS); // right side middle window 2 (down)
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.545f, 0.37f);
       glVertex2f(-0.535f, 0.36f);
       glVertex2f(-0.535f, 0.41f);
        glVertex2f(-0.545f, 0.42f);
   glEnd();

     glBegin(GL_QUADS); // right side window2
    glColor3ub(255,255,80);
      // glVertex2f(-0.60f, 0.30f);
       glVertex2f(-0.49f, 0.36f);
       glVertex2f(-0.48f, 0.36f);
       glVertex2f(-0.48f, 0.41f);
        glVertex2f(-0.49f, 0.41f);
   glEnd();

   ///------red building windows
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);//////////door

        glVertex2f(0.07f, 0.14f);
         glVertex2f(0.14f, 0.14f);
         glVertex2f(0.14f, 0.28f);
         glVertex2f(0.07f, 0.28f);
    glEnd();

   glBegin(GL_QUADS);
   glColor3ub(255,255,80);//////////windows

        glVertex2f(0.0f, 0.42f);
         glVertex2f(0.03f, 0.42f);
         glVertex2f(0.03f, 0.48f);
         glVertex2f(0.0f, 0.48f);
glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.05f, 0.42f);
         glVertex2f(0.08f, 0.42f);
         glVertex2f(0.08f, 0.48f);
         glVertex2f(0.05f, 0.48f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.1f, 0.42f);
         glVertex2f(0.13f, 0.42f);
         glVertex2f(0.13f, 0.48f);
         glVertex2f(0.1f, 0.48f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.15f, 0.42f);
         glVertex2f(0.18f, 0.42f);
         glVertex2f(0.18f, 0.48f);
         glVertex2f(0.15f, 0.48f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.0f, 0.32f);
         glVertex2f(0.03f, 0.32f);
         glVertex2f(0.03f, 0.38f);
         glVertex2f(0.00f, 0.38f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.05f, 0.32f);
         glVertex2f(0.08f, 0.32f);
         glVertex2f(0.08f, 0.38f);
         glVertex2f(0.05f, 0.38f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.1f, 0.32f);
         glVertex2f(0.13f, 0.32f);
         glVertex2f(0.13f, 0.38f);
         glVertex2f(0.1f, 0.38f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.15f, 0.32f);
         glVertex2f(0.18f, 0.32f);
         glVertex2f(0.18f, 0.38f);
         glVertex2f(0.15f, 0.38f);
    glEnd();
glPopMatrix();

///----------factory windows
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.33f, 0.2f);
         glVertex2f(0.38f, 0.2f);
         glVertex2f(0.38f, 0.27f);
         glVertex2f(0.33f, 0.27f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

        glVertex2f(0.43f, 0.2f);
        glVertex2f(0.48f, 0.2f);
        glVertex2f(0.48f, 0.27f);
        glVertex2f(0.43f, 0.27f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

        glVertex2f(0.53f, 0.2f);
        glVertex2f(0.58f, 0.2f);
        glVertex2f(0.58f, 0.27f);
        glVertex2f(0.53f, 0.27f);
    glEnd();

///---------last building windows

glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////windows

         glVertex2f(0.71f, 0.48f);
         glVertex2f(0.735f, 0.48f);
         glVertex2f(0.735f, 0.55f);
         glVertex2f(0.71f, 0.55f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.71f, 0.3f);
         glVertex2f(0.735f, 0.3f);
         glVertex2f(0.735f, 0.37f);
         glVertex2f(0.71f, 0.37f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.89f, 0.48f);
         glVertex2f(0.865f, 0.48f);
         glVertex2f(0.865f, 0.55f);
         glVertex2f(0.89f, 0.55f);
    glEnd();
glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.89f, 0.3f);
         glVertex2f(0.865f, 0.3f);
         glVertex2f(0.865f, 0.37f);
         glVertex2f(0.89f, 0.37f);
    glEnd();

glBegin(GL_QUADS);
    glColor3ub(255,255,80);//////////

         glVertex2f(0.78f, 0.39f);
         glVertex2f(0.815f, 0.39f);
         glVertex2f(0.815f, 0.48f);
         glVertex2f(0.78f, 0.48f);
    glEnd();

glBegin(GL_QUADS);
    glColor3f(.80,0.80,0.80);//////////door

         glVertex2f(0.78f, 0.14f);
         glVertex2f(0.82f, 0.14f);
         glVertex2f(0.82f, 0.28f);
         glVertex2f(0.78f, 0.28f);
    glEnd();

///------windows and doors end---------

///--------cloud-------
         ////////////////Cloud 1
glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
    glColor3ub(211,211,211);
    glTranslatef(-0.9, 0.9, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();

         ////////////////Cloud 2
glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
    glColor3ub(211,211,211);
    glTranslatef(-0.8, 0.9, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();

      ////////////////Cloud 3
glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
    glColor3ub(211,211,211);
    glTranslatef(-0.9, 0.8, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();

     ////////////////Cloud 4
glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
    glColor3ub(211,211,211);
    glTranslatef(-0.8, 0.8, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();

     ////////////////Cloud 5
glPushMatrix();
    glTranslatef(cloud,0.0f, 0.0f);
    glColor3ub(211,211,211);
    glTranslatef(-0.85, 0.85, 0.0);
    glutSolidSphere(.05,50,50);
    glPopMatrix();


   glFlush();

}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1200, 600);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("City");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
//   glutMouseFunc(handleMouse);
   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
