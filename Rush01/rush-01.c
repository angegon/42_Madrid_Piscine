/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angonzal <angonzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 11:59:11 by angonzal          #+#    #+#             */
/*   Updated: 2020/12/05 20:38:31 by angonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void validate_inputparameters(char *parameters)
{
    //Esta función validaria las condiciones que han de cumplir los parametros 
    ///de columna  y fila, sino lo cumplen sale.
    int r;
    int c;
    int cont;
    int auxc;
    int auxr;
    char matrix[6][6];
    int error;

    //inicializa matriz
    r = 0;
    c = 0;
    while (r<6)
    {   
        c = 0;
        while (c<6)
        {
            matrix[r][c] = '0';
            c++;
        }
        r++;
    }
    //Rellenamos la cabecera del array de 6 por 6.
    r = 0;
    c = 0;
    cont = 0;
    auxc = 0;
    auxr = 0;
    while(parameters[cont] != '\0')
        {
            write(1, &parameters[cont], 1);
            if ((cont % 2 == 0 || cont == 0 ) && cont < 7)
                {
                    matrix[0][c+1] = parameters[cont];
                    c++;
                }
            if ((cont % 2 == 0 || cont == 0 ) && cont >  6 && cont < 15)
                {
                    matrix[5][auxc+1] = parameters[cont];
                    auxc++;
                }
            if ((cont % 2 == 0 || cont == 0 ) && cont > 14 && cont < 23)
                {
                    matrix[r+1][0] = parameters[cont];
                    r++;
                }
            if ((cont % 2 == 0 || cont == 0 ) && cont > 22 && cont < 31)
                {
                    matrix[auxr+1][5] = parameters[cont];
                    auxr++;
                }
            cont++;
        }
    //Escribimos el array creado
    write(1, "\n", 1);
    r = 0;
    c = 0;
    while (r<6)
    {   
        c = 0;
        while (c<6)
        {
            write(1, &matrix[r][c], 1);
            
            c++;
        }
        write(1, "\n", 1);
        r++;
    }
    //Comprobamos que el valor de extremos no es coincidente,
    //ejemplo, si la fila0, columna1 != fila5, columna1, etc...
    r = 1;
    c = 1;
    while (c<5)
    {   
        if (matrix[0][c]==matrix[5][c])
            error = 1;
        c++;
    }
    if (error)
        write(1, "Error: extremos coincidentes", 30);
    while (r<5)
    {   
        if (matrix[r][0]==matrix[r][5])
            error = 1;
        c++;
    }
}

void rush_01(char *parameters)
{
    validate_inputparameters(parameters);
    //si la validación es correcta seguimos con la ejecución del rush.

}
int main(int argc, char *argv[])
{
    int cont;
    int error;
    char *cadena;

    error = 0;
    cont = 0;
    if(argc!=2) //Validamos que introduce un parametro, sino imprime error.
        //: Debe introducir solamente un parametro de 16 
        //numeros(del 1 l 4) entre comillas dobles. Intentelo de nuevo.!
        write(1, "Error.\0", 7);
    else
    {
        cadena = argv[1];
        while(cadena[cont] != '\0')
        {   
            //Comprobanos si estamos en posición par o 0, en cuyo caso ha de 
            //ser un caracter entre 1 y 4 para ser valido.
            if (cont % 2 == 0 || cont == 0)
                if (cadena[cont] >= '1' && cadena[cont] <= '4')
                    //write(1, &cadena[cont], 1);
                    error = 0;
                else
                    error = 1; //En este caso sabemos que uno no es numero               
            else
                //En las posiciones impares debe ir un espacio, sino la cadena
                // está mal formada.
                if (cadena[cont]!= ' ')
                    error = 2;
            cont++;
        }
    }
    if (error == 2)
        //: La cadena introducida no es valida, los núumeros introducidos 
        //(intervalo 1-4) no están separados por espacio
        write(1,"Error2\n",7);
    else if (error == 1)
            //La cadena introducida no es valida, los núumeros 
            //introducidos deben estar en el intervalo de 1-4.
            write(1,"Error1\n", 7);
    else if (cont != 31)
            {
            printf("%d\n", cont);
            write(1,"Error5\n", 7);
            }
    else   
        //Si todo lo anterior está correcto, la cadena está completamente 
        //validada, llamamos a la función rush con el parametro
        rush_01(argv[1]);
}
