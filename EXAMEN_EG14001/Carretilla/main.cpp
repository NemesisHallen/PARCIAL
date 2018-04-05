/////////////////////////////////////////////////
// 		 	   	       EXAMEN PARCIAL      		 	   //
//  Grecia Guadalupe Escobar García - EG14001  //
//                                             //
//      Carretilla con primitivas de opengl    //
/////////////////////////////////////////////////

#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

 //Definimos variable
 
GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 1.0f;
 


void display()
{

    //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 
   
    glTranslatef(X, Y, Z); 	// Transladar en los 3 ejes
    // Otras transformaciones
    glScalef(scale, scale, scale);

    
    glLineWidth(6); //Tamaño de los puntos
    glBegin(GL_LINE_STRIP); //Primitiva-lineas
    glColor3f(0,0,0); //color de las lineas de la recta


     glVertex2f(-3,2);
      glVertex2f(-2.2,2);
       glVertex2f(-1,-2);
	 glVertex2f(2,-2);
	glVertex2f(3,1.3);

     glEnd();


       glBegin(GL_LINES); //Primitiva-lineas
    glColor3f(0,0,0); //color de las lineas de la recta


     glVertex2f(3,1.3);
     glVertex2f(-2,1.3);

     glVertex2f(-1.6,0);
     glVertex2f(2.6 ,0);

    glVertex2f(-1.3,-1);
     glVertex2f(2.3 ,-1);

     glVertex2f(-1,-2);
	 glVertex2f(-1.2,-2.4);


	  glVertex2f(-1.1,-2.7);
	 glVertex2f(2.2,-2.7);

     glEnd();
     glFlush;


	float angulo;
	float i;
	glLineWidth(6); //Tamaño de los puntos
	glBegin(GL_LINE_STRIP); //Circulo grueso
	for (i=0; i<=360; i+=1)
	{

		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes

		glVertex2f(-1.35+0.3*cos(angulo),-2.7+0.3*sin(angulo)); //Circunferencia 1

	}
	glEnd();
	glFlush;

	glLineWidth(6); //Tamaño de los puntos
	glBegin(GL_LINE_STRIP); //Circulo grueso
	for (i=0; i<=360; i+=1)
	{

		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes

		glVertex2f(2.5+0.3*cos(angulo),-2.7+0.3*sin(angulo)); //Circunferencia 1

	}
	glEnd();
	glFlush;





        ///////////////////////PLANO CARTESIANO////////////////
    glBegin(GL_LINES); //Primitiva-lineas
    glColor3f(0, 0, 0); //color de las lineas de la recta
    //glVertex2f(0.0, -8.0);//
    //glVertex2f(0.0, 8.0); //// Puntos de
    //glVertex2f(8.0, 0.0); //// la recta
    //glVertex2f(-8.0, 0.0);//
       glEnd();
       glFlush();

        glutSwapBuffers();
}


void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
 
        break;
    case 'c' :
        X += 0.1f;
        break;
    case 'x' :
        X -= 0.1f;
        break;
    case 'q':
        exit(0);			// exit
    }
    glutPostRedisplay();
}
 
 

// Función para controlar teclas especiales
void init (void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(1, 1, 1);
    glMatrixMode(GL_PROJECTION); // matriz de proyección
    glLoadIdentity(); //Inicializa la matriz a utilizar
    glOrtho(-10.0, 10.0, -10, 10, -1.0, 1.0); // vista ortogonal
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv); //se usa para iniciar la libreeria GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
     glutInitWindowSize (900, 700); //Dimensiones de la vantana
    glutInitWindowPosition (250, 100); //Posición inicial de la ventana
    glutCreateWindow ("Carretilla");

    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    // Regresar al sistema operativo

	init();
	glutMainLoop();
	return 0;
}
