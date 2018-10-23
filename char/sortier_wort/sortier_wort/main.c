//
//  main.c
//  sortier_wort
//
//  Created by Bill on 17/2/6.
//  Copyright © 2017年 Bill. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MAXWORDLEN 64
#define MAXWORDS 2000

typedef struct wordEntry_str
{
    int line;
    char word[MAXWORDLEN+1];
}wordEntry;
wordEntry g_words[MAXWORDS];
int g_numWords;

int cmpLength(const void * s1, const void* s2)
{
    int len1 = 0;
    int len2 = 0;
    const wordEntry* wep1 = (const wordEntry*) s1;
    const wordEntry* wep2 = (const wordEntry*) s2;
    
    const char* c1 = wep1->word;
    const char* c2 = wep2->word;
    
    while(*c1 != 0 && len1 < MAXWORDLEN)
    {
        len1++;
        c1++;
        
    }
    
    while(*c2 != 0 && len2 < MAXWORDLEN)
    {
        len2++;
        c2++;
        
    }
    return (len1 - len2);

    
}
int cmp2(const void * s1, const void * s2)
{
    int len1 = 0;
    int len2 = 0;
    const wordEntry* wep1 = (const wordEntry*) s1;
    const wordEntry* wep2 = (const wordEntry*) s2;
    const char* c1 = wep1->word;
    const char* c2 = wep2->word;
    while(*c1 != 0 && len1 < MAXWORDLEN && *c2 != 0 && len2 < MAXWORDLEN)
    {
        if(*c1 != *c2)
        {
        len1++;
        c1++;
        len2++;
        c2++;
        }
        else
            return *c1 - *c2;
    }
    return 0;
    
}

void printWords()
{
    int i;
    for(i = 0; i<g_numWords; i++)
    {
        printf("Zeile[%d]: %s\n",g_words[i].line,g_words[i].word);
    }
}

void readWords(){
    FILE* wordFile = NULL;
    wordFile = fopen("wordlist.txt","r");
    do{
        if(fgets(g_words[g_numWords].word,MAXWORDLEN+1,wordFile)==0)
        {
            break;
        }
        g_words[g_numWords].line = g_numWords;
        g_numWords ++;
        
    }
    while(g_numWords<MAXWORDS);
    fclose(wordFile);
}

int main(int argc, const char * argv[]) {
    g_numWords = 0;
    readWords();
    qsort(g_words,(size_t)g_numWords,sizeof(wordEntry),cmp2);
    printWords();
    
    return 0;
}
