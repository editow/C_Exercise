#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int StudentCount;       // ѧ������ͳ��
typedef struct st{
    char num[10];       // ѧ��
    char name[7];       // ����
    char sex[4];        // �Ա�
    int age;            // ����
    int score;          // �ܳɼ�
    struct st *next;
}Student,*Pstudent;

Pstudent CreateStudentInformation(void);        // 1)�����µ�ѧ����Ϣ����
Pstudent AddStudent(Pstudent st);               // 2)����һ���µ�ѧ����Ϣ
void PrintInformation(Pstudent st);             // 3)��ӡѧ����Ϣ
int SearchNumber(Pstudent st,char *);           // 4)��ѧ�Ų���ĳ��ѧ����Ϣ
Pstudent DelStudent(Pstudent st,char *);        // 5)��ѧ��ɾ��ĳ��ѧ����Ϣ
Pstudent SortStudent(Pstudent st);              // 6)���԰���ѧ���ɼ�����������
void ExitSy(void);                              // 0)�˳�ϵͳ
void ClearScreen(void);                         // ����
// 7)�����Ϣ���ļ�

int main()
{

    while(1){
        Pstudent st;
        char number[2][10];
        int num;
        printf("******************************************************************\n");
        printf("��ӭ����ѧ����Ϣ����ϵͳ\n");
        printf("1) �����µ�ѧ����Ϣ��                2) ����һ���µ�ѧ����Ϣ\n");
        printf("3) ��ѧ��ɾ��ĳ��ѧ����Ϣ            4) ��ѧ�Ų���ĳ��ѧ����Ϣ\n");
        printf("5) ��ӡѧ����Ϣ                      6) ���԰���ѧ���ɼ�����������\n");
        printf("0) �˳�ϵͳ                          ��ǰ���� %d ��ѧ��\n",StudentCount);
        printf("******************************************************************\n");
        printf("��ѡ��ѧ����Ϣ�����ܣ�");
        scanf("%d",&num);
        system("cls");
        switch(num)
        {
        case 0:
            free(st);
            ExitSy();
            break;
        case 1:
            st = CreateStudentInformation();
            break;
        case 2:
            st = AddStudent(st);
            break;
        case 3:
            printf("��������Ҫɾ����ѧ��:");
            scanf("%s",number[0]);
            if(DelStudent(st,number[0])){
                printf("ɾ���ɹ���");
            }
            else
                printf("ɾ��ʧ�ܣ�");
            break;
        case 4:
            printf("��������Ҫ���ҵ�ѧ��ѧ�ţ�");
            scanf("%s",number[1]);
            SearchNumber(st,number[1]);
            break;
        case 5:
            PrintInformation(st);
            break;
        case 6:
            st = SortStudent(st);
            break;
        }
        if(num >=0 && num <=6)
            ClearScreen();
    }

    return 0;
}

Pstudent AddStudent(Pstudent st)
{
    Pstudent newStudent;
    newStudent = (Pstudent)malloc(sizeof(Student));
    if(!newStudent)
        return NULL;
    printf("����������ѧ����Ϣ��ѧ�ţ��������Ա����䣬�ɼ���:\n");
    newStudent->next = st->next;
    scanf("%s %s %s %d %d",newStudent->num,newStudent->name,newStudent->sex,&newStudent->age,&newStudent->score);
    st->next = newStudent;
    StudentCount++;
    return st;
}

Pstudent CreateStudentInformation(void)
{
    Pstudent st,p;
    int num;
    printf("��ȷ������ѧ����Ϣ������");
    scanf("%d",&num);
    st = (Pstudent)malloc(sizeof(Student));
    if(st == NULL)
        return NULL;
    st->next = NULL;

    int i;
    for(i = 0;i < num; i++)
    {
        p = (Pstudent)malloc(sizeof(Student));
        if(!p)
            break;
        printf("������� %d λѧ����Ϣ��ѧ�ţ��������Ա����䣬�ɼ���:\n",i+1);
        scanf("%s %s %s %d %d",p->num,p->name,p->sex,&p->age,&p->score);
        p->next = st->next;
        st->next = p;
        StudentCount++;
    }
    return st;
}

void PrintInformation(Pstudent st)
{
    char ch;
    printf("�Ƿ���Ҫ��ӡѧ����Ϣ��y/n��:");
    getchar();
    scanf("%c",&ch);
    if(ch == 'Y' || ch == 'y' || ch == '\n'){
        if(st){
            st = st->next;
            printf("\n��ӡѧ����Ϣ��\n");
        }
        else
            return;
        printf("ѧ��,����,�Ա�,����,�ɼ�\n");
        while(st)
        {
            printf("%s\t%s\t%s\t%d\t%d\n",st->num,st->name,st->sex,st->age,st->score);
            if(st)
                st = st->next;
            else
                break;
        }
    }
}

int SearchNumber(Pstudent st,char *number)
{
    Pstudent p;
    p = st->next;
    while(p){
        if(strcmp(number,p->num) == 0)
            break;
        else
            p = p->next;
    }
    if(p){             // ������Щ����
        printf("���ҳɹ�����鿴��Ϣ��\n");
        printf("%s\t%s\t%s\t%d\t%d\n",p->num,p->name,p->sex,p->age,p->score);
        return 1;
    }
    else{
        printf("δ���ҵ���Ϣ��\n");
        return 0;
    }
}

Pstudent DelStudent(Pstudent st,char *number)
{
    Pstudent p,q;
    p = st->next;
    while(p){
        if(strcmp(number,p->num) == 0)
            break;
        q = p;
        p = q->next;
    }
    if(p){
        q->next = p->next;
        StudentCount--;
        return st;
    }
    else
        return NULL;
}
void ExitSy(void)
{
    exit(0);
}
void ClearScreen(void)
{
    printf("\n�����㿴��������Ϣ,��������,");
    system("pause");
    system("cls");
}

Pstudent SortStudent(Pstudent st)
{
    Pstudent newSt,p,n;
    int *num,i,j,temp;
    num = (int *)malloc(StudentCount*sizeof(int));
    for(i = 0,p = st->next;i < StudentCount;i++,p=p->next){
        num[i] = p->score;
    }
    for(i = StudentCount-1;i >=0;i--)
    {
        for(j = i-1;j >= 0; j--){
            if(num[j] < num[i]){
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }

    newSt = (Pstudent)malloc(sizeof(Student));
    newSt->next = NULL;
    for(i = 0;i < StudentCount; i++){
        p = st->next;
        while(p){
            if(num[i] == p->score){
                n = (Pstudent)malloc(sizeof(Student));
                n->age = p->age;
                strcpy(n->name,p->name);
                strcpy(n->num,p->num);
                n->score = p->score;
                strcpy(n->sex,p->sex);
                n->next = newSt->next;
                newSt->next = n;
            }
            p = p->next;
        }
    }
    return newSt;
}
