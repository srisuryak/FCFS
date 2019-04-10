#include<stdio.h>
main(){
	int i, j, d = 0, h = 143;
	int q[] = {86,1470,913,1774,948,1509,1022,1750,130}, Disk[5000];
	/*printf("The Cylinders in Disk:");
	for (i=0;i<5000;i++){
		Disk[i] = i;
		printf("\n%d",Disk[i]);
	}*/
	for(i=0;q[i]!=NULL;i++){
		if(q[i]>h){
			j = (q[i]-h);
			d += j;
			printf("\ndistanc b/w %d and %d is:%d",q[i],h,j);
			h = q[i];
			j = 0;
		}
		else if(q[i]<h){
			j = (h-q[i]);
			d +=j;
			printf("\ndistanc b/w %d and %d is:%d",q[i],h,j);
			h = q[i];
			j = 0;
		}	
	}
	printf("\nTotal Distance travelled :%d",d);
}
