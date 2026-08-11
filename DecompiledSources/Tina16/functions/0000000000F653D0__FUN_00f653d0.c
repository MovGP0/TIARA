/* Ghidra address: 00f653d0 */
/* Ghidra symbol: FUN_00f653d0 */


void FUN_00f653d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_005fcd80(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),local_res10[0]);
  FUN_005fce30(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),param_3);
  FUN_00414480(local_res10);
  return;
}

