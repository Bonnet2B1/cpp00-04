#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	virtual ~WrongAnimal();
	WrongAnimal &operator = (const WrongAnimal &rhs);

	std::string getType() const;

	void makeSound() const;

protected:
	std::string type;

private:

};

#endif // WRONGANIMAL_HPP
