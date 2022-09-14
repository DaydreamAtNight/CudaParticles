#include <math.h>

//function to calculate rotate 2d vectors
template <class T2>
void rotateVectorX(T2 *vector_a, T2 *vector_rotated, T2 &angle)
{
    vector_rotated[0] = vector_a[0];
    vector_rotated[1] = (vector_a[1] * cos(angle) - vector_a[2] * sin(angle));
    vector_rotated[2] = (vector_a[1] * sin(angle) + vector_a[2] * cos(angle));
}

template <class T2>
void rotateVectorY(T2 *vector_a, T2 *vector_rotated, T2 &angle)
{
    vector_rotated[0] = vector_a[0] + vector_a[2] * sin(angle);
    vector_rotated[1] = vector_a[1];
    vector_rotated[2] = vector_a[2] + vector_a[2] * (cos(angle)-1);
}
