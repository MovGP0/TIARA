/* Ghidra address: 00702dc0 */
/* Ghidra symbol: FUN_00702dc0 */


void FUN_00702dc0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_0064b4d0(param_1,param_2);
  uVar1 = FUN_004113f0(param_2,&PTR_FUN_006cb0d0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}

