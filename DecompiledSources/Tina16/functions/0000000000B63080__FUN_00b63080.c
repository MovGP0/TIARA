/* Ghidra address: 00b63080 */
/* Ghidra symbol: FUN_00b63080 */


void FUN_00b63080(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x10);
  (**(code **)(*plVar1 + -0x20))(plVar1,1);
  return;
}

