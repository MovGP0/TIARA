/* Ghidra address: 014c6880 */
/* Ghidra symbol: FUN_014c6880 */


char FUN_014c6880(double param_1,undefined4 param_2,char param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_00dd07b0(param_2);
  if (param_3 == '\x02') {
    dVar2 = 0.0;
  }
  else {
    dVar2 = 1.0 / (*(double *)(PTR_DAT_02001d90 + (ulonglong)(byte)param_2 * 8 + -8) * 2.0);
  }
  if (param_1 <= dVar1 + dVar2) {
    if (param_1 <= dVar1 - dVar2) {
      param_3 = '\0';
    }
  }
  else {
    param_3 = '\x01';
  }
  return param_3;
}

