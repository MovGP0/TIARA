/* Ghidra address: 00ce44f0 */
/* Ghidra symbol: FUN_00ce44f0 */


void FUN_00ce44f0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_00ce0ee0(param_1);
  FUN_00414480(param_1 + 0x70);
  FUN_00414480(param_1 + 0x20);
  FUN_00414480(param_1 + 0xd0);
  FUN_00414480(param_1 + 0xd8);
  FUN_00414480(param_1 + 0xc0);
  FUN_00414480(param_1 + 200);
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1);
  }
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1);
  }
  return;
}

