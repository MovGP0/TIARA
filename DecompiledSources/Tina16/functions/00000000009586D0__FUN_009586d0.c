/* Ghidra address: 009586d0 */
/* Ghidra symbol: FUN_009586d0 */


bool FUN_009586d0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
  if (plVar2 == (longlong *)0x0) {
    bVar3 = false;
  }
  else {
    cVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    bVar3 = cVar1 == '\0';
  }
  return bVar3;
}

