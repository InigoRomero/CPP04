# include "Squad.hpp"

Squad::Squad()
:
    _units_count(0),
	_units_list(nullptr)
{}

Squad::Squad(const Squad& copy)
:
    _units_count(0), 
    _units_list(nullptr)
{
	this->_units_count = 0;
	for (int i = 0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i)->clone());
}

Squad::~Squad() 
{
	if (this->_units_list)
	{
		for (int i = 0; i < this->_units_count; i++)
			delete this->_units_list[i];
		delete this->_units_list;
	}
}

Squad & Squad::operator=(const Squad& op)
{
    if (this == &op)
        return (*this);
    this->_units_list = op._units_list;
    this->_units_count = op._units_count;
    return (*this);
}

int                 Squad::getCount() const { return (_units_count); }

ISpaceMarine*       Squad::getUnit(int index) const
{
	if (this->_units_count == 0 || index < 0 || index >= this->_units_count)
		return (nullptr);
	return (this->_units_list[index]);
}

int                 Squad::push(ISpaceMarine* spacemarine)
{
    if (!spacemarine)
        return (this->_units_count);
    if (this->_units_list)
    {
		ISpaceMarine **cpy = new ISpaceMarine*[this->_units_count + 1];
		for (int i = 0; i < this->_units_count; i++)
			cpy[i] = this->_units_list[i];
		delete[] this->_units_list;
		this->_units_list = cpy;
		this->_units_list[this->_units_count] = spacemarine;
		this->_units_count++;
    }
    else
    {
 		this->_units_list = new ISpaceMarine*[1];
		this->_units_list[0] = spacemarine;
		this->_units_count = 1;
    }
	return (this->_units_count);
}