/* Ghidra address: 005486e0 */
/* Ghidra symbol: FUN_005486e0 */


longlong * FUN_005486e0(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_005486b0();
  plVar2 = *(longlong **)(lVar1 + 2);
  if ((plVar2 != (longlong *)0x0) && (*plVar2 == 0)) {
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}

