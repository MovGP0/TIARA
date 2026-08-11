/* Ghidra address: 01ac5d40 */
/* Ghidra symbol: FUN_01ac5d40 */


double FUN_01ac5d40(longlong param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  short sVar2;
  double dVar3;
  
  dVar3 = 0.0;
  if (param_2 <= (ushort)(param_3 - 1)) {
    sVar2 = ((param_3 - 1) - param_2) + 1;
    uVar1 = param_2;
    do {
      dVar3 = dVar3 + *(double *)(param_1 + (ulonglong)uVar1 * 8);
      uVar1 = uVar1 + 1;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  }
  return dVar3 / (double)(int)((uint)param_3 - (uint)param_2);
}

