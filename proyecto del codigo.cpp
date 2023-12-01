#include <stdio.h>

// Prototipos de funciones
void inicializarMatrizDesdeArchivo();
void guardarMatrizEnArchivo();
void mostrarMatriz();
void escenaA();
void escenaB1();
void escenaB2();
void escenaB3();
void escenaC1();
void escenaC2();
void escenaC3();
void escenaD1();
void escenaD2();
void escenaD3();
void escenaE1();
void escenaE2();
void escenaE3();
void escenaF1();
void escenaF2();
void escenaF3();
void escenaG1();
void escenaA2();
void escenaA3();

// Matriz de 18x18
int matrizJuego[18][18];

int main()
{
    // Inicializa la matriz desde un archivo o crea una nueva si no existe
    inicializarMatrizDesdeArchivo();

    printf("¡Bienvenido a alas de sangre  \n");

    // Comienza con la primera escena
    escenaA();

    // Guarda la matriz en el archivo al final del juego
    guardarMatrizEnArchivo();

    return 0;
}

void mostrarMatriz()
{
    printf("\nEstado del juego:\n");

    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 18; j++)
        {
            printf("%d ", matrizJuego[i][j]);
        }
        printf("\n");
    }
}
void inicializarMatrizDesdeArchivo()
{
    FILE *archivo = fopen("matriz.txt", "rb");

    // Si el archivo existe, carga la matriz desde el archivo
    if (archivo != NULL)
    {
        for (int i = 0; i < 18; i++)
        {
            for (int j = 0; j < 18; j++)
            {
                fscanf(archivo, "%d", &matrizJuego[i][j]);
            }
        }
        fclose(archivo);
    }
    else
    {
        // Si el archivo no existe, inicializa la matriz con espacio vacío
        for (int i = 0; i < 18; i++)
        {
            for (int j = 0; j < 18; j++)
            {
                matrizJuego[i][j] = 0;
            }
        }
    }
}

void guardarMatrizEnArchivo()
{
    FILE *archivo = fopen("matriz.txt", "wb");

    // Guarda la matriz en el archivo
    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 18; j++)
        {
            fprintf(archivo, "%d ", matrizJuego[i][j]);
        }
        fprintf(archivo, "\n");
    }

    fclose(archivo);
}
void escenaA()
{
    printf("\nEstás llego al inicio de la guerra de alas de sangre donde las naciones son enemigos \n");
    printf("una mama cuya no sabe si mandar a su hija a los escriba o a los jinetas donde ahi pondra en prueba el verdadero amor\n");
    printf("la mama una vez tomando la decison correcta de su hija se encuentra en una dificil descion ya que en cada lugar donde mandaba a su hija era prueba de todos sus enemigos estaban sueltos\n");
    printf("_____________________________________\n");
    // Opciones para la siguiente escena
    printf("1. los escribas\n");
    printf("2. los jinetes\n");
    printf("3. los guardianes\n");

    int eleccion;
    scanf("%d", &eleccion);

    switch (eleccion)
    {
    case 1:
        escenaB1();
        break;
    case 2:
        escenaB2();
        break;
    case 3:
        escenaB3();
        break;
    default:
        printf("vamos eligue sabiamente\n");
        escenaA();
    }
}

void escenaB1()
{
    printf("\nsus enemigos se tratan de acercar a violeta donde ya le dejaron claro que si llega a tener oportunidad la van a matar\n");
    printf("-por que me odian.\n");
    printf("-no te lo tomes personal violeta ellos no creo que te odien,-y ahi estan ellos\n");
    printf("_____________________________________\n");
    // Opciones para la siguiente escena
    printf("1. xander\n");
    printf("2. julio \n");
    printf("3. andres\n");

    int eleccion;
    scanf("%d", &eleccion);

    switch (eleccion)
    {
    case 1:
        escenaC1();
        break;
    case 2:
        escenaC2();
        break;
    case 3:
        escenaC3();
        break;
    default:
        printf("Elige de nuevo. \n");
        escenaB1();
    }
}

void escenaB2()
{
    printf("\n-entonces julio es tu mejor amigo? \n");
    printf("si de hecho nos conocemos desde chicos mi mama y su mama son amigas y desde siempre hemos estado juntos\n");
    printf("te gustaria besartelo? \n");
    printf("-_______________\n");
    printf("_____________________________________\n");

    // Opciones para la siguiente escena
    printf("1. si\n");
    printf("2. no\n");
    printf("3. no lo se\n");

    int eleccion;
    scanf("%d", &eleccion);

    switch (eleccion)
    {
    case 1:
        escenaC1();
        break;
    case 2:
        escenaC2();
        break;
    case 3:
        escenaD3();
        break;
    default:
        printf("¡Ya no te voy a aceptar esto! Elige de nuevo. \n");
        escenaB2();
    }
}

