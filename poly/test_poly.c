#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "poly.h"

void test_egalite_polynome()
{
  p_polyf_t p1, p2;
  p1 = lire_polynome_float("p1");
  p2 = lire_polynome_float("p2");

  assert(egalite_polynome(p1, p1));
  assert(egalite_polynome(p2, p2));
  assert(!egalite_polynome(p1, p2));
}

int main(int argc, char **argv)
{
  p_polyf_t p1, p2;

  if (argc != 3)
  {
    fprintf(stderr, "deux paramètres (polynomes,fichiers) sont à passer \n");
    exit(-1);
  }

  p1 = lire_polynome_float(argv[1]);
  p2 = lire_polynome_float(argv[2]);

  ecrire_polynome_float(p1);
  ecrire_polynome_float(p2);

  test_egalite_polynome();
  /*
    ajouter du code pour tester les fonctions
    sur les polynomes
  */
}