#include <iostream>
#include <fstream>
#include "../library/proses.h"

int main ()
{
  Proses proses;
  proses.pemasukan();
  proses.pengeluaran();
  proses.uang_saat_ini();
  return 0;
}