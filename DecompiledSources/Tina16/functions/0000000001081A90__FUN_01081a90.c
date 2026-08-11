/* Ghidra address: 01081a90 */
/* Ghidra symbol: FUN_01081a90 */


void FUN_01081a90(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  *(undefined4 *)(param_1 + 0xad8) = param_2;
  *(undefined4 *)(param_1 + 0xadc) = param_2;
  FUN_00414ad0(param_1 + 0xb38,local_res18[0]);
  FUN_00414480(local_res18);
  return;
}

