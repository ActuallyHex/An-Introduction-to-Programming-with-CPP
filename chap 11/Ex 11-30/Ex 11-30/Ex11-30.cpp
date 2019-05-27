//Mukhammad Mirsodikov - P2

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
  int lottery[6] = {};
  int random = 0;

  //srand(static_cast<int>(time(0)));
  //random = 1 + rand() % (54 - 1 + 1);
  srand(static_cast<int>(time(0)));

  for (int sub = 0; sub < 6; sub++) {
    random = 1 + rand() % (54 - 1 + 1);
    for (int i = 0; i < 6; i++)
      if (lottery[i] == random)
        random = 1 + rand() % (54 - 1 + 1);
    lottery[sub] = random;
  }
  cout << "The lottery numbers are: " << endl;
  for (int sub = 0; sub < 6; sub++)
      cout << lottery[sub] << endl;

  system("pause");
  return 0;
}
