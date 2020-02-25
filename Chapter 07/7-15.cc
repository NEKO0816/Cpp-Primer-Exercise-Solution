class Person
{
	friend std::istream &read(std::istream&, Person&);
	friend std::ostream &print(std::ostream&, const Person &);
private:
	std::string name;
	std::string addr;
public:
	Person() = default;
	Person(cosnt std::string &n, const std::string &a):
		name(n), addr(a) {}
	std::string get_name() const {return name;}
	std::string get_addr() const {return addr;}
};

std::istream &read(std::istream& is, Person::Person& per)
{
	is >> per.name >> per.addr;
	return is;
}

std::ostream &print(std::ostream& os, const Person::Person& per)
{
	os << per.name << " " << per.addr;
	return os;
}
 
