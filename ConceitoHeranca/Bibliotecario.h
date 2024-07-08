#pragma once
#include "Pessoa.h"

class Bibliotecario : public Pessoa
{
	void CadastrarLivros();

	/*CONSTRUTOR*/

public : 
	Bibliotecario(){}
	Bibliotecario(std::string NovoNomeB, int NovoCpfB, int MatriculaB);
					

};

