#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
:
	_amount(0)
{
	for (int i = 0; i < 4; i++)
		this->_sources[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
:
	_amount(0)
{
	for (int i = 0; i < copy._amount; i++)
		this->learnMateria(copy._sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_sources[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->_amount; i++)
		delete this->_sources[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &op)
{
	for (int i = 0; i < this->_amount; i++)
		delete this->_sources[i];
	this->_amount = 0;
	for (int i = 0; i < op._amount; i++)
		this->learnMateria(op._sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->_sources[i] = nullptr;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->_amount  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->_amount; i++)
		if (this->_sources[i] == m)
			return ;
	this->_sources[this->_amount++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_amount; i++)
		if (this->_sources[i]->getType() == type)
			return (this->_sources[i]->clone());
	return (nullptr);
}