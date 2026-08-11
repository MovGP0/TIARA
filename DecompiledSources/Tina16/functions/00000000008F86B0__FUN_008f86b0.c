/* Ghidra address: 008f86b0 */
/* Ghidra symbol: FUN_008f86b0 */


void FUN_008f86b0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  (**(code **)(*param_1 + 0x68))(param_1,local_res10[0]);
  FUN_00414520(local_res10);
  return;
}

