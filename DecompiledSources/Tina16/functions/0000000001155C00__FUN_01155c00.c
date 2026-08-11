/* Ghidra address: 01155c00 */
/* Ghidra symbol: FUN_01155c00 */


void FUN_01155c00(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x758) + 0x4a8) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x750) + 0x128))(*(longlong **)(param_1 + 0x750),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x750) + 0x128))(*(longlong **)(param_1 + 0x750),0);
  }
  return;
}

