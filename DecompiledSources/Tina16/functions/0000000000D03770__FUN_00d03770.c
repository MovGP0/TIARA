/* Ghidra address: 00d03770 */
/* Ghidra symbol: FUN_00d03770 */


void FUN_00d03770(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xa0) + 0xc0);
  (**(code **)(*plVar1 + 0xa0))(plVar1,0);
  return;
}

