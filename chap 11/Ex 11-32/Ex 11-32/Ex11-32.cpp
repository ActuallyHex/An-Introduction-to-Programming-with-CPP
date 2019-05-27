//Mukhammad Mirsodikov - P2

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double minimum[5] = {};
  char grade[5] = {'F', 'D', 'C', 'B', 'A'};
  double score = 0;
  int points = 0;
  double rate = 0.6;

  cout << "Total possible points: ";
  cin >> points;

  minimum[0] = 0;
  for (int x = 1; x < 5; x++){
    minimum[x] = points * rate;
    rate += .1;
  }

  cout << "Student score: ";
  cin >> score;
  while (score > 0){
    cout << "Grade: ";
    for (int sub = 0; sub < 5; sub++) {
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
