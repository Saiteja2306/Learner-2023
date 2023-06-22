#include<stdio.h>

struct log
{
    int entryNo;
    int sensorNo;
    float temperature;
    float humidity;
    float light;
    char time[10];

};

int main()
{
    FILE *fp;
    fp = fopen("data.csv","r");
    struct log log;
    int i=0;
    while(fscanf(fp,"%d,%d,%f,%f,%f,%s",&log.entryNo,&log.sensorNo,&log.temperature,&log.humidity,&log.light,log.time)!=EOF)
    {
        printf("%d,%d,%f,%f,%f,%s\n",log.entryNo,log.sensorNo,log.temperature,log.humidity,log.light,log.time);
        i++;

    }
    fclose(fp);
    return 0;
}