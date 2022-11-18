//Marcus. K Straughter. j00938999  11/15/22 ex. 5-4 page 278
///This program computes and outputs the total number of boxes of cookies sold, the total revenue, and the average number of boxes sold by each volunteer.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
const string SENTINEL="-1";

int main() 
{
  string name;
  int numOfVolunteers;
  int numOfBoxesSold;
  int totalNumOfBoxesSold;
  double costOfOneBox;

  cout<<fixed<<showpoint<<setprecision(2);

  cout<<"Input:"<< endl;

  totalNumOfBoxesSold=0;
  numOfVolunteers=0;

  cin>>name;

  while (name !=SENTINEL)
    {
      cin>>numOfBoxesSold;
      totalNumOfBoxesSold=totalNumOfBoxesSold
                          +numOfBoxesSold;
      numOfVolunteers++;
      cin>>name;
      }
  cout<<endl;

  cout<<"Output: Total number of boxes sold:"
      <<totalNumOfBoxesSold<<endl;

  
  cin>>costOfOneBox;
  cout<<endl;

  cout<<"Total money made:$"
      <<totalNumOfBoxesSold*costOfOneBox<<endl;

  if (numOfVolunteers !=0)
    cout<<"Average number of boxes sold by each person:"
        <<totalNumOfBoxesSold/numOfVolunteers 
        <<endl;
  else
    cout<<"No input."<<endl;
  return 0;
    
      
    }
