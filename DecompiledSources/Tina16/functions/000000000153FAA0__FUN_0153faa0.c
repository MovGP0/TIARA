/* Ghidra address: 0153faa0 */
/* Ghidra symbol: FUN_0153faa0 */


undefined8 FUN_0153faa0(longlong param_1,int param_2,undefined8 *param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  *param_4 = -1;
  *param_3 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = FUN_01d347d0(param_1,iVar4);
      if (*(int *)(lVar1 + 8) == param_2) {
        uVar3 = 1;
        uVar2 = FUN_01d347d0(param_1,iVar4);
        *param_3 = uVar2;
        *param_4 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar3;
}

