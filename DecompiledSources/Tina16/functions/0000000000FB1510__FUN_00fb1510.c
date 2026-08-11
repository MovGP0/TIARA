/* Ghidra address: 00fb1510 */
/* Ghidra symbol: FUN_00fb1510 */


void FUN_00fb1510(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0072d440(local_res10[0],1,4,0);
  *(undefined1 *)(param_1 + 0x730) = 1;
  FUN_00414480(local_res10);
  return;
}

