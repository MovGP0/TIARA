/* Ghidra address: 01ac7ed0 */
/* Ghidra symbol: FUN_01ac7ed0 */


void FUN_01ac7ed0(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x6f0) + 0x4a8) == 2) {
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x700) + 0x128))(*(longlong **)(param_1 + 0x700),0);
  }
  FUN_01ac7f60(param_1);
  return;
}

