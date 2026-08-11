/* Ghidra address: 00f7f200 */
/* Ghidra symbol: FUN_00f7f200 */


void FUN_00f7f200(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x20,local_res10[0]);
  *(undefined4 *)(param_1 + 0x34) = param_3;
  FUN_00414480(local_res10);
  return;
}

