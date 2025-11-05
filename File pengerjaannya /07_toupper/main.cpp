#include <iostream>
#include <string>
using namespace std;
int main() {
    string nama1 = "Muhammad Ilham Nashrullah";
   string ubah = nama1;
    ubah[1] = toupper(ubah[1]);
    ubah[2] = toupper(ubah[2]);
    ubah[9] = tolower(ubah[9]);
    cout << "Setelah ubah huruf: " << ubah << endl;


return 0;
}
