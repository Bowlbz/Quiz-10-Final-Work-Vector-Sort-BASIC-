/*  Unit 10 Final Exam 1437-58001
Bowlby, David  Dr_T */

#include <iostream>
#include <vector> //use of Vectors
#include <algorithm> //use of built in Sorting Function 


using namespace std;

vector <double> quizVector;

int main() 
{
  quizVector = {100, 55.27, 200.78, 17.5, 144.7};
  
  sort(quizVector.begin(), quizVector.end());

  for (double x : quizVector) //FOR LOOP to DISPLAY DATA
  {
    cout << "Question 3: Final Exam " << endl;
    cout << "\n" << x << endl;
  }
  
  return 0;
}