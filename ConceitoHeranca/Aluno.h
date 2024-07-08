#pragma once
#include "Pessoa.h"


class Aluno : public Pessoa
{
private :
	std::string Curso;


	std::string GetCurso();

	void SetCurso(std::string CursoAluno);


	void RealizarProva();

	/*CONSTRUTOR*/

public : 
	Aluno(){}
	Aluno(std::string NovoNomeA, int NovoCpfA, int MatriculaA, std::string CursoA);
};

