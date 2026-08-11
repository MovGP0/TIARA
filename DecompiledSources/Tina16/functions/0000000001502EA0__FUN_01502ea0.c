/* Ghidra address: 01502ea0 */
/* Ghidra symbol: FUN_01502ea0 */


void FUN_01502ea0(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar3);
      uVar2 = FUN_004113f0(uVar2,&PTR_FUN_01106728);
      FUN_01107ce0(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  FUN_010dbcf0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

