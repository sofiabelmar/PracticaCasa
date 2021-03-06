// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"



using namespace std;

void dibujarDestellos() {

	glLineWidth(3);

	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.8f, 0.6f, 0.0f);
	glVertex3f(-0.8f, 0.5f, 0.0f);

	glVertex3f(-0.7f, 0.63f, 0.0f);
	glVertex3f(-0.65f, 0.55f, 0.0f);

	glVertex3f(-0.6f, 0.7f, 0.0f);
	glVertex3f(-0.53f, 0.65f, 0.0f);

	glVertex3f(-0.6f, 0.8f, 0.0f);
	glVertex3f(-0.5f, 0.8f, 0.0f);

	glVertex3f(-0.6f, 0.9f, 0.0f);
	glVertex3f(-0.5f, 0.95f, 0.0f);

	glEnd();
}

void dibujarRayasNegras() {
	
	glLineWidth(3);
	
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex3f(0.2f,- 0.8f, 0.0f);
	glVertex3f(0.1f,- 0.9f, 0.0f);
	glVertex3f(0.0f,- 0.8f, 0.0f);


	glEnd();


	glLineWidth(3);

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);

	glVertex3f(-0.2f, -0.8f, 0.0f);
	glVertex3f(-0.3f, -0.9f, 0.0f);
	glVertex3f(-0.4f, -0.8f, 0.0f);


	glEnd();
}

void dibujarNubes() {

	//nube 1
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) - .2, (0.1 * sin(i * 3.14159 / 180.0)) +.7, 0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.15 * cos(i * 3.14159 / 180.0)) - .1, (0.08 * sin(i * 3.14159 / 180.0)) + .8, 0.0f);
	}
	glEnd();

	//nube 2
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) +0.4, (0.1 * sin(i * 3.14159 / 180.0)) + .8, 0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.15 * cos(i * 3.14159 / 180.0)) + .5, (0.08 * sin(i * 3.14159 / 180.0)) + .9, 0.0f);
	}
	glEnd();

	//nube 3
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) + 0.7, (0.1 * sin(i * 3.14159 / 180.0)) + .5, 0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.15 * cos(i * 3.14159 / 180.0)) + .8, (0.08 * sin(i * 3.14159 / 180.0)) + .6, 0.0f);
	}
	glEnd();

}

void dibujarArbol() {

	glBegin(GL_POLYGON);

	glColor3f(0.9f, 0.7f, 0.5f);

	glVertex3f(-0.8f, -0.8f, 0.0f);
	glVertex3f(-0.6f, -0.8f, 0.0f);
	glVertex3f(-0.6f, -0.2f, 0.0f);
	glVertex3f(-0.8f, -0.2f, 0.0f);
	//haa
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) - .7, (0.2 * sin(i * 3.14159 / 180.0)) -.1, 0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) - .65, (0.2 * sin(i * 3.14159 / 180.0)) + .05, 0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 1.0f, 0.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.2 * cos(i * 3.14159 / 180.0)) - .7, (0.2 * sin(i * 3.14159 / 180.0)) +.25, 0.0f);
	}
	glEnd();



}

void dibujarSol() {
	
	

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	for (double i = 0; i < 360.0; i += 5.0) {
		
		glVertex3f((0.15 * cos(i * 3.14159 / 180.0)) -.8, (0.15 * sin(i * 3.14159 / 180.0)) + .8,0.0f);
	}
	glEnd();
}

void dibujarCasa() {


	//pared
	glBegin(GL_POLYGON);

	glColor3f(0.9f, 0.7f, 0.5f);

	glVertex3f(-0.4f, 0.3f, 0.0f);
	glVertex3f(0.6f, 0.3f, 0.0f);
	glVertex3f(-0.4f, -0.7f, 0.0f);
	glVertex3f(0.6f, -0.7f, 0.0f);
	glVertex3f(0.6f, 0.3f, 0.0f);

	glEnd();

	//techo
	glBegin(GL_TRIANGLES);

	glColor3f(0.7f, 0.3f, 0.2f);

	glVertex3f(-0.6f, 0.2f, 0.0f);
	glVertex3f(0.8f, 0.2f, 0.0f);
	glVertex3f(0.1f, 0.6f, 0.0f);


	glEnd();

	//puerta

	glBegin(GL_POLYGON);

	glColor3f(0.9f, 0.9f, 0.9f);

	glVertex3f(-0.1f, -0.2f, 0.0f);
	glVertex3f(0.3f, -0.2f, 0.0f);
	glVertex3f(-0.1f, -0.7f, 0.0f);
	glVertex3f(0.3f, -0.7f, 0.0f);
	glVertex3f(0.3f, -0.2f, 0.0f);

	glEnd();
	
	//perilla
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	for (double i = 0; i < 360.0; i += 5.0) {

		glVertex3f((0.04 * cos(i * 3.14159 / 180.0)) + 0.2, (0.04 * sin(i * 3.14159 / 180.0)) - 0.45 , 0.0f);
	}
	glEnd();

	glBegin(GL_POLYGON);
	//ventana
	glColor3f(0.3f, 0.0f, 0.1f);

	glVertex3f(0.5f, 0.1f, 0.0f);
	glVertex3f(0.3f, 0.1f, 0.0f);
	glVertex3f(0.5f, -0.1f, 0.0f);
	glVertex3f(0.3f, -0.1f, 0.0f);
	glVertex3f(0.3f, 0.1f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);
	//ventana azul
	glColor3f(0.2f, 1.0f, 1.0f);

	glVertex3f(0.48f, 0.08f, 0.0f);
	glVertex3f(0.32f, 0.08f, 0.0f);
	glVertex3f(0.48f, -0.08f, 0.0f);
	glVertex3f(0.32f, -0.08f, 0.0f);
	glVertex3f(0.32f, 0.08f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);
	//ventana marco vertical
	glColor3f(0.3f, 0.0f, 0.1f);

	glVertex3f(0.39f, 0.1f, 0.0f);
	glVertex3f(0.41f, 0.1f, 0.0f);
	glVertex3f(0.39f, -0.1f, 0.0f);
	glVertex3f(0.41f, -0.1f, 0.0f);
	glVertex3f(0.41f, 0.1f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);
	//ventana marco horizontal
	glColor3f(0.3f, 0.0f, 0.1f);

	glVertex3f(0.5f, 0.01f, 0.0f);
	glVertex3f(0.3f, 0.01f, 0.0f);
	glVertex3f(0.3f, -0.01f, 0.0f);
	glVertex3f(0.5f, -0.01f, 0.0f);
	glVertex3f(0.5f, 0.01f, 0.0f);

	glEnd();
}

