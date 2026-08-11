/* Ghidra address: 01c6cf20 */
/* Ghidra symbol: FUN_01c6cf20 */


void FUN_01c6cf20(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 7000);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined8 *)(param_1 + 7000) = 0;
  }
  FUN_01c6d670(param_1,*(undefined8 *)(param_1 + 0xbd0));
  return;
}

