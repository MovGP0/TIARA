/* Ghidra address: 01540000 */
/* Ghidra symbol: FUN_01540000 */


undefined8 FUN_01540000(longlong param_1,int param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  *param_3 = -1;
  lVar1 = *(longlong *)(param_1 + 8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_01d347d0(lVar1,iVar4);
      if (*(int *)(lVar2 + 8) == param_2) {
        uVar3 = 1;
        *param_3 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar3;
}

