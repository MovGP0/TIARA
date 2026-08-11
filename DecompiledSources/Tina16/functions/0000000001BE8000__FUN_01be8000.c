/* Ghidra address: 01be8000 */
/* Ghidra symbol: FUN_01be8000 */


void FUN_01be8000(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x128))(plVar1,1);
  }
  return;
}