void escenaB3()
{
    printf("\n-pero de igual manera,xander me hace sentir algo\n");
    printf("diablos no se es qe me odia\n");
    printf(" no lo tomes personal es por lo que hizo tu mama.\n");
    printf("¿que hizo \n");
    printf("________________________\n");

    // Opciones para la siguiente escena
    printf("_____________________________________\n");
    printf("1. mato a sus padres\n");
    printf("2. lo encarcelo\n");
    printf("3. no lo se\n");

    int eleccion;
    scanf("%d", &eleccion);

    switch (eleccion)
    {
    case 1:
        escenaC1();
        break;
    case 2:
        escenaC2();
        break;
    case 3:
        escenaD3();
        break;
    default:
        printf(" Elige de nuevo. \n");
        escenaB3();
    }
}

void escenaC1()
{
    printf("\n-hola\n");
    printf("-hola xander\n");
    printf("como estas\n");
    printf("_____________________________________\n");
    printf("1. preguntarle por sus papas\n");
    printf("2.preguntar por la adopto a su casa\n");
    printf("3. ver si realmente es como decian ser.\n");
    int eleccion;
    scanf("%d", &eleccion);

    switch (eleccion)
    {
    case 1:
        escenaD1();
        break;
    case 2:
        escenaC2();
        break;
    case 3:
        escenaC3();
        break;
    default:
        printf("¡Opción no válida! Elige de nuevo.\n");
        escenaC1();
    }
}

// Implementa las funciones de las demás escenas C y D siguiendo un esquema similar.

void escenaC2()
{
    // ... (código de la escena C2)
    printf("\n veia a xander llendose despues de darme realmente le respuestas\n");
    printf(" -wow no sabia que le hablanbas realmente\n");
    printf("si lo hago pero\n");
    printf("_____________________________________\n");
    printf("1. hace que mi corzon se sienta raro.\n");
    printf("2. no se quiero conocerlo\n");
    printf("3. aun quiero volver a verlo,aunque apenas pasaron segundo\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaD1();
        break;
    case 2:
        escenaD2();
        break;
    case 3:
        escenaC3();
        break;
    default:
        printf("¡Opción no válida! Elige de nuevo.\n");
        escenaC2();
    }
}

void escenaC3()
{
    // ... (código de la escena C3)
    printf("\n -violeta!!!\n");
    printf("-mande\n");
    printf("ve a pelea te toca con julia\n");
    printf("vi como me arrincono y empezo la pelea no sabia realmente como sentirme por que estaba ganado \n");
    printf("_____________________________________\n");
    printf("1.darle una patada\n");
    printf("2.darle un puñetaso\n");
    printf("3. darle un costillaso\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaD1();
        break;
    case 2:
        escenaD2();
        break;
    case 3:
        escenaD3();
        break;
    default:
        printf("¡Opción no válida! Elige de nuevo.\n");
        escenaC2();
    }
}

void escenaD1()
{
    // ... (código de la escena D1)
    printf("\n vaya vaya mira a quien tenemos aqu\n");
    printf("hola xander me alegro de que estes bien\n");
    printf("_____________________________________\n");
    printf("1.seguirle la platica.\n");
    printf("2.volver a estar con el .\n");
    printf("3.besarlo\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaE1();
        break;
    case 2:
        escenaE2();
        break;
    case 3:
        escenaE3();
        break;
    default:
        printf("¡Opción no válida! Elige de nuevo.\n");
        escenaD1();
    }
}

void escenaD2()
{
    // ... (código de la escena D2)
    printf("\n -haz estado muy rara violeta que te paso.\n");
    printf("nada  -vamos fue por el verdad");
    printf("1.si\n");
    printf("2.no.\n");
    printf("3.no lo se.\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaE1();
        break;
    case 2:
        escenaE2();
        break;
    case 3:
        escenaE3();
        break;
    default:
        printf("¡Opción no válida! Elige de nuevo.\n");
        escenaD3();
    }
}

