/* Ghidra address: 00b28c00 */
/* Ghidra symbol: FUN_00b28c00 */


void FUN_00b28c00(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar4);
      (**(code **)(*plVar1 + -0x20))(plVar1,1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + -0x20))(*(longlong **)(param_1 + 8),1);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar4);
      FUN_004095f0(uVar2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10),1);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  lVar3 = FUN_00b282a0(&DAT_00b260d0,1);
  *(longlong *)(param_1 + 0x18) = lVar3;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  return;
}

