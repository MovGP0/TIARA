/* Ghidra address: 00f96260 */
/* Ghidra symbol: FUN_00f96260 */


void FUN_00f96260(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0072d440(local_res10[0],1,4,0);
  *(undefined1 *)(param_1 + 0x6f8) = 1;
  FUN_00414480(local_res10);
  return;
}

