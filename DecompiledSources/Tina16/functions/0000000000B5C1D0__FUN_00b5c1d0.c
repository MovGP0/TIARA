/* Ghidra address: 00b5c1d0 */
/* Ghidra symbol: FUN_00b5c1d0 */


void FUN_00b5c1d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x80) + 0x70);
  (**(code **)(*plVar1 + -0x20))(plVar1,1);
  return;
}

