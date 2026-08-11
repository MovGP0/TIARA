/* Ghidra address: 01bfb2a0 */
/* Ghidra symbol: FUN_01bfb2a0 */


void FUN_01bfb2a0(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x70) != param_2) {
    *(char *)(param_1 + 0x70) = param_2;
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x268))(plVar1);
    }
  }
  return;
}

