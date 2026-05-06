 #include <iostream>
 using namespace std;

 void add(int grade, string name, string regnumber, int cash, int sum, int courses, double avg)
 {
    cout << " Enter your Grade \n";
    cin >> grade;
    if(grade <=39)
    {
        cout << " failed \n";
    }
    cout << " enter another grade \n";
    cin >> grade;
    if(grade >39 && grade <=50){
        cout << " average \n";
    }
    cout << " Enter another grade \n";
    cin >> grade;
     if(grade >50 && grade <=69){
        cout << " good \n";
    }
    cout << " Enter another grade \n";
    cin >> grade;
     if(grade >69 && grade <=89){
        cout << " very good \n";
    }
    cout << " Enter another grade \n";
    cin >> grade;
    if(grade >89 && grade <=100){
        cout << " Excellent \n";
    }
    for(int grade = 0; grade<=100; grade++){
        int courses = 5;
        sum=+grade;
        cout << " sum is: " << sum << " \n";
        avg=sum/5;
        cout << " avg: " << avg << " \n";
    }
    cout << " show your avg GPA \n";
    cin >> avg;
    if(avg >=2){
        cout << " you have passed \n";
    }else {
        cout << " you have failed \n";
    }
    cout << " Enter your reg number to see your results \n";
    cin >> regnumber;
    cout << " Enter your name \n";
    cin >> name;
    cout << " Enter your cash fee \n";
    cin >> cash;
    if(cash <1000000)
    {
        cout <<" You are not able to access results \n";
    }else if(cash >=1000000){
        cout << " you are able to access your results \n";
    }
 }
 void add(){
    
 }
 int main() 
 {
    add(8, " ", " ", 8, 6, 7.9, 5);
    return 0;
 }