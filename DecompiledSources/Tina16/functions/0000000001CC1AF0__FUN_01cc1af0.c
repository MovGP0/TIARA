/* Ghidra address: 01cc1af0 */
/* Ghidra symbol: FUN_01cc1af0 */


int FUN_01cc1af0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar1 = FUN_01cc0690(param_1,param_2);
  iVar2 = FUN_01d31350(*(undefined8 *)(param_1 + 0x48));
  FUN_01cc1840(param_1);
  iVar2 = iVar1 + iVar2 + 9;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar5);
      iVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,param_2);
      iVar2 = iVar2 + iVar3;
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar2;
}