void escenaD3()
{
    // ... (código de la escena D3)
    printf("\n violeta !! VIOLETAAA \n");
    printf("que quiereeees?\n");
    printf("no tienes nada que explicarme ");
    printf("si lo tengo qu....\n");
    printf("_______________________________________________________\n");
    printf("1.decirle que no son nada\n");
    printf("2.decirle que se vaya.\n");
    printf("3.dejarlo en claro tu molestia.\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaE1();
        break;
    case 2:
        escenaE2();
        break;
    case 3:
        escenaE3();
        break;
    default:
        printf("¡Opción no válida! Elige de nuevo.\n");
        escenaD3();
    }
}
void escenaE1()
{
    printf("\n hoy escogemos a nuestro dragon no estas emocionada\n");
    printf("si lo estoy -vamos violeta sonrie mas -lo se -el dragon se empezo a hacercar a violete ella temblaba de miedo para que un dragon haga vinculo contigo tenias que aceptar");
    printf("wooooow\n");
    printf("_______________________________________________________\n");
    printf("1.aceptar vinculo.\n");
    printf("2.no aceptar\n");
    printf("3.ignorar.\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaF1();
        break;
    case 2:
        escenaF2();
        break;
    case 3:
        escenaF3();
        break;
    default:
        printf("¡Opción no válida! Elige de nuevo.\n");
        escenaE1();
    }
}
void escenaE2()
{
    printf("\n QUE DIABLOS TE PASA VIOLETA \n");
    printf("nada \n");
    printf("TENIAS EL PODER DE TRUENOS A TU MANDO Y NO ME HABIAS DICHO -no -por que  -omg no vayas a voltear pero esta tn con julia voltie y senti unos celos realmente desagradable no sabia por que \n");
    printf("_______________________________________________________\n");
    printf("1.ir a hacer una escena de celos.\n");
    printf("2.dejarlo pasar\n");
    printf("3. ir por tn ");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:

        escenaF1();
        break;
    case 2:
        escenaF2();
        break;
    case 3:
        escenaF3();
        break;
    default:
        printf("¡Opción no válida! Elige de nuevo.\n");
        escenaE2();
    }
}
void escenaE3()
{
    printf("\n mama te dije que estoy bien\n");
    printf("no lo se violeta te marque por que queria saber que a pasado -nada -violeta -si mama -se comunico conmigo dijo que no habias estado hablando con el  -silencio -mama  -nomas te digo que el te ama  -realmente te ama\n");
    printf("aun lo amas\n");
    printf("_______________________________________________________\n");
    printf("1.si.\n");
    printf("2.no lo se\n");
    printf("3.definitivamente no.\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaF1();
        break;
    case 2:
        escenaF2();
        break;
    case 3:
        escenaF3();
        break;
    default:
        escenaE3();
    }
}
void escenaF1()
{
    printf("\nvioleta..... violeta \n");
    printf("que paso.\n");
    printf("tenemos que hablar  -lo se  -es por el verdad -que  -que haz estado ignorandome-yo....\n");
    printf("_______________________________________________________\n");
    printf("1.si\n");
    printf("2.no.\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaF2();
        break;
    case 2:
        escenaF3();
        break;
    default:
        
        escenaF1();
    }
}
void escenaF2()
{
    printf("\nyo ya no te amo\n");
    printf("que\n");
    printf("lo siento\n");
    printf("_______________________________________________________\n");
    printf("1.explicarlo\n");
    printf("2.dejar que se fuera\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaF1();
        break;
    case 2:
        escenaF3();
        break;
    default:
        printf(" Elige de nuevo.\n");
        escenaF2();
    }
}
void escenaF3()
{
    printf("\nentonces xander volvio y ahi lo vi tan perfecto como siempre mientras venia hacia mi\n");
    printf("hola susurro -hola -yo te queria decir que .\n");
    printf("yo tambien te quiero");
    printf("_______________________________________________________\n");
    printf("1.continuar.\n");
    int eleccion;
    scanf("%d", &eleccion);
    switch (eleccion)
    {
    case 1:
        escenaG1();
        break;

    default:
        escenaF3();
    }
}
void escenaG1()
{
    printf("\nel universo colapsa....... \n Reiniciando realidad...\n");

    escenaA2();
}
void escenaA2()
{
    printf("\nvioleta -violeta despierta\n");
    printf("que mama que paso donde esta\n");
    printf("¿Qué haces? de que deablos pasa,  aun no lo recuerdas que  -estuviste dormida 2 dias sin parar -apenas llegue -que nada fue real -de que deablos hablas -yoo\n");
    printf("_____________________________________\n");
    // Opciones para la siguiente escena
    printf("1. pensar que todo fue de tu imaginacion\n");
    printf("2. contarle \n");
    printf("3. estar en otra dimension\n");

    int eleccion;
    scanf("%d", &eleccion);

    switch (eleccion)
    {
    case 1:
        escenaA3();
        break;
    case 2:
        escenaA3();
        break;
    case 3:
        escenaA3();
        break;
    default:
        escenaA2();
    }
}
void escenaA3()
{
    printf("gracias por jugar mi juego\n");
    printf("creador :michell sarai lopez castro ");
    printf("registro:23310183\n");
    printf("_____________________________________\n");
    printf("1.jugar de nuevo.\n");
    printf("salir preciona cualquier tecla meno :1.\n");
    int elecion;
    scanf(" %d", &elecion);
    switch (elecion)
    {
    case 1:
        escenaA();
        break;
    default:
        printf("hasta la proxima,nueva aventura en ALAS DE SANGRE 2\n");
    }
}
