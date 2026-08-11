/* Ghidra address: 00e15e10 */
/* Ghidra symbol: FUN_00e15e10 */


double FUN_00e15e10(int param_1)

{
  short sVar1;
  double dVar2;
  
  if (param_1 == -1) {
    dVar2 = 0.0;
  }
  else {
    sVar1 = (short)((uint)param_1 >> 0x10);
    if (0xc < sVar1) {
      sVar1 = 0xc;
    }
    dVar2 = (double)(int)(short)param_1 / *(double *)(&DAT_01edc528 + (longlong)sVar1 * 8);
  }
  return dVar2;
}

