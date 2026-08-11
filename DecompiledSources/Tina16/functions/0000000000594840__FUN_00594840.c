/* Ghidra address: 00594840 */
/* Ghidra symbol: FUN_00594840 */


ulonglong FUN_00594840(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + -4);
  }
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + -4);
  }
  uVar6 = iVar5 - iVar1;
  iVar1 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + -4);
  }
  if ((iVar1 < iVar5) && (iVar5 = 0, param_3 != 0)) {
    iVar5 = *(int *)(param_3 + -4);
  }
  uVar2 = FUN_00416740(param_2);
  uVar3 = FUN_00416740(param_3);
  uVar4 = FUN_005932e0(uVar2,uVar3,iVar5 * 2);
  if ((int)uVar4 == 0) {
    uVar4 = (ulonglong)uVar6;
  }
  return uVar4;
}

