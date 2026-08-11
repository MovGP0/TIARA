/* Ghidra address: 00c59770 */
/* Ghidra symbol: FUN_00c59770 */


void FUN_00c59770(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4a0);
  *(byte *)(plVar1 + 0x69) = *(byte *)(plVar1 + 0x69) & 0xfe;
  (**(code **)(*plVar1 + 0x180))(plVar1);
  return;
}

