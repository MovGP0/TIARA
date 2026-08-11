/* Ghidra address: 01c72a40 */
/* Ghidra symbol: FUN_01c72a40 */


void FUN_01c72a40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 auStack_28 [32];
  
  if (*(char *)(param_1 + 0x24fa) == '\0') {
    if (*(longlong *)(param_1 + 0x27a8) != 0) {
      plVar1 = *(longlong **)(param_1 + 7000);
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,in_stack_00000028,in_stack_00000030),
         cVar2 == '\0')) {
        return;
      }
      if ((*PTR_DAT_020052b8 == '\0') && (DAT_03566810 != 0)) {
        FUN_01c729a0(auStack_28);
      }
      DAT_03566810 = 0;
    }
  }
  else {
    FUN_01995220(*(undefined8 *)(param_1 + 0x27a8),1);
    *(undefined1 *)(param_1 + 0x24fa) = 0;
  }
  return;
}

