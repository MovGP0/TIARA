/* Ghidra address: 00fd8cf0 */
/* Ghidra symbol: FUN_00fd8cf0 */


void FUN_00fd8cf0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4d8);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x6e0));
  return;
}

