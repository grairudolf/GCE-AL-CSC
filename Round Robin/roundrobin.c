#include <stdio.h>
#include <stdlib.h>

struct process{
    int pid, at, bt, ct, wt, tat, rbt;
};

void admit(struct process p[], int Pid, int At, int Bt, int num){
    p[num].pid = Pid;
    p[num].at = At;
    p[num].bt = Bt;
    p[num].ct = 0;
    p[num].wt = 0;
    p[num].tat = 0;
    p[num].rbt = Bt;
}

void roundrobin(struct process p[], int num, int tq){
    int time, exited, i;
    time = 0;
    exited = 0;
    i = 0;
    while(exited != num){
        if(p[i].rbt > 0 && p[i].rbt <= tq){
            time = time + p[i].rbt;
            p[i].ct = time;
            p[i].rbt = 0;
            p[i].wt = p[i].ct - p[i].at - p[i].bt;
            p[i].tat = p[i].wt + p[i].bt;
            exited++;
        } else{
            if(p[i].rbt > tq){
                time = time + tq;
                p[i].rbt = p[i].rbt - tq;
            }
        }
        if((i+1) < num && p[i].rbt <= time){
            i++;
        } else{
            i = 0;
        }
    }
}

void doDisplay(struct process p[], int num){
    printf("============================================\n");
    printf(" PID\tAT\tBT\tCT\tWT\tTAT \n");
    printf("--------------------------------------------\n");
    for(int i=0; i<num; i++){
        printf(" P%d\t%d\t%d\t%d\t%d\t%d\n",i+1, p[i].at, p[i].bt, p[i].ct, p[i].wt, p[i].tat);
    }
    printf("============================================\n");

}

int main()
{
    struct process readyQ[10];
    int PN;
    int PID, AT, BT, Tq;
    printf("Number of processes: ");
    scanf("%d", &PN);
    printf("\n\n");
    for(int i = 0; i<PN; i++){
        printf("Process ID: ");
        scanf("%d", &PID);
        printf("Arrival time: ");
        scanf("%d", &AT);
        printf("Burst time: ");
        scanf("%d", &BT);
        printf("\n");
        admit(readyQ, PID, AT, BT,i);
    }
    doDisplay(readyQ, PN);
    printf("\n\n");
    printf("Enter quantum: ");
    scanf("%d", &Tq);
    roundrobin(readyQ, PN, Tq);
    doDisplay(readyQ, PN);
    int awt;
        int twt = 0;
    for(int m=0; m<PN; m++){
        twt = twt + readyQ[m].wt;
    }
    int ttat = 0;
    for(int n=0; n<PN; n++){
        ttat = ttat + readyQ[n].tat;
    }
    awt=twt/PN;
    int atat = ttat/PN;
    printf("\nAverage waiting time = %d", awt);
    printf("\nAverage turnaround time = %d", atat);
    printf("\n");
    system("pause");
    return 0;
}
