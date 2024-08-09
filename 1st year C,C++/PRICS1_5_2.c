# include <stdio.h>
# include <math.h>
int main()
{
    float x1, x2, x3, y1, y2, y3, s1, s2, s3;
    printf("Enter the co-ordinates of first point (x1,y1):");
    scanf("%f %f", &x1, &y1);
    printf("Enter the co-ordinates of first point (x2,y2):");
    scanf("%f %f", &x2, &y2);
    printf("Enter the co-ordinates of first point (x3,y3):");
    scanf("%f %f", &x3, &y3);
    s1=fabs(y2-y1)/(x2-x1);
    s2=fabs(y3-y2)/(x3-x2);
    s3=fabs(y3-y1)/(x3-x1);
    if(s1==s2 && s1==s3)
    {
        printf("The points are collinear.");
    }
    else
    {
        printf("The points are non-collinear");
    }
    return 0;
}