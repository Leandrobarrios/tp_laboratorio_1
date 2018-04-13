#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/**
 * Suma dos enteros y retorna el resultado
 * \param x int
 * \param y int
 * \return int
 */
int suma(int x,int y);

/** resta dos enteros y entrega un resultado
 * \param x int
 * \param y int
 * \return int
 */
int resta (int x,int y);

/** retorna el factorial de un numero
 * \param x int
 * \return int
 *
 */
int factorial(int x);

/** multiplica dos int
 *
 * \param x int
 * \param y int
 * \return int
 *
 */
int multiplicacion(int x, int y);

/** divide dos int y valida que el segundo parametro no sea 0
 * \param x int
 * \param y int
 * \return float
 */
float division (int x, int y);

#endif // FUNCIONES_H_INCLUDED
