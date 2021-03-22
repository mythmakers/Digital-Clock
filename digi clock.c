#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int alm=0,alarm,alrm,hour,min;
double sec;

void Clock();
void SystimeAndAlrm();
void SetAlarm();
void StopWatch();
void Newyork();
void Tokyo();
void Mexico();
void Paris();
void LosAngeles();
void Beijing();
void London();
void Karachi();

/*void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}*/
int main()
{
    int a=0;
    do
{
        system("cls");
        printf("\n\t\tFastrack %c\n",159);
        printf("\n");
        printf("\t ______________________\n");
        printf("\t|                      |\n");
        printf("\t|  **%cDIGITAL CLOCK%c** |\n",249,249);
        printf("\t|                      |\n");
        printf("\t|     1. Clock         |\n");
        printf("\t|     2. Set Alarm     |\n");
        printf("\t|     3. Stop Watch    |\n");
        printf("\t|                      |\n");
        printf("\t|     4. Exit          |\n");
        printf("\t|______________________|");

        printf("\n\n\tenter your choice\t");
        scanf("%d",&a);

        switch(a)
        {
            case 1: Clock();
            break;
            case 2: SetAlarm();
            break;
            case 3: StopWatch();
            break;
            case 4: printf("\n\t**Thank You**\n");
            break;
            default : printf("\n\tWrong Choice.\n\tTry Again");
                delay(1000);
        }
    }while(a!=4);
    return 0;
}

void SystimeAndAlrm()
{
    while(!kbhit())
            {
                delay(1000);
                system("cls");
                time_t pctime;
                pctime = time(NULL);
                printf("\n\n\n\tSystem Date And Time:\n\t%s",ctime(&pctime));
                if(alm==1)
                {
                    sec=(hour*60*60)+(min*60);
                    alrm=(pctime%86400)+19800;
                    alarm=pctime-alrm+sec;
                    if(pctime==alarm)
                        (void)system("F:\\digitalClock\\ikk_kudi.mp3");
                }
            }
}

void Clock()
{
    int c,w;
    do
    {
        system("cls");
        printf("\n\n\n");
        printf("\t ______________________\n");
        printf("\t|                      |\n");
        printf("\t|     ***CLOCK***      |\n");
        printf("\t|                      |\n");
        printf("\t|     1. System Time   |\n");
        printf("\t|     2. World Clock   |\n");
        printf("\t|                      |\n");
        printf("\t|     3. Back <-       |\n");
        printf("\t|______________________|");

        printf("\n\n\tenter your choice\t");
        scanf("%d",&c);
        if(c==1)
        {
            SystimeAndAlrm();
        }
        if(c!=1&&c!=2&&c!=3)
        {
            printf("\n\tWrong Choice.\n\tTry Again");
            delay(1000);
        }
        if(c==2)
        {
            do
            {
                system("cls");
                printf("\n\n\n");
                printf("\t ______________________\n");
                printf("\t|                      |\n");
                printf("\t|   **%cWORLD CLOCK%c**  |\n",249,249);
                printf("\t|                      |\n");
                printf("\t|     1. Newyork       |\n");
                printf("\t|     2. Tokyo         |\n");
                printf("\t|     3. Mexico        |\n");
                printf("\t|     4. Los Angeles   |\n");
                printf("\t|     5. Paris         |\n");
                printf("\t|     6. Karachi       |\n");
                printf("\t|     7. Beijing       |\n");
                printf("\t|     8. London        |\n");
                printf("\t|                      |\n");
                printf("\t|     9. Back <-       |\n");
                printf("\t|______________________|");

                printf("\n\n\tenter your choice\t");
                scanf("%d",&w);

                switch(w)
                {
                    case 1: Newyork();
                    break;
                    case 2: Tokyo();
                    break;
                    case 3: Mexico();
                    break;
                    case 4: LosAngeles();
                    break;
                    case 5: Paris();
                    break;
                    case 6: Karachi();
                    break;
                    case 7: Beijing();
                    break;
                    case 8: London();
                    break;
                    case 9: printf("\n\t**Thank You**\n");
                    break;
                    default : printf("\n\tWrong Choice.\n\tTry Again");
                        delay(1000);

                }
            }while(w!=9);
        }
    }while(c!=3);
}

void Newyork()
{
    while(!kbhit())
    {
        delay(1000);
        system("cls");
        time_t pctime;
        pctime = time(NULL);
        pctime-=34200;
        //printf("%d\n",pctime);
        printf("\n\n\n\tNewyork Date And Time:\n\t%s",ctime(&pctime));
    }
    system("pause");
}

void Tokyo()
{
    while(!kbhit())
    {
        delay(1000);
        system("cls");
        time_t pctime;
        pctime = time(NULL);
        pctime+=12600;
        printf("\n\n\n\tTokyo Date And Time:\n\t%s",ctime(&pctime));
    }
    system("pause");
}

void Mexico()
{
    while(!kbhit())
    {
        delay(1000);
        system("cls");
        time_t pctime;
        pctime = time(NULL);
        pctime-=41400;
        printf("\n\n\n\tMexico Date And Time:\n\t%s",ctime(&pctime));
    }
    system("pause");
}

void LosAngeles()
{
    while(!kbhit())
    {
        delay(1000);
        system("cls");
        time_t pctime;
        pctime = time(NULL);
        pctime-=45000;
        printf("\n\n\n\tLos Angeles Date And Time:\n\t%s",ctime(&pctime));
    }
    system("pause");
}

void Paris()
{
    while(!kbhit())
    {
        delay(1000);
        system("cls");
        time_t pctime;
        pctime = time(NULL);
        pctime-=16200;
        printf("\n\n\n\tParis Date And Time:\n\t%s",ctime(&pctime));
    }
    system("pause");
}

void Karachi()
{
    while(!kbhit())
    {
        delay(1000);
        system("cls");
        time_t pctime;
        pctime = time(NULL);
        pctime-=1800;
        printf("\n\n\n\tKarachi Date And Time:\n\t%s",ctime(&pctime));
    }
    system("pause");
}

void Beijing()
{
    while(!kbhit())
    {
        delay(1000);
        system("cls");
        time_t pctime;
        pctime = time(NULL);
        pctime+=9000;
        printf("\n\n\n\tBeijing Date And Time:\n\t%s",ctime(&pctime));
    }
    system("pause");
}

void London()
{
    while(!kbhit())
    {
        delay(1000);
        system("cls");
        time_t pctime;
        pctime = time(NULL);
        pctime-=19800;
        printf("\n\n\n\tLondon Date And Time:\n\t%s",ctime(&pctime));
    }
    system("pause");
}

void SetAlarm()
{
    alm=1;
    system("cls");
    time_t pctime;
    pctime = time(NULL);
    printf("\tEnter Time hour:minute\n\t");
    scanf("%d%d",&hour,&min);
    SystimeAndAlrm();
}

void StopWatch()
{
    int h=0,m=0,s=0,ms=0;
    system("cls");
    while(!kbhit())
    {
        delay(6);
        system("cls");
        if(ms>99)
        {
            s+=1;
            ms=0;
        }
        if(s>59)
        {
            m+=1;
            s=0;
        }
        if(m>59)
        {
            h+=1;
            m=0;
        }
        ms++;
        printf("\n\t\t\tStop Watch");
        printf("\n\n\t\t\t%d:%d:%d:%d",h,m,s,ms);
        printf("\n\n\tPress Any Key To Stop\n");
    }
    printf("\t");
    system("PAUSE");
}
