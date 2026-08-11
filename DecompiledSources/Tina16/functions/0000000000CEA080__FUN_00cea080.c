/* Ghidra address: 00cea080 */
/* Ghidra symbol: FUN_00cea080 */


undefined8 FUN_00cea080(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == param_2) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x38);
    iVar4 = 0;
    if (lVar1 != 0) {
      iVar4 = *(int *)(lVar1 + -4);
    }
    lVar2 = *(longlong *)(param_1 + 0x38);
    iVar5 = 0;
    if (lVar2 != 0) {
      iVar5 = *(int *)(lVar2 + -4);
    }
    if (iVar5 < iVar4) {
      uVar3 = 1;
    }
    else {
      iVar4 = 0;
      if (lVar2 != 0) {
        iVar4 = *(int *)(lVar2 + -4);
      }
      iVar5 = 0;
      if (lVar1 != 0) {
        iVar5 = *(int *)(lVar1 + -4);
      }
      if (iVar4 == iVar5) {
        if (*(double *)(param_1 + 0x50) < *(double *)(param_2 + 0x50) ||
            *(double *)(param_1 + 0x50) == *(double *)(param_2 + 0x50)) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
  }
  return uVar3;
}

