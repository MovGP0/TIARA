/* Ghidra address: 00bfa9b0 */
/* Ghidra symbol: FUN_00bfa9b0 */


void FUN_00bfa9b0(longlong *param_1,undefined4 param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = *(undefined4 *)((longlong)param_1 + 0x4cc);
  local_20 = param_2;
  (**(code **)(*param_1 + 0x2a8))(param_1,&local_20);
  return;
}

