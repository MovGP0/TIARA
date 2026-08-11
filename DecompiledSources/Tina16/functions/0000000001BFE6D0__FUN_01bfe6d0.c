/* Ghidra address: 01bfe6d0 */
/* Ghidra symbol: FUN_01bfe6d0 */


void FUN_01bfe6d0(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xa9) != param_2) {
    *(char *)(param_1 + 0xa9) = param_2;
    plVar1 = *(longlong **)(param_1 + 0x80);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x260))(plVar1);
    }
  }
  return;
}