void dibujarCesped() {

	glBegin(GL_POLYGON);

	glColor3f(0.6f, 1.0f, 0.5f);

	glVertex3f(-1.0f, -0.7f, 0.0f);
	glVertex3f(1.0f, -0.7f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -0.7f, 0.0f);


	glEnd();
}

void dibujarTrianguloContinuo() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0f, 1.0f, 1.0f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.1f, 0.1f, 0.0f);
	glVertex3f(0.2f, 0.0f, 0.0f);

	glColor3f(0.3f, 0.7f, 1.0f);
	glVertex3f(0.2f, 0.15f, 0.0f);


	glEnd();
}

void dibujarLineaContinua() {
	glBegin(GL_LINE_STRIP);
	glColor3f(0.1f,0.3f,0.75f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.2f, 0.0f);

	glVertex3f(0.2f, 0.0f, 0.0f);

	glVertex3f(0.2f, 0.4f, 0.0f);

	glEnd();
}

void dibujarLineas() {
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.4f, 0.6f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, -0.4f, 0.0f);

	glVertex3f(-0.3f, 0.1f, 0.0f);
	glVertex3f(-0.3f, 0.4f, 0.0f);

	glEnd();
}

void dibujarTriangulos(){
		// establecems tipo de primitiva
	glBegin(GL_TRIANGLES);
	//establecemos el color
	glColor3f(0.3f, 0.7f, 1.0f);
	//enviar vértices
	glVertex3f(0.0f, 0.7f, 0.0f);
	glColor3f(0.7f, 0.1f, 7.0f);
	glVertex3f(-0.7f, -0.7f, 0.0f);
	glColor3f(1.0f, 0.1f, 7.0f);
	glVertex3f(0.7f, -0.7f, 0.0f);

	glColor3f(0.0f, 0.7f, 0.8f);
	glVertex3f(-0.8f, 0.8f, 0.0f);
	glVertex3f(-0.3f, 0.3f, 0.0f);
	glVertex3f(-0.8f, 0.3f, 0.0f);

	glVertex3f(-0.3f, 0.8f, 0.0f);
	glVertex3f(-0.3f, 0.3f, 0.0f);
	glVertex3f(-0.8f, 0.8f, 0.0f);

	//Especificar que dejaremos de dibujar
	glEnd();
}

//la rutina del dibujo
void dibujar() {
	
	dibujarCasa();
	dibujarCesped();
	dibujarSol();
	dibujarArbol();
	dibujarNubes();
	dibujarRayasNegras();
	dibujarDestellos();
}

int main()
{
   //Declarar una vetana
	GLFWwindow* window;
	
	//si no se pudo inicializar glfw terminamos la ejecución

	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}

	//Si se pudo inicial glfw, se inicia la ventana

	window = glfwCreateWindow(600,600, "ventana",NULL, NULL);

	// si no se pudo crear la ventana, terminamos la ejecución

	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido el contexto, se activan las funciones modernas (gpu)
	glewExperimental = true;

	//Imprimir posibles errores

	GLenum errores = glewInit();
	if (errores != GLEW_OK)
	{
		glewGetErrorString(errores);
	}

	const GLubyte* versionGL = glGetString(GL_VERSION);
	cout << "Version openGL" << versionGL;

	//ciclo de dibujo (Draw loop)

	while (!glfwWindowShouldClose(window))
	{
		//establecer la región de dibujo
		glViewport(0, 0, 600, 600);
		//establecemos el color de borrado, valores rgba, van de 0 a 1
		glClearColor(.6,1,1,1);
		//Borrar!  Con el borrar solo se hace el swap der buffer
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		
		//Actualizar valores y dibujar
		dibujar();
		//pa poder usar el mouse
		glfwPollEvents();
		 
		glfwSwapBuffers(window);
	}

	//Despues del ciclo de dibujo eliminamos ventana y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();

}


