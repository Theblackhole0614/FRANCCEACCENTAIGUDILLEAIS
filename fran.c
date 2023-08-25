#include <stdio.h>

#define TRANFORMERENCHAINEDECARACTERES(value) #value

#define POURDANS(array, size, type, element, code) \
    for (int i = 0; i < size; i++)                 \
    {                                              \
        type element = array[i];                   \
        code                                       \
    }

#define IMPRIMER(type, variable) printf(TRANFORMERENCHAINEDECARACTERES(%type), variable);

#define SAUTDELIGNE printf("\n");

#define NOMBRE int
#define ARGUMENT arg
#define FONCTIONPRINCIPALE NOMBRE main
#define CHAINEDECARACTERES char*
#define CHAINEDECARACTERESPOURLAFONCTIONIMPRIMER s
#define TABLEAU(nomdutableau) nomdutableau[]
#define LENOMBRED4ARGUMENT argc
#define DECLARATIONDUNOMBRED4ARGUMENTS NOMBRE LENOMBRED4ARGUMENT
#define LESARGUMENTS argv
#define DECLARATIONDESARGUMENTS CHAINEDECARACTERES TABLEAU(LESARGUMENTS)
#define DECLARATIONDESPARAMETRESD4ARGUMENTS DECLARATIONDUNOMBRED4ARGUMENTS, DECLARATIONDESARGUMENTS
#define IMPLEMENTATIONDELAFONCTIONPRINCIPALE(code) FONCTIONPRINCIPALE(DECLARATIONDESPARAMETRESD4ARGUMENTS) {\
    code\
}

#include "fran.çais"