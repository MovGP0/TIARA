/* Ghidra address: 013bbec0 */
/* Ghidra symbol: FUN_013bbec0 */


void FUN_013bbec0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416cd0(param_1 + 0xb8,3,*(undefined8 *)(param_1 + 0xb8),local_res10[0],&LAB_013bbf44);
  FUN_00414480(local_res10);
  return;
}

