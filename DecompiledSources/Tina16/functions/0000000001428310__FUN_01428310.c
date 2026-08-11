/* Ghidra address: 01428310 */
/* Ghidra symbol: FUN_01428310 */


double FUN_01428310(int param_1)

{
  double dVar1;
  double dVar2;
  
  if (param_1 < 2) {
    dVar1 = 1.0;
  }
  else {
    DAT_0210c550 = 1.0;
    dVar1 = 1.0;
    if (1 < param_1) {
      param_1 = param_1 + -1;
      do {
        dVar2 = dVar1;
        DAT_0210c558 = DAT_0210c550;
        dVar1 = DAT_0210c550 + dVar2;
        param_1 = param_1 + -1;
        DAT_0210c550 = dVar2;
      } while (param_1 != 0);
    }
  }
  return dVar1;
}

