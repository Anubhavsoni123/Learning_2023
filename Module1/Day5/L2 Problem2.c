#include <stdio.h>
#include <math.h>

struct Point {
   float x;
   float y;
};

float CordinatesDistance(struct Point p1, struct Point p2) {
   float distance;
   distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
   return distance;
}

int main() {
   struct Point point1, point2;

   printf(" The coordinates of Point 1 will be:\n");
   printf("x: ");
   scanf("%f", &point1.x);
   printf("y: ");
   scanf("%f", &point1.y);

   printf("\nThe  coordinates of Point 2 will be:\n");
   printf("x: ");
   scanf("%f", &point2.x);
   printf("y: ");
   scanf("%f", &point2.y);

   float distance = CordinatesDistance(point1, point2);

   printf("\nThe distance between Point 1 and Point 2 will be : %.2f\n", distance);

   return 0;
}
