/* Ghidra address: 00b3c320 */
/* Ghidra symbol: FUN_00b3c320 */


void FUN_00b3c320(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0x10);
  (**(code **)(*plVar1 + -0x20))(plVar1,1);
  return;
}

