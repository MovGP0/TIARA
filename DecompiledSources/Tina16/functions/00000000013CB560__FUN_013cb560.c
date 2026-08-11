/* Ghidra address: 013cb560 */
/* Ghidra symbol: FUN_013cb560 */


void FUN_013cb560(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x870) + 0x4a8) == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x848) + 0x4e8);
    (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(param_1 + 0x8d0));
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x848) + 0x4e8);
    (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(param_1 + 0x8c8));
  }
  return;
}

