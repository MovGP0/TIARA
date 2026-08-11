/* Ghidra address: 009537e0 */
/* Ghidra symbol: FUN_009537e0 */


void FUN_009537e0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x160))(param_1,local_20);
  (**(code **)(*param_1 + 0x1a0))(param_1,param_2);
  (**(code **)(*param_1 + 0x2b8))(param_1);
  FUN_00414520(local_20);
  return;
}

