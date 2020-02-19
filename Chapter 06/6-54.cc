int receive_int(int, int);
using PF = decltype(receive_int)*;
vector<PF> vecPF;