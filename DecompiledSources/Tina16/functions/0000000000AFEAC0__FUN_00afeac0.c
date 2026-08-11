/* Ghidra address: 00afeac0 */
/* Ghidra symbol: FUN_00afeac0 */


void FUN_00afeac0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = FUN_00af6be0();
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_00af6be0(param_1);
      plVar3 = (longlong *)FUN_00ac1a90(uVar2,iVar4);
      (**(code **)(*plVar3 + 0x168))(plVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0065b6d0(param_1);
  return;
}

