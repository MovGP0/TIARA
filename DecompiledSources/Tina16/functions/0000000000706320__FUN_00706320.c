/* Ghidra address: 00706320 */
/* Ghidra symbol: FUN_00706320 */


void FUN_00706320(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x40);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

