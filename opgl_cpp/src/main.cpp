#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main(){
	
	std::cout <<"test "<< std::endl;
	return 0;

	if (!glfwInit()){

		std::cout <<"ok "<< std::endl;

	};
	
	glfwTerminate();
}