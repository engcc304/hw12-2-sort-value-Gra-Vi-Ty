#include <stdio.h>
#include <string.h>

struct Student {
    char fName[20] ;
    char lName[20] ;
    char ID[5] ;
    int ScoreSub1 ;
    int ScoreSub2 ;
    int ScoreSub3 ;
    int ScoreSub4 ;
    int ScoreSub5 ;
} typedef S ;

void calculateGrade(float score) {
    if (score >= 80) printf( "  A" ) ;
    else if (score >= 75) printf( " B+" ) ;
    else if (score >= 70) printf( "  B" ) ;
    else if (score >= 65) printf( " C+" ) ;
    else if (score >= 60) printf( "  C" ) ;
    else if (score >= 55) printf( " D+" ) ;
    else if (score >= 50) printf( "  D" ) ;
    else printf( "  F" ) ;
}

int main() {

    S info[3] ;

    printf( "Enter the details of 3 students :\n" ) ;
    for (int i = 1 ; i <= 3 ; i++) {
        printf( "Student %d\n" , i ) ;

        printf( "Name:\n" ) ;
        scanf( "\t%s %s" , info[i].fName , info[i].lName ) ;

        printf( "ID:\n" ) ;
        scanf( "\t%s" , &info[i].ID ) ;

        printf( "Scores in Subject 1:\n" ) ;
        scanf( "\t%d" , &info[i].ScoreSub1 ) ;

        printf( "Scores in Subject 2:\n" ) ;
        scanf( "\t%d" , &info[i].ScoreSub2 ) ;

        printf( "Scores in Subject 3:\n" ) ;
        scanf( "\t%d" , &info[i].ScoreSub3 ) ;

        printf( "Scores in Subject 4:\n" ) ;
        scanf( "\t%d" , &info[i].ScoreSub4 ) ;

        printf( "Scores in Subject 5:\n" ) ;
        scanf( "\t%d" , &info[i].ScoreSub5 ) ;
    }

    for (int i = 1 ; i <= 3 ; i++ ) {
        printf( "Student %d:\n" , i ) ;
        printf( "Name: %s %s\n" , info[i].fName , info[i].lName ) ;
        printf( "ID: %s\n" , info[i].ID ) ;
        printf( "Scores: %d %d %d %d %d\n" , 
                info[i].ScoreSub1 , 
                info[i].ScoreSub2 , 
                info[i].ScoreSub3 , 
                info[i].ScoreSub4 , 
                info[i].ScoreSub5 
        ) ;

        printf("Grades:");
               calculateGrade( info[i].ScoreSub1 ) ;
               calculateGrade( info[i].ScoreSub2 ) ;
               calculateGrade( info[i].ScoreSub3 ) ;
               calculateGrade( info[i].ScoreSub4 ) ;
               calculateGrade( info[i].ScoreSub5 ) ;

        float total = info[i].ScoreSub1 + info[i].ScoreSub2 + info[i].ScoreSub3 + info[i].ScoreSub4 + info[i].ScoreSub5 ;
        printf( "\nAverage Scores: %.1f" , total/ 5 ) ;
    }

    return 0 ;
}//end main function