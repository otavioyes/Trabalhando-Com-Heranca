#pragma once

#include<iostream>
#include<string>

class Pessoa
{
private : 
	std::string Nome;
	int CPF;
	int Matricula;

	std::string GetNome();
	int GetCPF();
	int GetMatricula();

	void SetNome(std::string NomePessoa);
	void SetCPF(int CpfPessoa);
	void SetMatricula(int MatriculaPessoa);
	

	void AcessarSistema();
	void MostrarDados();






	/*Aqui o construtor é padrão, mas ele pode inicializar com os valores padrão dos atributos*/
	//Pessoa() : Nome(""), CPF(0), Matricula(0);
	/*CONSTRUTOR COM PARAMETROS*/
	Public : 
	Pessoa(); {};
	Pessoa(std::string NomeDaPessoa, int CpfDaPessoa, int MatriculaDaPessoa)
	{
		Nome = NomeDaPessoa;
		CPF = CpfDaPessoa;
		Matricula = MatriculaDaPessoa;
	}

};

