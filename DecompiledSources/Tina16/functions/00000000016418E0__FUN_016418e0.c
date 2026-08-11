/* Ghidra address: 016418e0 */
/* Ghidra symbol: FUN_016418e0 */


void FUN_016418e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xa0) + 0x58);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_2 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x78));
  return;
}

