#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    char filename[100],c;
    int n;
    printf("Enter the filename to open for reading\n");
    scanf("%s", filename);
    fp1=fopen(filename,"r");
    if(fp1==NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
    printf("Enter the filename to open for writing\n");
    scanf("%s", filename);
    fp1=fopen(filename,"w");
    if(fp2==NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }

    fseek(fp1,0,SEEK_END);
    int p=ftell(fp1);
    int i=0;
    while(i<p)
    {
        i++;
        fseek(fp1,-i,SEEK_END);
        printf("%c",fgetc(fp1));
        int ch=fgetc(fp1);
        printf("%c",ch);
    }
    printf("Contents copied in reverse order to %s",filename);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
