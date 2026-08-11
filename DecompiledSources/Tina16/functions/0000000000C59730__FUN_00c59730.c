/* Ghidra address: 00c59730 */
/* Ghidra symbol: FUN_00c59730 */


void FUN_00c59730(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4a0);
  *(byte *)(plVar1 + 0x69) = *(byte *)(plVar1 + 0x69) | 1;
  (**(code **)(*plVar1 + 0x180))(plVar1);
  return;
}

