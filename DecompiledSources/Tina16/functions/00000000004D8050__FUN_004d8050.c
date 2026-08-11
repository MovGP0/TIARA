/* Ghidra address: 004d8050 */
/* Ghidra symbol: FUN_004d8050 */


void FUN_004d8050(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x24) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

