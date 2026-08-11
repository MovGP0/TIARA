/* Ghidra address: 01cc5c70 */
/* Ghidra symbol: FUN_01cc5c70 */


undefined8 FUN_01cc5c70(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x50);
    if (iVar2 < *(int *)(lVar3 + 0x10)) {
      uVar4 = FUN_01d347d0(lVar3,iVar2);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0x50);
      *piVar1 = *piVar1 + 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

