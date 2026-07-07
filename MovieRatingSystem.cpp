#include <iostream>
using namespace std;

/*
 * Author: Ege Kilic
 * Date: April 2026
 * Description: Movie Rating and Filtering System demonstrating Static Members and Object Arrays in C++.
 */

class Movie{
public:
    string Title;
    int ReleaseYear;
    double Rating;
    Movie(){
        Title="default";
        ReleaseYear=0;
        Rating=0;
    }
    static int counter1;
    static int counter2;
    static double avg;

    static void checkRating(Movie Arr[]){
        for(int i=0;i<4;i++){
            if(Arr[i].Rating>=7){
                counter1++;
                avg+=Arr[i].Rating/4;
            }
            else{
                counter2++;
                avg+=Arr[i].Rating/4;
            }
        }
    }

};
int Movie::counter1=0;
int Movie::counter2=0;
double Movie::avg=0;



int main()
{

    Movie myArr[4];

    for(int i=0;i<4;i++){
        cout<<"Enter the title: ";
        cin>>myArr[i].Title;
        cout<<"Enter the release year: ";
        cin>>myArr[i].ReleaseYear;
        cout<<"Enter the rating: ";
        cin>>myArr[i].Rating;
        myArr[i];
    }

    Movie::checkRating(myArr);

    cout<<Movie::counter1<<endl;
    cout<<"Average rating of all movies: "<<Movie::avg;

    Movie high[4];
    Movie low[4];
    int h=0;
    int l=0;

    for(int i=0;i<4;i++){
        if(myArr[i].Rating>=7){
            high[h++]=myArr[i];
        }
        else{
            low[l++]=myArr[i];
        }
    }

    cout<<"high rank:"<<endl;
    for(int i=0;i<h;i++){
        cout<<high[i].Title<<" "<<high[i].Rating<<" "<<high[i].ReleaseYear<<endl;
    }
    cout<<"low rank"<<endl;
    for(int i=0;i<l;i++){
        cout<<low[i].Title<<" "<<low[i].Rating<<" "<<low[i].ReleaseYear<<endl;
    }


    return 0;
}
