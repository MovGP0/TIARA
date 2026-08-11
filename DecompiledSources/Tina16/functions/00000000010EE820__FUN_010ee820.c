/* Ghidra address: 010ee820 */
/* Ghidra symbol: FUN_010ee820 */


void FUN_010ee820(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_30 [2];
  
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  local_30[0] = FUN_00498310((int)param_1[0xd],*(undefined4 *)((longlong)param_1 + 0x6c));
  (**(code **)(*param_1 + 0xd8))(param_1,param_2,local_30,param_3);
  return;
}

