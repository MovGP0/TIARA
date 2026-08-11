/* Ghidra address: 00b5bf90 */
/* Ghidra symbol: FUN_00b5bf90 */


void FUN_00b5bf90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x70) + 0x10);
  (**(code **)(*plVar1 + -0x20))(plVar1,1);
  return;
}

