/* Ghidra address: 01d6c510 */
/* Ghidra symbol: FUN_01d6c510 */


double FUN_01d6c510(double param_1,undefined2 *param_2,char *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte local_1b;
  
  local_1b = (byte)((ushort)*param_2 >> 8);
  dVar1 = *(double *)(PTR_DAT_02002240 + (ulonglong)local_1b * 0x10 + -0x10);
  dVar2 = *(double *)(PTR_DAT_02002240 + (ulonglong)local_1b * 0x10 + -8);
  if (*param_3 == '\0') {
    dVar3 = 0.8;
  }
  else {
    dVar3 = 0.0;
  }
  if (dVar3 + 0.85 < param_1) {
    if (param_1 < dVar3 + 0.8499999) {
      dVar3 = dVar1 + ((dVar2 - dVar1) * ((param_1 - dVar3) - 0.85)) / -9.999999994736442e-08;
      *param_4 = (dVar2 - dVar1) / -9.999999994736442e-08;
    }
    else {
      *param_4 = 0.0;
      dVar3 = dVar2;
    }
  }
  else {
    *param_4 = 0.0;
    dVar3 = dVar1;
  }
  if (*param_3 == '\0') {
    if (1.6499999 < param_1) {
      *param_3 = '\x01';
    }
  }
  else if (param_1 < 0.85) {
    *param_3 = '\0';
  }
  return dVar3;
}

