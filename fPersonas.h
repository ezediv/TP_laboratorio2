
typedef struct
{
    char nombre[50];
    int dni;
    int edad;
    int estado;
} ePersona;

/** \brief Permite el ingreso de datos para la estructura
 *
 * \param posicion de tipo entero
 * \param array de tipo ePersona
 * \return
 *
 */
void altaPersona(ePersona[],int);


/** \brief Inica los estado de las estructaras en 0 (cero)
 *
 * \param define 20
 * \param array de tipo ePersona
 * \return
 *
 */
void inicioPersona(ePersona[],int);


/** \brief cambia el estado de la persona, eliminandola
 *
 * \param array de tipo ePersona
 * \param define 20 TAM
 * \return
 *
 */
void borrarPersona(ePersona[], int);


/** \brief Muestra los datos de cada estructura
 *
 * \param array de tipo ePersona
 * \param define 20 TAM
 * \return
 *
 */
void mostrarPersona(ePersona[], int);


/** \brief Ordena las estructuras alfabeticamente por nombre
 *
 * \param array de tipo ePersona
 * \param TAM 20
 * \return
 *
 */
void ordenarPersona(ePersona[], int);


/** \brief Grafico de edades
 *
 * \param array de tipo ePersona
 * \param define 20
 * \return
 *
 */
void graficoPersona(ePersona[], int,int);



/** \brief Obtiene el primer indice libre del array
 *
 * \param array de tipo ePersona
 * \param define 20
 * \return valor de posicion de tipo entero
 *
 */
int obtenerEspacio(ePersona[],int);


/** \brief obtiene el indice que coincide con el dni
 *
 * \param array de tipo ePersona
 * \param define 20
 * \return retorna indice de tipo entero
 *
 */
int posicionBorrar(ePersona[],int);


/** \brief Carga 5 estructuras, hardcodeo
 *
 * \param array de tipo ePersona
 * \param
 * \return
 *
 */

void cargaPersona(ePersona[]);

