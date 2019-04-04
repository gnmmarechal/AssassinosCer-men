/*******************************************************************************

 Ficheiro de interface do Tipo de Dados Abstracto FRACTION (fraction.h). A fração 
 é composta pelo numerador e pelo denominador. No caso de uma fração negativa, o
 sinal deve estar associado ao numerador, sendo que o denominador deve ser sempre
 positivo. A implementação providencia um construtor para criar e inicializar uma
 fração. É da responsabilidade da aplicação, invocar o destrutor para libertar a
 memória atribuída ao objecto. O módulo providencia um controlo centralizado de 
 erro, disponibilizando uma função para obter o último erro ocorrido, uma função 
 para obter uma mensagem de erro elucidativa e uma função para limpar o erro.

 Autor : António Manuel Adrego da Rocha    Data : Março de 2019

 Interface file of the abstract data type FRACTION (fraction.h). A fraction is
 composed of numerator and denominator. In the case of a negative fraction, the 
 negative sign must be associated with the numerator, and the denominator should
 always be positive. The implementation provides a constructor to initialize 
 a fraction. The application has the responsibility to invoke the destructor, in
 order to release the dynamic memory allocated the object. The data-type has a 
 central control error mechanism, providing functions for obtaining the last error
 occurred and the correspondent error message and a function to clean the error.

*******************************************************************************/

#ifndef _FRACTION
#define _FRACTION

/************ Definição do Tipo Ponteiro para um Número Fracionário ***********/

typedef struct fraction *PtFraction;

/************************ Definição de Códigos de Erro ************************/

#define	OK          0	/* operação realizada com sucesso - operation with success */
#define	NO_FRACTION 1	/* a(s) fração (frações) não existe(m) - fraction(s) do not exist */
#define	NO_MEM      2	/* memória esgotada - out of memory */
#define	ZERO_DIV    3	/* divisão por zero - division by zero */

/************************* Protótipos dos Subprogramas ************************/

void FractionClearError (void);
/*******************************************************************************
 Inicialização do erro. Error initialization.
*******************************************************************************/

int FractionError (void);
/*******************************************************************************
 Devolve o código do último erro ocorrido. Returns the error code.
*******************************************************************************/

char *FractionErrorMessage (void);
/*******************************************************************************
 Devolve uma mensagem esclarecedora da causa do último erro ocorrido.
 Returns an error message.
*******************************************************************************/

PtFraction FractionCreate (int pnum, int pden);
/*******************************************************************************
 Cria a fraçao pnum/pden. O denominador não pode ser nulo e o sinal negativo deve
 ser sempre associado ao numerador. Devolve a referência da nova fração ou NULL,
 caso não consiga criar a fração, por falta de memória. Valores de erro: OK, 
 NO_FRACTION ou NO_MEM.

 Creates the fraction pnum/pden. The denominator cannot be zero and the negative 
 sign must always be associated to the numerator. Returns the reference of the new
 fraction or NULL for lack of memory. Error codes: OK, NO_FRACTION or NO_MEM.
*******************************************************************************/

int  FractionGetNumerator (PtFraction pfrac);
/*******************************************************************************
 Devolve o numerador da fração. Valores de erro: OK ou NO_FRACTION.

 Returns the numerator of the fraction. Error codes: OK or NO_FRACTION.
*******************************************************************************/

int  FractionGetDenominator (PtFraction pfrac);
/*******************************************************************************
 Devolve o denominador da fração. Valores de erro: OK ou NO_FRACTION.

 Returns the numerator of the fraction. Error codes: OK or NO_FRACTION.
*******************************************************************************/

void FractionDestroy (PtFraction *pfrac);
/*******************************************************************************
 Destruição de uma fração. Valores de erro: OK ou NO_FRACTION.

 Destroys the fraction and releases the memory. Error codes: OK or NO_FRACTION.
*******************************************************************************/

PtFraction FractionCopy (PtFraction pfrac);
/*******************************************************************************
 Copia a fração. Devolve a referência da nova fração ou NULL, caso não consiga
 fazer a cópia por falta de memória. Valores de erro: OK, NO_FRACTION ou NO_MEM.

 Copies the fraction. Returns the new fraction or NULL for lack of memory.
 Error codes: OK, NO_FRACTION or NO_MEM.
*******************************************************************************/

PtFraction FractionSymmetrical (PtFraction pfrac);
/*******************************************************************************
 Cria a fração simétrica. Devolve a referência da nova fração ou NULL, 
 caso não consiga fazer a cópia. Valores de erro: OK, NO_FRACTION ou NO_MEM.

 Creates the symemtrical fraction. Returns the new fraction or NULL for lack of
 memory. Error codes: OK, NO_FRACTION or NO_MEM.
*******************************************************************************/

PtFraction FractionAddition (PtFraction pfrac1, PtFraction pfrac2);
/*******************************************************************************
 Adição de duas frações. A fração resultante deve ser reduzida ao menor denominador 
 possível. Valores de erro: OK, NO_FRACTION ou NO_MEM.

 Addition of two fractions. The resulting fraction must be reduced to the smallest
 denominator. Error codes: OK, NO_FRACTION or NO_MEM.
*******************************************************************************/

PtFraction FractionSubtraction (PtFraction pfrac1, PtFraction pfrac2);
/*******************************************************************************
 Subtração de duas frações. A fração resultante deve ser reduzida ao menor 
 denominador possível. Valores de erro: OK, NO_FRACTION ou NO_MEM.

 Subtraction of two fractions. The resulting fraction must be reduced to the 
 smallest denominator. Error codes: OK, NO_FRACTION or NO_MEM.
*******************************************************************************/

PtFraction FractionMultiplication (PtFraction pfrac1, PtFraction pfrac2);
/*******************************************************************************
 Multiplicação de duas frações. A fração resultante deve ser reduzida ao menor 
 denominador possível. Valores de erro: OK, NO_FRACTION ou NO_MEM.

 Multiplication of two fractions. The resulting fraction must be reduced to the 
 smallest denominator. Error codes: OK, NO_FRACTION or NO_MEM.
*******************************************************************************/

PtFraction FractionDivision (PtFraction pfrac1, PtFraction pfrac2);
/*******************************************************************************
 Divisão de duas frações. A fração resultante deve ser reduzida ao menor 
 denominador possível.Valores de erro: OK, NO_FRACTION, ZERO_DIV ou NO_MEM.

 Division of two fractions. The resulting fraction must be reduced to the 
 smallest denominator. Error codes: OK, NO_FRACTION, ZERO_DIV or NO_MEM.
*******************************************************************************/

int FractionIsNull (PtFraction pfrac);
/*******************************************************************************
 Verifica se a fração é nula (ou seja se o numerador é zero). Devolve 1 em caso
 afirmativo e 0 em caso contrário. Valores de erro: OK ou NO_FRACTION.

 Verifies if fraction pfrac is zero (that is if the numerator is zero). Returns 1
 in affirmative case and 0 otherwise. Error codes: OK or NO_FRACTION.
*******************************************************************************/

int FractionEquals (PtFraction pfrac1, PtFraction pfrac2);
/*******************************************************************************
 Verifica se duas frações são iguais. Devolve 1 em caso afirmativo e 0 em caso
 contrário. Valores de erro: OK ou NO_FRACTION.

 Verifies if two fractions are equal. Returns 1 in affirmative case and 0 otherwise.
 Error codes: OK or NO_FRACTION.
*******************************************************************************/

#endif

