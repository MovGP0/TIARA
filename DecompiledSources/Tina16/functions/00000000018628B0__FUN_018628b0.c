/* Ghidra address: 018628b0 */
/* Ghidra symbol: FUN_018628b0 */


void FUN_018628b0(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  undefined8 local_20;
  
  local_30 = auStack_58;
  (**(code **)(*param_2 + 0x18))(param_2,&local_24,4);
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b8ba0(local_20,param_2,(longlong)local_24);
  FUN_004b6dc0(local_20,0);
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0xc0))(*(longlong **)(param_1 + 0x48),local_20);
  FUN_00410f20(local_20);
  return;
}

