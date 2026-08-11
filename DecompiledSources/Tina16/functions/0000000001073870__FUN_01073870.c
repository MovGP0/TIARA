/* Ghidra address: 01073870 */
/* Ghidra symbol: FUN_01073870 */


void FUN_01073870(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x6d8) = param_2;
  if ((param_2 & 1) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))(*(longlong **)(param_1 + 0x6c8),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x268))(*(longlong **)(param_1 + 0x6c8),1);
  }
  if ((*(uint *)(param_1 + 0x6d8) & 2) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))(*(longlong **)(param_1 + 0x6d0),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))(*(longlong **)(param_1 + 0x6d0),1);
  }
  return;
}

