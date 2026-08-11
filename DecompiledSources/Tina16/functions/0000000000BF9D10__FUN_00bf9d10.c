/* Ghidra address: 00bf9d10 */
/* Ghidra symbol: FUN_00bf9d10 */


void FUN_00bf9d10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x130) + 0x620);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  return;
}

