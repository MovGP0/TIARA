/* Ghidra address: 00a73120 */
/* Ghidra symbol: FUN_00a73120 */


void FUN_00a73120(longlong param_1,longlong param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (param_3 - 1U < 0x80000000) {
    do {
      sVar1 = *(short *)(param_2 + (longlong)iVar3 * 2);
      if ((((sVar1 != 2) && (sVar1 != 4)) && (sVar1 != 8)) &&
         (*(int *)(param_1 + 0x14) < iVar2 + -1)) {
        *(short *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x14) * 2) = sVar1;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
      iVar3 = iVar3 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

