/* Ghidra address: 018d4470 */
/* Ghidra symbol: FUN_018d4470 */


void FUN_018d4470(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x208);
  (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x200);
  (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
  return;
}

