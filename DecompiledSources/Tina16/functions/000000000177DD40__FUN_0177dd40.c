/* Ghidra address: 0177dd40 */
/* Ghidra symbol: FUN_0177dd40 */


void FUN_0177dd40(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x100,local_res10[0]);
  FUN_0177ddf0(param_1,*(undefined8 *)(param_1 + 0x400),*(undefined8 *)(param_1 + 0x428),
               local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

