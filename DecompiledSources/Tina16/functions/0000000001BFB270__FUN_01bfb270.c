/* Ghidra address: 01bfb270 */
/* Ghidra symbol: FUN_01bfb270 */


void FUN_01bfb270(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((plVar1 != (longlong *)0x0) && ((*(ushort *)((longlong)plVar1 + 0x34) & 1) == 0)) {
    (**(code **)(*plVar1 + 0x108))(plVar1);
  }
  return;
}

