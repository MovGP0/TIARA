/* Ghidra address: 00d574e0 */
/* Ghidra symbol: FUN_00d574e0 */


void FUN_00d574e0(longlong *param_1,longlong param_2)

{
  int local_1c;
  
  local_1c = 0;
  if (param_2 != 0) {
    local_1c = *(int *)(param_2 + -4);
  }
  (**(code **)(*param_1 + 0x20))(param_1,&local_1c,4);
  (**(code **)(*param_1 + 0x20))(param_1,param_2,local_1c * 2);
  return;
}

