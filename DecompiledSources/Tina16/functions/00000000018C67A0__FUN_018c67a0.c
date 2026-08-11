/* Ghidra address: 018c67a0 */
/* Ghidra symbol: FUN_018c67a0 */


void FUN_018c67a0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_38 [40];
  
  *(undefined1 *)(param_1 + 200) = 1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x160);
  if (plVar1 == (longlong *)0x0) {
    FUN_018c6690(auStack_38);
  }
  else {
    (**(code **)(*plVar1 + 0x2f8))(plVar1);
    while( true ) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x160);
      cVar2 = (**(code **)(*plVar1 + 0x310))(plVar1);
      if ((cVar2 != '\0') || (*(char *)(*(longlong *)(param_1 + 0x40) + 0x288) != '\0')) break;
      FUN_018c6690(auStack_38);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x160);
      (**(code **)(*plVar1 + 0x300))(plVar1);
    }
  }
  return;
}

