/* Ghidra address: 00bd4950 */
/* Ghidra symbol: FUN_00bd4950 */


void FUN_00bd4950(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_00409620(*(longlong *)(param_1 + 0x90) + 0x40,(longlong)(*(int *)(param_1 + 0xc0) * 4));
  iVar4 = *(int *)(param_1 + 0xc0);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = (longlong)iVar2;
      iVar1 = FUN_00bd4c80(*(undefined8 *)(param_1 + 0x90),*(longlong *)(param_1 + 0xb8) + lVar3 * 2
                           ,1);
      if (iVar1 == param_2) {
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x40) + lVar3 * 4) = param_2;
      }
      else {
        iVar1 = FUN_00526350((double)iVar1 / (double)param_2);
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x40) + lVar3 * 4) = iVar1 * param_2;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

