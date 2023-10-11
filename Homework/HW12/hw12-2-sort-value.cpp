/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    Test case:
        Student A
        Name : 
            Yorn
        Score : 
            21.42

        Student B
        Name : 
            Omen
        Score : 
            56.00

        Student C
        Name : 
            Alice
        Score : 
            80.75

        Student D
        Name : 
            Violet
        Score : 
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name : 
            Payna
        Score : 
            77.77
            
        Student B
        Name : 
            Zanis
        Score : 
            88.88

        Student C
        Name : 
            Lubu
        Score : 
            66.66

        Student D
        Name : 
            Krixi
        Score : 
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66

*/

#include <stdio.h>
#include <string.h>

struct A {
    char name[50] ;
    float score ;
} ;

int main() {
    int n = 4 ;
    struct A group[n] ;
    printf( "Student A\n" ) ;
    printf( "Name : \n" ) ;
    scanf( "%s", group[1].name ) ;
    printf( "Score : \n" ) ;
    scanf( "%f", &group[1].score ) ;

    printf( "Student B\n" ) ;
    printf( "Name : \n" ) ;
    scanf( "%s", group[2].name ) ;
    printf( "Score : \n" ) ;
    scanf( "%f", &group[2].score ) ;

    printf( "Student C\n" ) ;
    printf( "Name : \n" ) ;
    scanf( "%s", group[3].name ) ;
    printf( "Score : \n" ) ;
    scanf( "%f", &group[3].score ) ;

    printf( "Student D\n" ) ;
    printf( "Name : \n" ) ;
    scanf( "%s", group[4].name ) ;
    printf( "Score : \n" ) ;
    scanf( "%f", &group[4].score ) ;

    printf( "%4s %4s %4s %4s\n",
            group[1].name,
            group[2].name,
            group[3].name,
            group[4].name) ;
    printf( "%4.2f %4.2f %4.2f %4.2f",
            group[1].score,
            group[2].score, 
            group[3].score, 
            group[4].score) ;
    
    return 0 ;
}