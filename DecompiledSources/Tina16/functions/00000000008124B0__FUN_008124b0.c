/* Ghidra address: 008124b0 */
/* Ghidra symbol: FUN_008124b0 */


void FUN_008124b0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x72) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x68);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x188))(plVar1);
    }
    plVar1 = *(longlong **)(param_1 + 0x48);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x188))(plVar1);
    }
  }
  return;
}

