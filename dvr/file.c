#define _GNU_SOURCE
#include<stdio.h>
#include<string.h>
#include <stdlib.h>



struct node_details
{
    int node_id, cp, dp, n[4], hop[6];
    char *hostname;
}p[6];


void read_file(char *filename)
{
	
    FILE * fp;
    char * line = NULL;
    int count=0, i=1;
    size_t len = 0;
    ssize_t read;
    char ch1,ch2,ch3,ch4,ch5;

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        exit(EXIT_FAILURE); 
        printf("hii");
    }
    

    while ((read = getline(&line, &len, fp)) != -1) 
    {
        p[i].hostname=malloc(100);
		
		p[i].node_id=0;
		p[i].cp=0;
		p[i].dp=0;
        
        sscanf(line, "%d%c%s%c%d%c%d%c%d%c%d%c%d", &(p[i].node_id), &ch1, p[i].hostname, &ch2, &(p[i].cp), &ch3, &(p[i].dp), &ch4, &(p[i].n[1]), &ch5, &(p[i].n[2]),&ch5, &(p[i].n[3]));
		i++;
		count++;		
	}
}


//int main(int argc, char*argv[])
int mokka()
{   
	printf("Archana\n" );
	read_file("config.txt");
	return 0;
}
