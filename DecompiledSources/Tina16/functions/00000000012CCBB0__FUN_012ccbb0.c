/* Ghidra address: 012ccbb0 */
/* Ghidra symbol: FUN_012ccbb0 */


void FUN_012ccbb0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x70) + 0x748);
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}

