/* Ghidra address: 00623cf0 */
/* Ghidra symbol: FUN_00623cf0 */


void FUN_00623cf0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x10),&PTR_FUN_00620450);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  FUN_006219e0(param_1);
  return;
}

