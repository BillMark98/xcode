//
//  main.cpp
//  Code
//
//  Created by Bill on 17/5/2.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <iostream>
#include <string>
void Show_array(char [][26],int n);
char Char_Kodierung(char [][26],int n, char );
char Char_Inv_Code(char arr[][26],int n, char ch);
std::string Word_Inv_Code(char arr[][26],int n, std::string);
std::string Word_kodierugn(char [][26],int n,std::string);
void Show_code(std::string);
int main(int argc, const char * argv[]) {
    using namespace std;
    char code[2][26];
    int i;
    for(i = 0;i<26;i++)
    {
        code[0][i]='A'+i;
        code[1][i] = 'A'+(i+4)%26;
        
    }
    Show_array(code,2);
    cout<<"enter a word: ";
    string word;
    cin>>word;
    string codeword;
    cout<<"word entered: "<<word<<endl;
    cout<<"Now code version.\n";
    codeword = Word_kodierugn(code, 2, word);
    Show_code(codeword);
    cout<<"Now give a code to convert.\n";
    cin>>word;
    cout<<word<<endl;
    codeword = Word_Inv_Code(code, 2, word);
    cout<<"THE word.\n";
    Show_code("HEllo");
    cout<<endl;
    return 0;
}
void Show_code(std::string str)
{
    std::cout<<str<<std::endl;
}
void Show_array(char arr[][26],int n)
{
    int i,j;
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<26;j++)
        {
            std::cout.width(2);
            std::cout<<arr[i][j];
        }
        std::cout<<std::endl;
    }
}
char Char_Kodierung(char arr[][26],int n, char ch )
{
    int i;
    for(i = 0;i<26;i++)
    {
        if(ch == arr[0][i])
            break;
    }
    if(i==26)
    {std::cout<<"Invalid input.\n";
        return '\0';}
    else
        return arr[1][i];
}

std::string Word_kodierugn(char arr[][26],int n,std::string str)
    {
        std::string code = str;
        int i;
        for(i = 0;i<str.size();i++)
        {
            code[i] = Char_Kodierung(arr, n, str[i]);
        }
        return code;
    }

char Char_Inv_Code(char arr[][26],int n, char ch)
{
    int i;
    for(i = 0;i<26;i++)
    {
        if(arr[1][i] == ch)
            break;
    }
    if(i==26)
    {std::cout<<"Invalid input.\n";
        return '\0';}
    else
        return arr[0][i];
}
std::string Word_Inv_Code(char arr[][26],int n, std::string str)
{
    std::string code = str;
    int i;
    for(i = 0;i<str.size();i++)
    {
        code[i] = Char_Inv_Code(arr, n, str[i]);
    }
    return code;
}
