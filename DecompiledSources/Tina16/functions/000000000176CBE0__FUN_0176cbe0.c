/* Ghidra address: 0176cbe0 */
/* Ghidra symbol: FUN_0176cbe0 */


void FUN_0176cbe0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01768bd0(param_1,local_res10[0]);
  uVar1 = FUN_0175f5e0(*(undefined8 *)PTR_DAT_020016d0,*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  FUN_00414480(local_res10);
  return;
}

