#include <iostream>
#include <string>
using namespace std;
int main() {
    string nama1 = "Muhammad Ilham Nashrullah";
  string hapus = nama1;
    hapus.erase(1,7);
    cout << "Setelah erase(4,3): " << hapus << endl;


return 0;
}
