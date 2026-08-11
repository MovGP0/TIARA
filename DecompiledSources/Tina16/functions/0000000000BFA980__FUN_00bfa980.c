/* Ghidra address: 00bfa980 */
/* Ghidra symbol: FUN_00bfa980 */


void FUN_00bfa980(longlong *param_1,undefined4 param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = *(undefined4 *)((longlong)param_1 + 0x4c4);
  local_1c = param_2;
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_20);
  return;
}

