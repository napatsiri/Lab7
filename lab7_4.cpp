#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int N=10;
	string name[N] = {"Luffy","Zoro","Sanji","Nami","Naruto","Sakura","All Might","Saitama","Eren","Mikasa"};
	int id[N] = {123,196,225,329,420,451,515,666,690,787};
	double gpa[N] = {1.50,2.12,4.00,3.69,2.50,2.76,3.54,2.14,3.50,1.88};

	double grade;
    cout << "Please input GPA: ";
	cin >> grade;

	int i=0;
	while(i<N){
		if(gpa[i]>=grade){
			cout << id[i] << " " <<  name[i] << " " << gpa[i] << "\n";
		}
		i++;
	}
	return 0;
}
