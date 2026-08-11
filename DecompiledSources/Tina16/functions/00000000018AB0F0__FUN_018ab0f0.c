/* Ghidra address: 018ab0f0 */
/* Ghidra symbol: FUN_018ab0f0 */


void FUN_018ab0f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x80);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  return;
}

