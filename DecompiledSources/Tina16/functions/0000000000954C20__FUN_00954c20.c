/* Ghidra address: 00954c20 */
/* Ghidra symbol: FUN_00954c20 */


void FUN_00954c20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa0))(plVar1,*(undefined8 *)(param_2 + 0x68));
  }
  FUN_00955ae0(*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),0);
  return;
}

