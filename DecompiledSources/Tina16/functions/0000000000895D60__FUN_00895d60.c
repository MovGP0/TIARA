/* Ghidra address: 00895d60 */
/* Ghidra symbol: FUN_00895d60 */


void FUN_00895d60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0xa0) + 0x38);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

