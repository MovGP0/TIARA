/* Ghidra address: 00a72fc0 */
/* Ghidra symbol: FUN_00a72fc0 */


void FUN_00a72fc0(longlong param_1,longlong param_2,int param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 - 1U < 0x80000000) {
    do {
      sVar1 = *(short *)(param_2 + (longlong)iVar2 * 2);
      if ((sVar1 != 2) && (sVar1 != 4)) {
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

