/* Ghidra address: 01bfe550 */
/* Ghidra symbol: FUN_01bfe550 */


void FUN_01bfe550(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  else {
    *(int *)(param_1 + 0x88) = param_2;
  }
  *(undefined1 *)(param_1 + 0x78) = 1;
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x180))(plVar1);
  }
  return;
}

