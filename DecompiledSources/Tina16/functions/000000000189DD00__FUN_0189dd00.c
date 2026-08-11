/* Ghidra address: 0189dd00 */
/* Ghidra symbol: FUN_0189dd00 */


void FUN_0189dd00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x108);
  if (plVar1 == (longlong *)0x0) {
    FUN_0197a020();
  }
  else {
    (**(code **)(*plVar1 + 0xd0))(plVar1);
  }
  return;
}

