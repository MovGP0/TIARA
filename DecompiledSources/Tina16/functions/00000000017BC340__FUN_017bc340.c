/* Ghidra address: 017bc340 */
/* Ghidra symbol: FUN_017bc340 */


void FUN_017bc340(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      (**(code **)(*plVar1 + 0x180))(plVar1,5,uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

