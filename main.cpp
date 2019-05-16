#include<windows.h>
#include <GL/glut.h>
#include<stdio.h>
int x1=10,y1=50,x2=40,y2=80;
int a1=300,b1=0,a2=350,b2=200;
int c1=500,d1=0,c2=550,d2=250;
int e1=700,f1=0,e2=750,f2=100;
int g1=900,h1=0,g2=950,h2=150;
int k1=1100,m1=0,k2=1150,m2=200;
//#include <math.h>
//#define PI 3.1415926535898
//GLint circle_points =100;

int m = 2, n=2,p=20, flag=0;
void myInit (void)

{

     glClearColor(0.0,0.0,0.0,0.0); // sets background color to white

     // sets a point to be 4x4 pixels

     glMatrixMode(GL_PROJECTION);

     glLoadIdentity();
   //  gluPerspective(45.0,(double)500/(double)400,1.0,200.0);

     gluOrtho2D(0.0, 500.0, 0.0, 400.0); // the display area in world coordinates.

}

void initRendering()

{

glEnable(GL_DEPTH_TEST);

}



void myDisplay(void)

{

     glClear(GL_COLOR_BUFFER_BIT); // clears the screen


     glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);


 glBegin(GL_POLYGON);

          glVertex2i (x1, y1);
          glVertex2i (x2, y1);

          glVertex2i (x2, y1);
          glVertex2i (x2, y2);


          glVertex2i (x2, y2);
          glVertex2i (x1, y2);


          glVertex2i (x1, y2);
          glVertex2i (x1, y1);





     glEnd();


    glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);


 glBegin(GL_POLYGON);

          glVertex2i (a1, b1);
          glVertex2i (a2, b1);

          glVertex2i (a2, b1);
          glVertex2i (a2, b2);


          glVertex2i (a2, b2);
          glVertex2i (a1, b2);


          glVertex2i (a1, b2);
          glVertex2i (a1, b1);





     glEnd();
     glBegin(GL_POLYGON);

          glVertex2i (c1, d1);
          glVertex2i (c2, d1);

          glVertex2i (c2, d1);
          glVertex2i (c2, d2);


          glVertex2i (c2, d2);
          glVertex2i (c1, d2);


          glVertex2i (c1, d2);
          glVertex2i (c1, d1);




     glEnd();
      glBegin(GL_POLYGON);

          glVertex2i (e1, f1);
          glVertex2i (e2, f1);

          glVertex2i (e2, f1);
          glVertex2i (e2, f2);


          glVertex2i (e2, f2);
          glVertex2i (e1, f2);


          glVertex2i (e1, f2);
          glVertex2i (e1, f1);




     glEnd();

      glBegin(GL_POLYGON);

          glVertex2i (k1, m1);
          glVertex2i (k2, m1);

          glVertex2i (k2, m1);
          glVertex2i (k2, m2);


          glVertex2i (k2, m2);
          glVertex2i (k1, m2);


          glVertex2i (k1, m2);
          glVertex2i (k1, m1);




     glEnd();
     glBegin(GL_POLYGON);

          glVertex2i (g1, h1);
          glVertex2i (g2, h1);

          glVertex2i (g2, h1);
          glVertex2i (g2, h2);


          glVertex2i (g2, h2);
          glVertex2i (g1, h2);


          glVertex2i (g1, h2);
          glVertex2i (g1, h1);


   glEnd();


   //hit up
   if(y1==b2)
   {
       if(x1>=a1 && x1<=a2 || x2>=a1 && x2<=a2)
       {
           m=0;
           n=0;
           flag=1;
       }
   }
   if(y1==d2)
   {
       if(x1>=c1 && x1<=c2 || x2>=c1 && x2<=c2)
       {
           m=0;
           n=0;
           flag=1;
           p=0;
       }
   }
   if(y1==f2)
   {
       if(x1>=e1 && x1<=e2 || x2>=e1 && x2<=e2)
       {
           m=0;
           n=0;
           flag=1;
           p=0;
       }
   }
   if(y1==h2)
   {
       if(x1>=g1 && x1<=g2 || x2>=g1 && x2<=g2)
       {
           m=0;
           n=0;
           flag=1;
           p=0;
       }
   }
   if(y1==m2)
   {
       if(x1>=k1 && x1<=k2 || x2>=k1 && x2<=k2)
       {
           m=0;
           n=0;
           flag=1;
           p=0;
       }
   }

   //hit on left
        if(x2==a1)
        {
            if(y1>=b1 && y1<=b2 || y2>=b1 && y2<=b2)
            {
                m=0;
                n=0;
                flag=1;
                p=0;
            }
        }
        if(x2==c1)
        {
            if(y1>=d1 && y1<=d2 || y2>=d1 && y2<=d2)
            {
                m=0;
                n=0;
                flag=1;
                p=0;
            }
        }
        if(x2==e1)
        {
            if(y1>=f1 && y1<=f2 || y2>=f1 && y2<=f2)
            {
                m=0;
                n=0;
                flag=1;
                p=0;
            }
        }
        if(x2==g1)
        {
            if(y1>=h1 && y1<=h2 || y2>=h1 && y2<=h2)
            {
                m=0;
                n=0;
                flag=1;
                p=0;
            }
        }
        if(x2==k1)
        {
            if(y1>=m1 && y1<=m2 || y2>=m1 && y2<=m2)
            {
                m=0;
                n=0;
                flag=1;
                p=0;
            }
        }

        if(a1==-300)
        {
            a1=700;
            a2=750;
        }
        if(c1==-300)
        {
            c1=700;
            c2=750;
        }
        if(e1==-300)
        {
            e1=700;
            e2=750;
        }
        if(g1==-300)
        {
            g1=700;
            g2=750;
        }
        if(k1==-300)
        {
            k1=700;
            k2=750;
        }



    a1=a1-m;
    a2=a2-m;

    c1=c1-m;
    c2=c2-m;

    e1=e1-m;
    e2=e2-m;

    g1=g1-m;
    g2=g2-m;

    k1=k1-m;
    k2=k2-m;


        y1=y1-n;
        y2=y2-n;

    if(y1==0)
    {
        m=0;

        flag=1;
    }
    if(y2>=400)
    {
        m=0;
        n=0;
    }


     glFlush(); // sends all output to display;
//glutPostRedisplay();

}
void update(int value)

{


glutPostRedisplay();

glutTimerFunc(25,update,0);

}
void Keypress(unsigned char key, int x, int y)

{
	if (key ==' ')
	{
        y1=y1+p;
        y2=y2+p;
	}
}

void myMouseFunc(int button, int state, int x, int y)
{
	/*if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
	       x1=x1-5;
		x2=x2+5;

		//printf("%d %d\n", x1,x2);
	}
	else if(button == GLUT_RIGHT_BUTTON && state == GLUT_UP) {
            x1=x1+5;
		x2=x2-5;


	}*/
}

int main (int argc, char **argv)
{

     glutInit (&argc, argv); // to initialize the toolkit;

     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // sets the display mode

     glutInitWindowSize (640, 480); // sets the window size

     glutInitWindowPosition (10, 10); // sets the starting position for the window

     initRendering();

     glutCreateWindow ("My first OpenGL program!"); // creates the window and sets the title

     glutDisplayFunc (myDisplay);

     glutKeyboardFunc(Keypress);
     glutMouseFunc(myMouseFunc);

     myInit(); // additional initializations as necessary
     glutTimerFunc(25,update,0);

     glutMainLoop(); // go into a loop until event occurs
     return 0;
}
