/* Ghidra address: 00b13860 */
/* Ghidra symbol: FUN_00b13860 */


undefined8 FUN_00b13860(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if ((plVar1 != (longlong *)0x0) && (iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1), 0 < iVar2)) {
    return 1;
  }
  return 0;
}

