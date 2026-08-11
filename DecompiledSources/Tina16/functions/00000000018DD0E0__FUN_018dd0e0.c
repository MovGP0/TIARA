/* Ghidra address: 018dd0e0 */
/* Ghidra symbol: FUN_018dd0e0 */


void FUN_018dd0e0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  FUN_0181b910(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 0x6f0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x268))(plVar1,param_2);
  }
  return;
}

