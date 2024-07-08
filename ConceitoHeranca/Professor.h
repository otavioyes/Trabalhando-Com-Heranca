#pragma once
#include "Pessoa.h"



class Professor : public Pessoa
{
private: 
	std::string Departamento;

	
	std::string GetDepartamento();

	void SetDepartamento(std::string DepartamentoProfessor);


	void EfetuarChamada();
	void EntregarPauta();
	void MostrarDadosDoProfessor();


	/*CONSTRUTOR*/
public : 
	Professor(){}
	Professor(std::string NovoNomeP, int NovoCpfP, int MatriculaP, std::string DepartamentoP);

};

