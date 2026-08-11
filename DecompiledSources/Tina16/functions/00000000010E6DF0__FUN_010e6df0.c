/* Ghidra address: 010e6df0 */
/* Ghidra symbol: FUN_010e6df0 */


double FUN_010e6df0(double param_1,double param_2,char param_3)

{
  double dVar1;
  double dVar2;
  
  if (param_3 == '\0') {
    dVar2 = 20.0;
  }
  else {
    dVar2 = 10.0;
  }
  if (param_1 <= 0.0) {
    dVar2 = -100.0;
  }
  else if (param_2 <= 0.0) {
    dVar1 = (double)FUN_00c42800();
    dVar2 = dVar2 * dVar1;
  }
  else {
    dVar1 = (double)FUN_00c42800(param_1 / param_2);
    dVar2 = dVar2 * dVar1;
  }
  return dVar2;
}

