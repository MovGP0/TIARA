/* Ghidra address: 01981220 */
/* Ghidra symbol: FUN_01981220 */


void FUN_01981220(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x1a8);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x28));
  FUN_0196c500(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x1a8),
               *(undefined8 *)(param_1 + 0x28));
  return;
}

