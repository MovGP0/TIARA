/* Ghidra address: 00f42d60 */
/* Ghidra symbol: FUN_00f42d60 */


void FUN_00f42d60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00b0ab70(*(undefined8 *)(param_1 + 0x6d0),local_res10[0],param_3);
  FUN_00414480(local_res10);
  return;
}

