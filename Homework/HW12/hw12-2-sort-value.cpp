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

struct Student {
    char name[50];
    float score;
};

void Name(int i) {
    if (i == 1)
        printf("Student A\n");
    else if (i == 2)
        printf("Student B\n");
    else if (i == 3)
        printf("Student C\n");
    else
        printf("Student D\n");
}

int main() {
    struct Student group[4];
    
    for (int i = 0; i < 4; i++) {
        Name( i + 1 ) ;
        printf("Name : \n");
        scanf("%s", group[i].name);
        printf("Score : \n");
        scanf("%f", &group[i].score);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (group[i].score < group[j].score) {
                struct Student temp = group[i];
                group[i] = group[j];
                group[j] = temp;
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("%s ", group[i].name);
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("%.2f ", group[i].score);
    }

    return 0;
}