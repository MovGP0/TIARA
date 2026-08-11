/* Ghidra address: 0179c780 */
/* Ghidra symbol: FUN_0179c780 */


void FUN_0179c780(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_0179c7c0(param_1);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 8))(plVar2,param_1);
    if (cVar1 != '\0') {
      FUN_01795670(param_1,1);
    }
  }
  return;
}

