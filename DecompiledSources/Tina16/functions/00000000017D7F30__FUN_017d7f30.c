/* Ghidra address: 017d7f30 */
/* Ghidra symbol: FUN_017d7f30 */


void FUN_017d7f30(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8) + -1;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18 + 8);
      if (-1 < *(short *)(lVar1 + (longlong)param_2 * 2)) {
        lVar2 = FUN_017d9a80(param_1,iVar3,param_2);
        *(int *)(lVar2 + 0x10) = param_3;
      }
      if (-1 < *(short *)(lVar1 + (longlong)param_3 * 2)) {
        lVar2 = FUN_017d9a80(param_1,iVar3,param_3);
        *(int *)(lVar2 + 0x10) = param_2;
      }
      FUN_017d7270(lVar1 + (longlong)param_2 * 2,lVar1 + (longlong)param_3 * 2,2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

