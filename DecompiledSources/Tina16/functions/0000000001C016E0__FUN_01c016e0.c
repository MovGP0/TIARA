/* Ghidra address: 01c016e0 */
/* Ghidra symbol: FUN_01c016e0 */


undefined8 FUN_01c016e0(longlong *param_1,longlong param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if (param_2 == 0) {
    if (param_3 != '\0') {
      uVar5 = (**(code **)(*param_1 + 0x350))(param_1);
    }
  }
  else {
    cVar2 = FUN_01c019e0(param_1);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      iVar3 = FUN_004b1870(param_2);
      lVar4 = FUN_01c019a0(param_1);
      bVar1 = iVar3 < *(int *)(*(longlong *)(lVar4 + 0x10) + 0x10) + -1;
    }
    if (bVar1) {
      uVar5 = FUN_01c019a0(param_1);
      iVar3 = FUN_004b1870(param_2);
      uVar5 = FUN_01bfb960(uVar5,iVar3 + 1);
    }
    else if (param_3 != '\0') {
      iVar3 = (**(code **)(*param_1 + 0x2e8))(param_1);
      if (1 < iVar3) {
        uVar5 = FUN_01c019a0(param_1);
        uVar5 = FUN_01bfb960(uVar5,0);
      }
    }
  }
  return uVar5;
}

