/* Ghidra address: 008961b0 */
/* Ghidra symbol: FUN_008961b0 */


void FUN_008961b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0x38);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  return;
}

