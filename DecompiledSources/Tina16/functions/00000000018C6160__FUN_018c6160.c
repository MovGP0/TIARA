/* Ghidra address: 018c6160 */
/* Ghidra symbol: FUN_018c6160 */


void FUN_018c6160(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(undefined1 *)(*(longlong *)(param_2 + 0x50) + 0x48) = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x38);
  (**(code **)(*plVar1 + 0x80))(plVar1);
  FUN_018cfa60(*(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x170));
  return;
}

