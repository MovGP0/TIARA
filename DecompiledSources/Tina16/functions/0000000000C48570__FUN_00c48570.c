/* Ghidra address: 00c48570 */
/* Ghidra symbol: FUN_00c48570 */


void FUN_00c48570(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    FUN_00414ad0(param_1 + 0x80,local_res10[0]);
  }
  else {
    FUN_00416cd0(param_1 + 0x80,3,*(undefined8 *)(param_1 + 0x80),&LAB_00c48624,local_res10[0]);
  }
  FUN_00c4c420(local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

