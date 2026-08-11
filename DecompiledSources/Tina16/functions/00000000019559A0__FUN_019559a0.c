/* Ghidra address: 019559a0 */
/* Ghidra symbol: FUN_019559a0 */


void FUN_019559a0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_019512f0(param_1);
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1a0) + 0xb8);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x78));
  }
  return;
}

