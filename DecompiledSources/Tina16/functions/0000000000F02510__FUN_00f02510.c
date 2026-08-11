/* Ghidra address: 00f02510 */
/* Ghidra symbol: FUN_00f02510 */


void FUN_00f02510(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x4a4);
  if (iVar3 != param_2) {
    if (iVar3 < param_2) {
      for (; iVar3 < param_2; iVar3 = iVar3 + 1) {
        FUN_00f03850(*(undefined8 *)(param_1 + 0x660));
      }
    }
    else {
      for (; param_2 < iVar3; iVar3 = iVar3 + -1) {
        uVar1 = *(undefined8 *)(param_1 + 0x660);
        iVar2 = FUN_00f03870(uVar1);
        uVar1 = FUN_00f03860(uVar1,iVar2 + -1);
        FUN_00410f20(uVar1);
      }
    }
  }
  FUN_008483e0(param_1,param_2);
  return;
}

