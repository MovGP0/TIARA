/* Ghidra address: 012b07b0 */
/* Ghidra symbol: FUN_012b07b0 */


void FUN_012b07b0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_012b04e0(param_1,6,1);
  FUN_012ae910(param_1,6,1,0);
  if (*(char *)(param_1 + 0xdd0) != '\0') {
    lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
    if (lVar1 == *(longlong *)(param_1 + 0xdd8)) {
      FUN_012ae470(param_1,1,0);
      return;
    }
  }
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_01105a20);
  uVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  FUN_010ec870(uVar2,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x110),1,1);
  if (*(char *)(param_1 + 0xdd0) != '\0') {
    FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),0);
  }
  return;
}

