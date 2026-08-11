/* Ghidra address: 0177d310 */
/* Ghidra symbol: FUN_0177d310 */


void FUN_0177d310(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x418,local_res10[0]);
  *(undefined1 *)(param_1 + 0x412) = param_3;
  FUN_00414480(local_res10);
  return;
}

