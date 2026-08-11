/* Ghidra address: 00747120 */
/* Ghidra symbol: FUN_00747120 */


void FUN_00747120(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      lVar1 = FUN_00747090(param_1,iVar3);
      if (*(longlong *)(lVar1 + 0x18) == param_2) {
        uVar2 = FUN_00747090(param_1,iVar3);
        FUN_00747590(uVar2,0);
        FUN_004b25e0(param_1,iVar3);
        return;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

