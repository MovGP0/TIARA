/* Ghidra address: 01050730 */
/* Ghidra symbol: FUN_01050730 */


void FUN_01050730(longlong param_1)

{
  longlong *plVar1;
  
  FUN_01050690(param_1,*(undefined8 *)(param_1 + 0x9c0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x958) + 0x510);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x9c8));
  FUN_006806a0(*(undefined8 *)(param_1 + 0x958),0);
  FUN_010508e0(param_1);
  return;
}

