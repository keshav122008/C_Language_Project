#include<stdio.h>
int main(){

int cd,cm,cy,od,om,oy,dd,mm,yy,rm,rd;



printf("Enter today's date ");
    scanf("%d",&cd);

printf("Enter ongoing month ");
    scanf("%d",&cm);

printf("Enter ongoing year  ");
    scanf("%d",&cy);

printf("Enter birth date ");
    scanf("%d",&od);

printf("Enter birth month ");
    scanf("%d",&om);

printf("Enter birth year  ");
    scanf("%d",&oy);



if(cd<od){
    cd=cd+30;
    cm=cm-1;
    dd=cd-od;
}
else{
    dd=cd-od;
}

if(cm<om){
    cm=cm+12;
    cy=cy-1;
    mm=cm-om;
}
else{
    mm=cm-om;
}
yy=cy-oy;
    printf("total year %d\n",yy);
    printf("total month %d\n",mm);
    printf("total days %d\n",dd);

    if(dd>0){
        rm=11-mm;
        rd=30-dd;
    }
else{
    rm=12-mm;
    rd=0;
}


printf("Next birthday\n");
printf("Remaining month %d\n",rm);
printf("Remaining days %d\n",rd);

printf("\nTime spend on earth ");
    int t_year=yy;
printf("total years %d\n",t_year);
    int t_month=(yy*12)+mm;
printf("total months %d\n",t_month);
    int t_days=(yy*365)+(mm*30)+dd;
printf("total days %d\n",t_days);
    int t_week=(t_days/7);
printf("total weeks %d\n",t_week);
    int t_hours=t_days*24;
printf("total hours %d\n",t_hours);
    int t_mins=t_hours*60;
printf("total mins %d\n",t_mins);
    int t_second=t_mins*60;
printf("total seconds %d\n",t_second);
return 0;
}
