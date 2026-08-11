/* Ghidra address: 0197e130 */
/* Ghidra symbol: FUN_0197e130 */


void FUN_0197e130(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar4);
      FUN_0197c210(uVar1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined8 *)(param_1 + 0x18));
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar4);
      (**(code **)(*plVar2 + 0x78))(plVar2,param_2);
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar4);
      *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)(param_2 + 0x27);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

