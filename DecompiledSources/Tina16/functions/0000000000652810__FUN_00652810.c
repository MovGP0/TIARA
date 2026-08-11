/* Ghidra address: 00652810 */
/* Ghidra symbol: FUN_00652810 */


void FUN_00652810(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_0064b4d0(param_1,param_2);
  uVar1 = FUN_004113f0(param_2,&PTR_FUN_00640c18);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}

