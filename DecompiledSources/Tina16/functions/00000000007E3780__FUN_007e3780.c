/* Ghidra address: 007e3780 */
/* Ghidra symbol: FUN_007e3780 */


void FUN_007e3780(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = FUN_007e2ef0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)FUN_007e2f10(param_1,iVar3);
      (**(code **)(*plVar2 + 0xa8))(plVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

