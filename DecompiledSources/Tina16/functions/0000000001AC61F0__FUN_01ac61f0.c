/* Ghidra address: 01ac61f0 */
/* Ghidra symbol: FUN_01ac61f0 */


void FUN_01ac61f0(longlong param_1,longlong param_2,ushort param_3,short param_4,double param_5,
                 double param_6,int param_7)

{
  short *psVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  short sVar4;
  
  if (param_3 <= (ushort)(param_4 - 1U)) {
    sVar4 = ((param_4 - 1U) - param_3) + 1;
    do {
      uVar2 = FUN_0040c840((*(double *)(param_1 + (ulonglong)param_3 * 8) - param_5) /
                           ((param_6 - param_5) / (double)param_7));
      uVar3 = FUN_00b905f0(uVar2,param_7 + -1);
      psVar1 = (short *)(param_2 + (uVar3 & 0xffff) * 2);
      *psVar1 = *psVar1 + 1;
      param_3 = param_3 + 1;
      sVar4 = sVar4 + -1;
    } while (sVar4 != 0);
  }
  return;
}

