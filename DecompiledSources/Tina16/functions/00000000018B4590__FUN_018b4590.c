/* Ghidra address: 018b4590 */
/* Ghidra symbol: FUN_018b4590 */


void FUN_018b4590(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x780);
  cVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*plVar1 + 0x268))(plVar1,cVar2 == '\0');
  return;
}

