#include <iostream>
#include <string>
using namespace std;
int main() {
    string nama1 = "Muhammad Ilham Nashrullah";
    string ganti = nama1;
    ganti.replace(0,0,"Sedang belajar cpp ");
    cout << "Setelah replace(0,0,'baru'): " << ganti << endl;


return 0;
}
