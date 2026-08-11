/* Ghidra address: 010f0dc0 */
/* Ghidra symbol: FUN_010f0dc0 */


void FUN_010f0dc0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_30 [2];
  
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  local_30[0] = FUN_00498310((int)param_1[0x10],*(undefined4 *)((longlong)param_1 + 0x84));
  (**(code **)(*param_1 + 0xd8))(param_1,param_2,local_30,param_3);
  return;
}

