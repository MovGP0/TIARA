/* Ghidra address: 013b9e80 */
/* Ghidra symbol: FUN_013b9e80 */


void FUN_013b9e80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0xd8,local_res10[0]);
  FUN_00414ad0(param_1 + 0x110,local_res10[0]);
  *(undefined8 *)(param_1 + 8) = param_3;
  FUN_013b9f80();
  FUN_00414480(local_res10);
  return;
}

