/* Ghidra address: 00687650 */
/* Ghidra symbol: FUN_00687650 */


void FUN_00687650(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00652810(param_1,param_2);
  uVar1 = FUN_004113f0(param_2,&PTR_FUN_006718f0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}

