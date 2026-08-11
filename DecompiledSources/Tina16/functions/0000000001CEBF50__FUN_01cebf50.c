/* Ghidra address: 01cebf50 */
/* Ghidra symbol: FUN_01cebf50 */


void FUN_01cebf50(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  lVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 8),&PTR_FUN_01ae9d80);
  FUN_01cec530(param_1,lVar2 + 0x798,lVar2,*(undefined8 *)(lVar2 + 0x760));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))(*(longlong **)(param_1 + 0x38));
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
                        (*(longlong **)(param_1 + 0x38),iVar4 + -1);
      uVar3 = FUN_004113f0(uVar3,&PTR_FUN_01d282a8);
      FUN_00410f20(uVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

