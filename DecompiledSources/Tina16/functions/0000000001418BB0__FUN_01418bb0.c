/* Ghidra address: 01418bb0 */
/* Ghidra symbol: FUN_01418bb0 */


void FUN_01418bb0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0xf80,*(undefined8 *)(param_1 + 0xf90));
  FUN_00414ad0(param_1 + 0xf90,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

