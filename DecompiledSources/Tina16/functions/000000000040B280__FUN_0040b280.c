/* Ghidra address: 0040b280 */
/* Ghidra symbol: FUN_0040b280 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_0040b280(double param_1)

{
  longlong lVar1;
  int iVar2;
  double dVar3;
  ushort uStackX_e;
  
  dVar3 = DAT_01dbaab0;
  uStackX_e = (ushort)((ulonglong)param_1 >> 0x30);
  if (param_1 == 0.0) {
    param_1 = 0.0;
  }
  else if (((ulonglong)param_1 & 0x7ff0000000000000) != 0) {
    if (((uStackX_e & 0x7ff0) == 0x7ff0) ||
       (_DAT_01dbaaa8 <= (double)(~_DAT_01dbaac0 & (ulonglong)param_1))) {
      param_1 = (double)FUN_0040af80();
      param_1 = param_1 - dVar3;
    }
    else {
      iVar2 = (int)(param_1 * _DAT_01dbaa90 +
                   (double)((ulonglong)DAT_01dbaa98 | _DAT_01dbaac0 & (ulonglong)param_1));
      lVar1 = (longlong)iVar2 * 0x10;
      param_1 = param_1 - (double)iVar2 * _DAT_01dbaaa0;
      dVar3 = param_1 * param_1;
      dVar3 = ((DAT_01dbaa88 * dVar3 + DAT_01dbaa78) * dVar3 +
               (DAT_01dbaa80 * dVar3 + DAT_01dbaa70) * param_1 + DAT_01dbaa98) * dVar3;
      param_1 = *(double *)(&DAT_01dba5d8 + lVar1) * (param_1 + dVar3) +
                *(double *)(&DAT_01dba5e0 + lVar1) + dVar3 + param_1 +
                *(double *)(&DAT_01dba5d8 + lVar1);
    }
  }
  return param_1;
}

