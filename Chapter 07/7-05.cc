struct Person
{
	std::string name;
	std::string addr;
	std::string get_name() const{return name;}
	std::string get_addr() const{return addr;}
};