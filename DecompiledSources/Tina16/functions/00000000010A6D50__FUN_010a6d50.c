/* Ghidra address: 010a6d50 */
/* Ghidra symbol: FUN_010a6d50 */


void FUN_010a6d50(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x958),local_res10[0]);
  FUN_010a3d40(param_1);
  FUN_00414480(local_res10);
  return;
}

