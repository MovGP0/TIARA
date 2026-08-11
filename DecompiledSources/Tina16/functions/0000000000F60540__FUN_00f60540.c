/* Ghidra address: 00f60540 */
/* Ghidra symbol: FUN_00f60540 */


bool FUN_00f60540(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  bVar5 = false;
  uVar3 = param_2 - 1;
  uVar4 = 0;
  if (uVar3 < 0x80000000) {
    do {
      if ((((*(int *)(param_1 + 4 + (longlong)(int)uVar4 * 8) <= param_4) &&
           (param_4 < *(int *)(param_1 + 4 + (longlong)(int)uVar3 * 8))) ||
          ((*(int *)(param_1 + 4 + (longlong)(int)uVar3 * 8) <= param_4 &&
           (param_4 < *(int *)(param_1 + 4 + (longlong)(int)uVar4 * 8))))) &&
         (iVar1 = *(int *)(param_1 + (longlong)(int)uVar4 * 8),
         iVar2 = *(int *)(param_1 + 4 + (longlong)(int)uVar4 * 8),
         (double)param_3 <
         (double)((*(int *)(param_1 + (longlong)(int)uVar3 * 8) - iVar1) * (param_4 - iVar2)) /
         (double)(*(int *)(param_1 + 4 + (longlong)(int)uVar3 * 8) - iVar2) + (double)iVar1)) {
        bVar5 = bVar5 == false;
      }
      param_2 = param_2 + -1;
      uVar3 = uVar4;
      uVar4 = uVar4 + 1;
    } while (param_2 != 0);
  }
  return bVar5;
}

