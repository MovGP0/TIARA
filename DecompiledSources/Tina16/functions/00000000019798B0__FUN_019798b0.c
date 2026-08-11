/* Ghidra address: 019798b0 */
/* Ghidra symbol: FUN_019798b0 */


void FUN_019798b0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    plVar1 = (longlong *)FUN_0197a4f0(param_1);
    (**(code **)(*plVar1 + 0xc0))(plVar1);
    FUN_00452320(param_1 + 0xd8);
  }
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xc0))(plVar1);
    FUN_00452320(param_1 + 0xc0);
  }
  FUN_0197d1c0(*(undefined8 *)(param_1 + 0xe0));
  return;
}

