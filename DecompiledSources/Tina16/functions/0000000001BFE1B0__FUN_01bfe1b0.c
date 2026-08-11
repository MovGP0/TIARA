/* Ghidra address: 01bfe1b0 */
/* Ghidra symbol: FUN_01bfe1b0 */


void FUN_01bfe1b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0xa0) != param_2) {
    *(int *)(param_1 + 0xa0) = param_2;
    plVar1 = *(longlong **)(param_1 + 0x80);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x180))(*(longlong **)(param_1 + 0x80));
    }
  }
  return;
}

