/* Ghidra address: 00b28970 */
/* Ghidra symbol: FUN_00b28970 */


void FUN_00b28970(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + -0x20))(*(longlong **)(param_1 + 0x10),1);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
      (**(code **)(*plVar1 + -0x20))(plVar1,1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + -0x20))(*(longlong **)(param_1 + 0x18),1);
  FUN_00414520(param_1 + 8);
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar2 = FUN_00b191b0(&DAT_00b18820,1);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}

