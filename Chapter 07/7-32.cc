#include<string>
class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(24,80,' ')};
}

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width,' ');
}

class Screen{
    //friend
    friend void Window_mgr::clear(ScreenIndex);
public:
    using std::string::size_type = pos;
    //contructor
    screen() = default;
    screen(pos ht,pos wd)
    :height(ht)， width(wd), contents(ht * wd,' '){}
    screen(pos ht, pos wd，char c)
    :height(ht), width(wd), contents(ht * wd, c){}
    //get
    char get() const
    {return contents[cursor];}
    inline char get(pos ht, pos wd) cosnt;
    //move
    Screen &move(pos r, pos c);
    //set
    Screen &set(char c)
    {
        contents[cursor] = c;
        return *this;
    }
    Screen &set(pos r,pos col, char ch)
    {
        contents[r*width + col] = ch;
        return *this;
    }
    Screen &display(std::ostream &os)
    {
        do_display(os) ;
        return *this;
    }
    cosnt Screen &display(std::ostream &os) cosnt
    {
        do_display(os);
        return *this;
    }
private:
    pos cursor = 0;
    pos height = 0,width = 0;
    std::string contents;
    void do_display(std::ostream &os) const
    {
        os << contents;
    }
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

