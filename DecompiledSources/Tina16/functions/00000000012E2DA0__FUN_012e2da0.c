/* Ghidra address: 012e2da0 */
/* Ghidra symbol: FUN_012e2da0 */


void FUN_012e2da0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_006042a0(*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x318),local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

