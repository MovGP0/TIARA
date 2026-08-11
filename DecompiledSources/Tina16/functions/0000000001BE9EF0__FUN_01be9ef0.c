/* Ghidra address: 01be9ef0 */
/* Ghidra symbol: FUN_01be9ef0 */


void FUN_01be9ef0(longlong *param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(byte *)(param_1 + 0x6c) != param_2) {
    iVar3 = *(int *)((longlong)param_1 + 0x9c);
    if (((param_2 & 2) == 0) || ((*(byte *)(param_1 + 0x6c) & 2) != 0)) {
      if (((param_2 & 2) == 0) && ((*(byte *)(param_1 + 0x6c) & 2) != 0)) {
        iVar3 = iVar3 + -1;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
    if (((param_2 & 8) == 0) || ((*(byte *)(param_1 + 0x6c) & 8) != 0)) {
      if (((param_2 & 8) == 0) && ((*(byte *)(param_1 + 0x6c) & 8) != 0)) {
        iVar3 = iVar3 + -1;
      }
    }
    else {
      iVar3 = iVar3 + 1;
    }
    uVar1 = FUN_01c07120(param_1);
    lVar2 = FUN_01c01230(uVar1);
    if ((lVar2 != 0) && (param_1 == *(longlong **)(lVar2 + 0x80))) {
      iVar3 = iVar3 + 1;
    }
    *(byte *)(param_1 + 0x6c) = param_2;
    FUN_0064cc50(param_1,iVar3);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

