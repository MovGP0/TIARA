/* Ghidra address: 012cce10 */
/* Ghidra symbol: FUN_012cce10 */


void FUN_012cce10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0x748);
  (**(code **)(*plVar1 + 8))(plVar1);
  return;
}

