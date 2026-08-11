/* Ghidra address: 00c34470 */
/* Ghidra symbol: FUN_00c34470 */


void FUN_00c34470(longlong param_1)

{
  longlong *plVar1;
  
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
  if (*(int *)(param_1 + 0xec) == 0) {
    plVar1 = *(longlong **)(param_1 + 0xe0);
    if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0xf0) != '\0')) {
      (**(code **)(*plVar1 + 0x80))(plVar1);
    }
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  return;
}

