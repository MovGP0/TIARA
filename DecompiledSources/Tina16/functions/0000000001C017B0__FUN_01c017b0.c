/* Ghidra address: 01c017b0 */
/* Ghidra symbol: FUN_01c017b0 */


undefined8 FUN_01c017b0(longlong *param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_2 == 0) {
    if (param_3 != '\0') {
      uVar3 = (**(code **)(*param_1 + 0x298))(param_1);
    }
  }
  else {
    iVar1 = FUN_004b1870(param_2);
    if (iVar1 < 1) {
      if (param_3 != '\0') {
        iVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
        if (1 < iVar1) {
          uVar3 = FUN_01c019a0(param_1);
          lVar2 = FUN_01c019a0(param_1);
          uVar3 = FUN_01bfb960(uVar3,*(int *)(*(longlong *)(lVar2 + 0x10) + 0x10) + -1);
        }
      }
    }
    else {
      uVar3 = FUN_01c019a0(param_1);
      iVar1 = FUN_004b1870(param_2);
      uVar3 = FUN_01bfb960(uVar3,iVar1 + -1);
    }
  }
  return uVar3;
}

