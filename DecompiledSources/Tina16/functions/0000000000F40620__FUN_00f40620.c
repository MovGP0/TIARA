/* Ghidra address: 00f40620 */
/* Ghidra symbol: FUN_00f40620 */


void FUN_00f40620(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4e0);
  *(byte *)(plVar1 + 0x69) = *(byte *)(plVar1 + 0x69) & 0xfe;
  (**(code **)(*plVar1 + 0x180))(plVar1);
  return;
}

