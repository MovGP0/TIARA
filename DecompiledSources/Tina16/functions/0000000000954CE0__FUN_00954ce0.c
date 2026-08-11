/* Ghidra address: 00954ce0 */
/* Ghidra symbol: FUN_00954ce0 */


void FUN_00954ce0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,*(undefined8 *)(param_2 + 0x68));
  }
  return;
}

