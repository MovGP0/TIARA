/* Ghidra address: 01a5f350 */
/* Ghidra symbol: FUN_01a5f350 */


void FUN_01a5f350(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_30 [2];
  
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  local_30[0] = (**(code **)(*param_1 + 0xd0))(param_1);
  (**(code **)(*param_1 + 0xd8))(param_1,param_2,local_30,param_3);
  return;
}

