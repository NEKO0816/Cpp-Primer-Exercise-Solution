istream& readByIs(istream& is)
{
    string word;
    while(is >> word)
    {cout << word << " ";}
    cout << endl;
    is.clear();
    return is;
}
