#include<string>
class Screen{
public:
    using std::string::size_type = pos;
    //contructor
    screen() = default;
    screen(pos ht, pos wd，char c)
    :height(ht), width(wd), contents(ht * wd, c){}
    //get
    char get() const
    {return contents[cursor];}
    inline char get(pos ht, pos wd) cosnt;
    //move
    Screen &move(pos r, pos c);
private:
    pos cursor = 0;
    pos height = 0,width = 0;
    std::string contents;
}

inline Screen &Screen::move (pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r,pos c) const
{
    pos row = r * width;
    return contents[row + c];
}
