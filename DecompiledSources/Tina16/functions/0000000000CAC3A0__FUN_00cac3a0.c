/* Ghidra address: 00cac3a0 */
/* Ghidra symbol: FUN_00cac3a0 */


void FUN_00cac3a0(longlong param_1,longlong param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x150) != param_2) {
    FUN_0041b840(&local_10,param_2);
    FUN_0086f700(&local_10,0);
    FUN_0041b840(param_1 + 0x150,local_10);
  }
  FUN_0041b800(&local_10);
  return;
}

