/////////////////////////////////////////////////
// 		 	    	EXAMEN PARCIAL			   //
//  Grecia Guadalupe Escobar García - EG14001  //
//                                             //
//  Logotipos hechos con primitivas de opengl  //
/////////////////////////////////////////////////

#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

 
void display()
{   
             
    glClear(GL_COLOR_BUFFER_BIT); //Limpiamos el Buffer
         
	float angulo;
	float i;
	glPointSize(9); //Tamaño de los puntos
	glBegin(GL_POINTS); //Circulo grueso
	glColor3f(0,0,0); //color de las lineas de la recta    
	for (i=0; i<=360; i+=1)
	{
			
		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes
			
		glVertex2f(4*cos(angulo),4*sin(angulo)); //Circunferencia 1
		glVertex2f(3.9*cos(angulo),3.9*sin(angulo)); //Circunferencia 1
		glVertex2f(3.8*cos(angulo),3.8*sin(angulo)); //Circunferencia 1
	}
	
	glEnd();
	
	
	glBegin(GL_POINTS); //Circulo grueso
	glColor3f(0,0,0); //color de las lineas de la recta 
	for (i=80; i<=100; i+=1)
	{
			
		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes
			
		glVertex2f(4*cos(angulo),-1+4*sin(angulo)); //Circunferencia 1
		
	}
	  
	glEnd();
  
    
    glBegin(GL_POINTS); //Circulo grueso
	glColor3f(0,0,0); //color de las lineas de la recta 
	for (i=260; i<=280; i+=1)
	{
			
		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes
			
		glVertex2f(4*cos(angulo),1+4*sin(angulo)); //Circunferencia 1
		
	}
	  
	glEnd();
    
    
    glBegin(GL_POINTS); //Circulo grueso
	glColor3f(0,0,0); //color de las lineas de la recta 
	for (i=120; i<=140; i+=1)
	{
			
		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes
			
		glVertex2f(3*cos(angulo),3*sin(angulo)); //Circunferencia 1
		
	}
	  
	glEnd();
    
   
     glBegin(GL_POINTS); //Circulo grueso
	glColor3f(0,0,0); //color de las lineas de la recta 
	for (i=40; i<=60; i+=1)
	{
			
		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes
			
		glVertex2f(3*cos(angulo),3*sin(angulo)); //Circunferencia 1
		
	}
	  
	glEnd();
    
	  glBegin(GL_POINTS); //Circulo grueso
	glColor3f(0,0,0); //color de las lineas de la recta 
	for (i=160; i<=240; i+=1)
	{
			
		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes
			
		glVertex2f(3*cos(angulo),3*sin(angulo)); //Circunferencia 1
		
	}
	  for (i=166; i<=230; i+=1)
	{
			
		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes
			
		glVertex2f(2.9*cos(angulo),2.9*sin(angulo)); //Circunferencia 1
		
	}
	glEnd();

    
    
    	  glBegin(GL_POINTS); //Circulo grueso
	glColor3f(0,0,0); //color de las lineas de la recta 
	for (i=300; i<=380; i+=1)
	{
			
		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes
			
		glVertex2f(3*cos(angulo),3*sin(angulo)); //Circunferencia 1
		
	}
	  	for (i=305; i<=370; i+=1)
	{
			
		angulo = (i*M_PI)/180.0f; //Convirtiendo grados a radianes
			
		glVertex2f(2.9*cos(angulo),2.9*sin(angulo)); //Circunferencia 1
		
	}
	glEnd();

	
	glBegin(GL_POLYGON);
	glColor3f(0,0,0); //color de las lineas de la recta 
	glPointSize(2);
	
	 glVertex2f(0.0, 1.3);//
	  glVertex2f(-0.8, 2.95);//
	 glVertex2f(0.8, 2.95);//
       
       
    glEnd();
 
    glBegin(GL_POLYGON);
	glColor3f(0,0,0); //color de las lineas de la recta 
	glPointSize(2);
	
	 glVertex2f(0.0, -1.3);//
	  glVertex2f(-0.8, -2.95);//
	 glVertex2f(0.8, -2.95);//
       
       
    glEnd();
   
       
       
    glBegin(GL_POLYGON);
	glColor3f(0,0,0); //color de las lineas de la recta  
    
     glVertex2f(0.8, 0.05); 
    glVertex2f(-0.8, 0.05);    
     glVertex2f(-0.8, -0.07); 
     glVertex2f(0.8, -0.07); 
   
       
    glEnd();
   
    glBegin(GL_POLYGON);
	glColor3f(0,0,0); //color de las lineas de la recta  
    

    glVertex2f(-0.15, 0);    
     glVertex2f(-0.9, -1.2); 
      glVertex2f(-2.39, 1.85 );
       glVertex2f(-1.4, 2.7 );
          
    glEnd();
   
       glBegin(GL_POLYGON);
	glColor3f(0,0,0); //color de las lineas de la recta  
    

    glVertex2f(0.15, 0);    
     glVertex2f(0.9, -1.2); 
      glVertex2f(2.39, 1.85 );
       glVertex2f(1.4, 2.7 );
          
    glEnd();
   
       
      glBegin(GL_POLYGON);
	glColor3f(0,0,0); //color de las lineas de la recta  
    

    glVertex2f(-2.9, 1); 
    glVertex2f(-2.8, -1.3);   
    glVertex2f(-2.9, -1);    
    glVertex2f(-1.4, -2.75); 
    glVertex2f(-2.8, 1.2 );
    glVertex2f(-2.5, -1.9);
    glVertex2f(-2.5, -2.1);
          
    glEnd();
    
       
     glBegin(GL_POLYGON);
	glColor3f(0,0,0); //color de las lineas de la recta  
    

    glVertex2f(2.9, 1); 
    glVertex2f(2.8, -1.3);   
    glVertex2f(2.9, -1);    
    glVertex2f(1.4, -2.75); 
    glVertex2f(2.8, 1.2 );
    glVertex2f(2.5, -1.9);
    glVertex2f(2.5, -2.1);
          
    glEnd();    
       
        ///////////////////////PLANO CARTESIANO////////////////
    glBegin(GL_LINES); //Primitiva-lineas
    glColor3f(0.5, 1.0, 0.0); //color de las lineas de la recta
 //  glVertex2f(0.0, -8.0);//
   // glVertex2f(0.0, 8.0); //// Puntos de
  //  glVertex2f(8.0, 0.0); //// la recta
   // glVertex2f(-8.0, 0.0);//
       glEnd();
       glFlush();
}

 
void init (void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION); // matriz de proyección
    glLoadIdentity(); //Inicializa la matriz a utilizar
    glOrtho(-8.0, 8.0, -8, 8, -1.0, 1.0); // vista ortogonal
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv); //se usa para iniciar la libreeria GLUT
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); //establece el modo de visualizacion inicial
    glutInitWindowSize (900, 900); //Dimensiones de la vantana
    glutInitWindowPosition (250, 100); //Posición inicial de la ventana
    glutCreateWindow ("Wolskwagen");
	glutDisplayFunc(display);

	init();
	glutMainLoop();
	return 0;
}
