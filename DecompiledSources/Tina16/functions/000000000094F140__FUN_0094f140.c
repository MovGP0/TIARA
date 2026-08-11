/* Ghidra address: 0094f140 */
/* Ghidra symbol: FUN_0094f140 */


void FUN_0094f140(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x110))(param_1);
  iVar1 = (**(code **)*puVar2)();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,iVar5);
      (**(code **)(*plVar3 + 0xe0))(plVar3,1);
      plVar3 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,iVar5);
      FUN_0094f140(uVar4);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

