/* Ghidra address: 018b06d0 */
/* Ghidra symbol: FUN_018b06d0 */


void FUN_018b06d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x80) + 0x848);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,*(undefined1 *)(param_2 + 0x5f));
  return;
}

