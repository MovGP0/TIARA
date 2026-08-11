/* Ghidra address: 0094f1d0 */
/* Ghidra symbol: FUN_0094f1d0 */


void FUN_0094f1d0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x110))(param_1);
  iVar1 = (**(code **)*puVar2)();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,iVar4);
      (**(code **)(*plVar3 + 0x298))(plVar3);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

