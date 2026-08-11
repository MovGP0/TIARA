/* Ghidra address: 01a2f520 */
/* Ghidra symbol: FUN_01a2f520 */


void FUN_01a2f520(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  *(undefined4 *)(param_1 + 0x70c) = param_3;
  *(undefined8 *)(param_1 + 0x710) = param_2;
  FUN_00414ad0(param_1 + 0x718,local_res20);
  FUN_00414480(&local_res20);
  return;
}

