#include <stdio.h>
#include <string.h>
#include "mylib.h"
#include <time.h>

void main ()
{
	struct book zousyo01;

//----------初期化　--------
    Date now;

    time_t t1 = time(NULL);
    struct tm *local = localtime(&t1);

	now.year = local->tm_year +1900;
	now.month = local->tm_mon +1;
	now.day = local->tm_mday;
	now.hour = local->tm_hour;

	zousyo01.today = now;
	strcpy(zousyo01.title,"パンどろぼう");
	zousyo01.number = 101;

	printf("%04d年 %02d月 %02d日 %02d時 %s %2d\n",zousyo01.today.year, zousyo01.today.month, zousyo01.today.day , zousyo01.today.hour, zousyo01.title, zousyo01.number);
}
