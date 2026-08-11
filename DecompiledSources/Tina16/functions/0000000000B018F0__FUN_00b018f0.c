/* Ghidra address: 00b018f0 */
/* Ghidra symbol: FUN_00b018f0 */


void FUN_00b018f0(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00b04450(*(undefined8 *)(param_1 + 0x730),local_20);
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x90))(*(longlong **)(param_1 + 0x740));
  FUN_00b01560(param_1,local_20[0],1);
  FUN_00414480(local_20);
  return;
}

