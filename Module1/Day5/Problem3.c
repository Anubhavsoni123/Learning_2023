#include <stdio.h>

struct Time {
   int hours;
   int minutes;
   int seconds;
};

struct Time getTimeDifference(struct Time t1, struct Time t2) {
   struct Time diff;

   // Convert both time periods to seconds
   int time1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
   int time2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

   // Calculate the difference in seconds
   int difference = time2 - time1;

   
   diff.hours = difference / 3600;
   difference %= 3600;
   diff.minutes = difference / 60;
   difference %= 60;
   diff.seconds = difference;

   return diff;
}

int main() {
   struct Time startTime, endTime, diffTime;


   printf("Enter the start time  will be : ");
   scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

   
   printf("Enter the end  time will be : ");
   scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

   diffTime = getTimeDifference(startTime, endTime);

   
   printf(" The Time Difference will be : %d hours %d minutes %d seconds\n", diffTime.hours, diffTime.minutes, diffTime.seconds);

   return 0;
}