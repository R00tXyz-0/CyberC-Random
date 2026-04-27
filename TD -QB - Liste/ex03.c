#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    int Ids;
    char  Nom[20];
    int Age;
    float AverageMark;
    struct Student *Next;
} Student;

Student *MakeStudent(int Id, char Name[], int Age0, float AverageNote){
    Student *NewStudent;
    NewStudent = (Student *) malloc(sizeof(Student));

    NewStudent->Ids = Id;

    strcpy(NewStudent->Nom, Name);

    NewStudent->Age = Age0;
    NewStudent->AverageMark = AverageNote;
    NewStudent->Next = NULL;

    return NewStudent;
}

Student *FindStudent(Student *Rass, int Id){
    Student *temp = Rass;
    while (temp != NULL){
        if (temp->Ids == Id){
            return temp;
        }
        temp = temp->Next;
    }   
    return NULL;
}


int main(){
    Student *Student1 = MakeStudent(1, "Othmane", 18, 15);
    Student *Student2 = MakeStudent(2, "Othmane0", 17, 19);
    Student *Student3 = MakeStudent(3, "Othmane2", 19, 14);

    Student *Head;
    Head = (Student *) malloc(sizeof(Student));

    Head = Student1;
    Student1->Next = Student2;
    Student2->Next = Student3;
    Student3->Next = NULL;

    // Student *temp = Head;

    int SearchId;
    printf("Entrer the Student Id : ");
    scanf("%d", &SearchId);
    while (SearchId == 0 || SearchId == 4){
        printf("Try againe Id:(1-3) : ");
        scanf("%d", &SearchId);
    }
    
    Student *Goal = FindStudent(Head, SearchId);

    if (Goal != NULL) {
        printf("\nStudent Id : %d", Goal->Ids);
        printf("\nStudent Name : %s", Goal->Nom);
        printf("\nStudent Age : %d", Goal->Age);
        printf("\nStudent Average Mark : %2f", Goal->AverageMark);
    }
        
           
}  