#include <stdio.h>
#include <stdlib.h>
#include "file.c"


struct node
{
    unsigned dist[20];
    unsigned from[20];
}rt[10];


static int costmat[5][5];

void dvr()

{
  	int nodes,i,j,k,count=1;
    

    
    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            
            costmat[i][i]=0;
            rt[i].dist[j]=costmat[i][j];
            rt[i].from[j]=j;
        }
    }
        do
        {
            count=1;
            for(i=1;i<6;i++)
            for(j=1;j<6;j++)
            for(k=1;k<6;k++)
                if(rt[i].dist[j]>costmat[i][k]+rt[k].dist[j])
                {
                    rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
                    rt[i].from[j]=k;
                    count++;
                }
        }while(count!=1);
        for(i=1;i<6;i++)
        {
            printf("\n\n For node %d\n",i);
            for(j=1;j<6;j++)
            {
                printf("\t\nnode %d via %d Distance %d ",j,rt[i].from[j],rt[i].dist[j]);
            }
        }
    printf("\n\n");

}


int main()
{
	int m = mokka(); int l=1;
	
	int i=0, j=0, k=0;
	
	for(i=1; i<6; i++)
		p[i].hop[i] = 0;
		
	for(i=1; i<6; i++)
	{
 		for(j=1; j<6; j++)
 		{
 			if(i != j)
 			{
 				for(k=1; k<4; k++)
 				{
 					if(i == p[j].n[k])
 						p[i].hop[j] = 1;
 				}
 			}
 		}

 		for(k=1; k<6; k++)
 			if(p[i].hop[k] != 1 && i!=k )
 				p[i].hop[k] = 999;
 	}


 	
 	
 	//find cost matrix

 	while(l<6)
 	{
 	for(i=1; i<6; i++)
 	{
 		costmat[l][i]= p[l].hop[i];
 		printf("%d\n",  costmat[l][i]);
 	}

 	l++;
 	
	}
 	
 	dvr();
 	
 	
	return 0;
} 				
