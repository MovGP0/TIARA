/* Ghidra address: 01b59040 */
/* Ghidra symbol: FUN_01b59040 */


void FUN_01b59040(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_011061a0);
  uVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  FUN_010ec870(uVar2,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x150),1,1);
  FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),0);
  return;
}

