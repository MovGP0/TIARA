/* Ghidra address: 00f405e0 */
/* Ghidra symbol: FUN_00f405e0 */


void FUN_00f405e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4e0);
  *(byte *)(plVar1 + 0x69) = *(byte *)(plVar1 + 0x69) | 1;
  (**(code **)(*plVar1 + 0x180))(plVar1);
  return;
}

