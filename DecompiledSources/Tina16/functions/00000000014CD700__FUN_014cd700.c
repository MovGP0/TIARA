/* Ghidra address: 014cd700 */
/* Ghidra symbol: FUN_014cd700 */


void FUN_014cd700(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = (**(code **)(*param_2 + 0x1c8))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(*param_2 + 0x210))(param_2,iVar4);
      plVar1 = (longlong *)param_2[0xab];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x208))(plVar1,iVar4,uVar3,0);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

