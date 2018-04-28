typedef struct louca{
  char tipo;
  char comp;
  float preco;
  int quantidade;
} Louca;

void *criarlouca( Louca *p, char tipo, char comp, float preco, int quantidade);
void *vertipo( Louca *p, char tipo);
void *vercomp(Louca *p,char comp);
void *verpreco( Louca *p, float preco, int quantidade);
void *verquantidade( Louca *p, int quantidade);
void imprime(Louca *p);
Louca * exclui(Louca *b);
