#include "Professo.h"

#include <iostream>
#include "Professor.h"

void Professor::EntregarPauta()
{
	std::cout << "Pauta entregue!\n";
}

void Professor::MostrarDadosDoProfessor()
{
	std::cout << "*****DADOS DO PROFESSOR*****\n";
	std::cout << "Departamento " << GetDepartamento << '\n';


}

std::string Professor::GetDepartamento()
{
	return Departamento;
}

void Professor::SetDepartamento(std::string DepartamentoProfessor)
{
	Departamento = DepartamentoProfessor;
}

void Professor::EfetuarChamada()
{
	std::cout << "Chamada Efetuada!\n";
}

