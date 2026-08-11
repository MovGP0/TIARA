/* Ghidra address: 01bfe500 */
/* Ghidra symbol: FUN_01bfe500 */


void FUN_01bfe500(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x96) != param_2) {
    *(char *)(param_1 + 0x96) = param_2;
    plVar1 = *(longlong **)(param_1 + 0x80);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x260))(plVar1);
      FUN_00654320(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x78),0);
    }
  }
  return;
}

