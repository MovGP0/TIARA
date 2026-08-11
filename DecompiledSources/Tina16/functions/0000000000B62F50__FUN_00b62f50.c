/* Ghidra address: 00b62f50 */
/* Ghidra symbol: FUN_00b62f50 */


void FUN_00b62f50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x50) + 0x10);
  (**(code **)(*plVar1 + -0x20))(plVar1,1);
  return;
}

