#include "Aluno.h"

#include<iostream>
#include<string>


void Aluno::RealizarProva()
{
	std::cout << "Prova Realizada!\n";
}


std::string Aluno::GetCurso()
{
	return Curso;
}

void Aluno::SetCurso(std::string CursoAluno)
{
	Curso = CursoAluno;
}
