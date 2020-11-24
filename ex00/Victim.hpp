#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim;

class Victim
{
    public:
        Victim();
        Victim(std::string name);
        Victim(const Victim& copy);
        virtual ~Victim();
        Victim &operator=(const Victim& op);
		// Getter - Setter
        virtual void getPolymorphed() const;
        std::string getName(void) const;
        void setName(std::string name);

    protected:
        std::string     _name;
};

std::ostream    &operator<<(std::ostream & out, const Victim & Victim);
#endif