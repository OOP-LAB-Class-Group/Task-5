#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

class people {
 public:
  char name[20];
};

class staff : public people {
  int i = 3;
};

class manager : public people {
 public:
  int j = 8;
};

class lecturer : public manager, public staff {
 public:
  void set(char *a) { strcpy(name, a); }
  void get() {
    cout << "Lecturer name: " << name << endl
         << "Number of managers: " << j << endl
         << "Number of staff: " << i << endl;
  }
};

int main() {
  lecturer ob;
  ob.i = 1;
  ob.j = 6;
  ob.set("aaa bbb");
  ob.get();
  return 0;
}