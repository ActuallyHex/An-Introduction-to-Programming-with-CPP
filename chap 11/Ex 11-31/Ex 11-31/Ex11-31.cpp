//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int minimum[5] = {0, 300, 350, 400, 450};
  char grade[5] = {'F', 'D', 'C', 'B', 'A'};
  int score = 0;

  cout << "Student score: ";
  cin >> score;
  while (score > 0){
    cout << "Grade: ";
    for (int sub = 0; sub < 5; sub++){
		if (score > minimum[sub] && score < minimum[sub + 1])
			cout << grade[sub] << endl;
		else if (score == minimum[sub])
			cout << grade[sub] << endl;
    }
	if (score > minimum[4])
		cout << grade[4] << endl;
    cout << "Student score: ";
    cin >> score;
  }

  system("pause");
  return 0;
}
