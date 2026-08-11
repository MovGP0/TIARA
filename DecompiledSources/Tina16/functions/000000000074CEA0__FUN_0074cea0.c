/* Ghidra address: 0074cea0 */
/* Ghidra symbol: FUN_0074cea0 */


void FUN_0074cea0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_0065a000(param_1);
  plVar1 = *(longlong **)(param_1 + 0x4d8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x140))(plVar1,*(undefined1 *)(param_1 + 0xb1));
  }
  return;
}

