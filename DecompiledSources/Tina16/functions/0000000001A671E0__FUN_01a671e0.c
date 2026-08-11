/* Ghidra address: 01a671e0 */
/* Ghidra symbol: FUN_01a671e0 */


void FUN_01a671e0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0072d440(local_res10[0],1,4,0);
  *(undefined1 *)(param_1 + 0x728) = 1;
  FUN_00414480(local_res10);
  return;
}

