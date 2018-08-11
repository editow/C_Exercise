#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int StudentCount;       // 学生人数统计
typedef struct st{
    char num[10];       // 学号
    char name[7];       // 名字
    char sex[4];        // 性别
    int age;            // 年龄
    int score;          // 总成绩
    struct st *next;
}Student,*Pstudent;

Pstudent CreateStudentInformation(void);        // 1)创建新的学生信息链表
Pstudent AddStudent(Pstudent st);               // 2)增加一个新的学生信息
void PrintInformation(Pstudent st);             // 3)打印学生信息
int SearchNumber(Pstudent st,char *);           // 4)按学号查找某个学生信息
Pstudent DelStudent(Pstudent st,char *);        // 5)按学号删除某个学生信息
Pstudent SortStudent(Pstudent st);              // 6)可以按照学生成绩对链表排序
void ExitSy(void);                              // 0)退出系统
void ClearScreen(void);                         // 清屏
// 7)输出信息到文件

int main()
{

    while(1){
        Pstudent st;
        char number[2][10];
        int num;
        printf("******************************************************************\n");
        printf("欢迎进入学生信息管理系统\n");
        printf("1) 创建新的学生信息表                2) 增加一个新的学生信息\n");
        printf("3) 按学号删除某个学生信息            4) 按学号查找某个学生信息\n");
        printf("5) 打印学生信息                      6) 可以按照学生成绩对链表排序\n");
        printf("0) 退出系统                          当前共有 %d 名学生\n",StudentCount);
        printf("******************************************************************\n");
        printf("请选择学生信息管理功能：");
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
            printf("请输入需要删除的学号:");
            scanf("%s",number[0]);
            if(DelStudent(st,number[0])){
                printf("删除成功！");
            }
            else
                printf("删除失败！");
            break;
        case 4:
            printf("请输入需要查找的学生学号：");
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
    printf("请输入新增学生信息（学号，姓名，性别，年龄，成绩）:\n");
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
    printf("请确定导入学生信息人数：");
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
        printf("请输入第 %d 位学生信息（学号，姓名，性别，年龄，成绩）:\n",i+1);
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
    printf("是否需要打印学生信息表（y/n）:");
    getchar();
    scanf("%c",&ch);
    if(ch == 'Y' || ch == 'y' || ch == '\n'){
        if(st){
            st = st->next;
            printf("\n打印学生信息表：\n");
        }
        else
            return;
        printf("学号,姓名,性别,年龄,成绩\n");
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
    if(p){             // 查找有些问题
        printf("查找成功，请查看信息：\n");
        printf("%s\t%s\t%s\t%d\t%d\n",p->num,p->name,p->sex,p->age,p->score);
        return 1;
    }
    else{
        printf("未查找到信息！\n");
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
    printf("\n现在你看到这条信息,即会清屏,");
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
