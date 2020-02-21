struct Person
{
	std::string name;
	std::string addr;
	std::string get_name() const {return name;}
	std::string get_addr() const {return addr;}
};

std::istream &read(std::istream& is, Person& per)
{
	is >> per.name >> per.addr;
	return is;
}

std::ostream &print(std::ostream& os, const Person& per)
{
	os << per.name << " " << per.addr;
	return os;
}