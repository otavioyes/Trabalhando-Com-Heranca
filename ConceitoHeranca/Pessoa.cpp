#include "Pessoa.h"

std::string Pessoa::GetNome()
{
	return Nome;
}

int Pessoa::GetCPF()
{
	return CPF;
}

int Pessoa::GetMatricula()
{
	return Matricula;
}



void Pessoa::SetNome(std::string NomePessoa)
{
	Nome = NomePessoa;
}

void Pessoa::SetCPF(int CpfPessoa)
{
	CPF = CpfPessoa;
}

void Pessoa::SetMatricula(int MatriculaPessoa)
{
	Matricula = MatriculaPessoa;
}

void Pessoa::AcessarSistema()
{
	std::cout << "*****Acesso ao sistema concedido!*****";
}

void Pessoa::MostrarDados()
{
	std::cout << "*****DADOS*****\n\n";
	std::cout << "NOME: " << GetNome() << "\n";
	std::cout << "CPF: " << GetCPF() << "\n";
	std::cout << "MATRICULA: " << GetMatricula() << "\n";

}
