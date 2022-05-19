#include <stdio.h>
#include <math.h>
float gravitational_force(float force, float G,float m1, float m2, float r)
{

    force = (G * m1 * m2) / (r * r);
    return force;
}
int main()
{

    float m1, m2, r, force, res;
    m1 = 16;
    m2 = 22;
    r = 43;
    float G = 6.6743 * 10;
    // function calling
    res = gravitational_force(force, m1, m2, r, G);
    // printing the gravitational force
    printf("the gravitational force between mass1 and mass2 is %f\n", res);
}
