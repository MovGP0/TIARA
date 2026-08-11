/* Ghidra address: 018ccc40 */
/* Ghidra symbol: FUN_018ccc40 */


void FUN_018ccc40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x60);
  (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_2 + 0x58));
  *(undefined1 *)(*(longlong *)(param_2 + 0x58) + 0x1c8) = 0;
  return;
}

