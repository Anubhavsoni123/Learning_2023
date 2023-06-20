#include <stdio.h>

struct Box {
    double len;
    double width;
    double height;
};

void VolumeAndSurfaceArea(struct Box* box) {
    double volume = box->len * box->width * box->height;
    double surfaceArea = 2 * (box->len * box->width + box->width * box->height + box->height * box->len);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);
}

int main() {
    struct Box box;
    struct Box* boxPtr = &box;

    printf("Enter the length of the box: ");
    scanf("%lf", &(boxPtr->len));

    printf("Enter the width of the box: ");
    scanf("%lf", &(boxPtr->width));

    printf("Enter the height of the box: ");
    scanf("%lf", &(boxPtr->height));

    VolumeAndSurfaceArea(boxPtr);

    return 0;
}
