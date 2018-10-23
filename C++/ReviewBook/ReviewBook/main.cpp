//
//  main.cpp
//  ReviewBook
//
//  Created by Bill on 12/2/17.
//  Copyright © 2017 Bill. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
struct Review{
    std::string title;
    int rating;
};
using namespace std;

bool operator<( const Review & r1, const Review &r2);
bool WorseThan(const Review & r1, const Review & r2);
bool FillReview(Review & te);
void ShowReview(Review & r);
int main(int argc, const char * argv[]) {
    vector<Review> books;
    Review temp;
    while(FillReview(temp))
        books.push_back(temp);
    if(books.size() > 0)
    {
        cout << "Thanks for your entering.\n";
        cout << "Here is a list of what you've just entered.\n";
        for_each(books.begin(),books.end(),ShowReview);
        
        cout << "Now Sorting totally:\n";
        sort(books.begin(),books.end());
        cout << "After sorting:\n";
        for_each(books.begin(),books.end(),ShowReview);
        
        cout << "Now Sorting strict weakly.\n";
        sort(books.begin(),books.end(),WorseThan);
        for_each(books.begin(), books.end(),ShowReview);
        
        cout << "Random Shuffle!\n";
        random_shuffle(books.begin(), books.end());
        for_each(books.begin(),books.end(),ShowReview);
        
    }
    else
    {
        cout << "No Entry!\n";
        cout << "You are just like a women!.\n";
    }
    cout << "Bye.\n";
     /*
    
    int arr[10] = {1,23,4,112,44,87,5,6,7,8};
    copy(arr, arr+10, ostream_iterator<int,char>(cout," "));
    cout << endl;
    vector<int> array(10);
    copy(arr,arr+10,array.begin());
    cout << "Putting out again.\n";
    ostream_iterator<int,char> out_iter(cout," ");
    copy(array.begin(),array.end(),out_iter);
    cout << "\nImplicit reverse iterator:\n";
    copy(array.rbegin(),array.rend(),out_iter);
    cout << "\nExplicit reverse iterator: \n:";
    vector<int>::reverse_iterator rit;
    for(rit = array.rbegin(); rit!= array.rend(); ++rit)
    {
        cout << *rit << ' ';
        
    }
    cout << endl;*/
    return 0;
}



bool operator < (const Review & r1,  const Review & r2)
{
    if(r1.title < r2.title)
        return true;
    else if(r1.title == r2.title && r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool WorseThan(const Review & r1, const Review & r2)
{
    if(r1.rating < r2.rating)
        return true;
    else
        return false;
}
bool FillReview(Review & temp)
{
    cout << "Please enter a title (quit to quit) : \n";
    getline(cin,temp.title);
    if(temp.title == "quit")
        return false;
    cout << "Enter book rating: \n";
    cin >> temp.rating;
    if(!cin)
        return false;
    while(cin.get() != '\n')
        continue;
    return true;
    
}
void ShowReview(Review & r1)
{
    cout << r1.title << "  : " << r1.rating << endl;
}

