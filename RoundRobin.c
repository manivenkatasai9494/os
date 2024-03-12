#include<stdio.h>
void main(){
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	while(1){
		for(i=0;count=0;i<n;i++){
			temp=q1;
			if(rem_bt[i]==0)
			{
			 	count++;
			 	continue;
			 }
			 if(rem_bt[i]>qt)
			 	rem_bt[i]=rem_bt[i]-qt;
			 else
			 {			 
			 	if(rem_bt[i]>=0)
			 	{
			 		temp=rem_bt[i];
			 		rem_bt[i]=0;
			 	}
			 	sq=sq+temp;
			 	tat[i]=sq;
			 }
			 if(n==count){
			 	break;
			 }
			 printf("\n process \tBT \tTAT \tWT\n");
			 for(i=0;i<n;i++){
			 	wt[i]=tat[i]-b[i];
			 	awt=awt+wt[i];
			 	atat=atat+tat[i];
			 	printf("\n %d\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
			 }



