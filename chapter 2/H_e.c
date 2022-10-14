/*Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:
D = 3963 cos^-1 ( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )*/
#include<stdio.h>
#include<math.h>
void main()
{
    float l1,l2,g1,g2,d;
    printf("Enter lattitude L1 and L2 an longitude G1 and G2 of any two places on earth:");
    scanf("%f%f%f%f",&l1,&l2,&g1,&g2);
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("Distance between places = %f nautical miles ",d);
}