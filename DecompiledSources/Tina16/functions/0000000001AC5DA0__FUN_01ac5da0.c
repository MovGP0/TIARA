/* Ghidra address: 01ac5da0 */
/* Ghidra symbol: FUN_01ac5da0 */


void FUN_01ac5da0(longlong param_1,ushort param_2,ushort param_3,double param_4)

{
  ushort uVar1;
  short sVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = 0.0;
  if (param_2 <= (ushort)(param_3 - 1)) {
    sVar2 = ((param_3 - 1) - param_2) + 1;
    uVar1 = param_2;
    do {
      dVar4 = *(double *)(param_1 + (ulonglong)uVar1 * 8) - param_4;
      dVar3 = dVar3 + dVar4 * dVar4;
      uVar1 = uVar1 + 1;
      sVar2 = sVar2 + -1;
    } while (sVar2 != 0);
  }
  FUN_0040c760(dVar3 / (double)(int)((uint)param_3 - (uint)param_2));
  return;
}

