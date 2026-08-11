/* Ghidra address: 018cc7e0 */
/* Ghidra symbol: FUN_018cc7e0 */


void FUN_018cc7e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x60);
  (**(code **)(*plVar1 + 0x70))(plVar1,*(undefined8 *)(param_2 + 0x58));
  return;
}

