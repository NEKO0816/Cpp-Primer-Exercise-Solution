using arr_str = string[10];

arr_str& str_arr_ref(arr_str &str)
{
	return str;
}

auto str_arr_ref(string(&str)[10])->string(&)[10]
{
	return str;
}

string str[10];
string(&rstr)[10] = str;
decltype(rstr) str_arr_ref(string(&s)[10])
{
	return s;
}