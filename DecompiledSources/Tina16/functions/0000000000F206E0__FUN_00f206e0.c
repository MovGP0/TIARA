/* Ghidra address: 00f206e0 */
/* Ghidra symbol: FUN_00f206e0 */


int FUN_00f206e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 4;
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar4);
      iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      iVar3 = iVar3 + iVar1;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar3;
}

