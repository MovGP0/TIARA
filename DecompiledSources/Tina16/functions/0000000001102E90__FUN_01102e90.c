/* Ghidra address: 01102e90 */
/* Ghidra symbol: FUN_01102e90 */


void FUN_01102e90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1[0x21] + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(param_1[0x21],iVar3);
      (**(code **)(*plVar2 + 0x120))(plVar2,param_1[0x32],param_1[0x33]);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_1[0x33]);
  param_1[0x2b] = param_2;
  FUN_01102dc0(param_1);
  lVar1 = param_1[0x31];
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 0x158) = param_2;
    FUN_01102dc0(lVar1);
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_1[0x33]);
  iVar4 = *(int *)(param_1[0x21] + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(param_1[0x21],iVar3);
      (**(code **)(*plVar2 + 0x118))(plVar2);
      (**(code **)(*plVar2 + 0x128))(plVar2,param_1[0x32],param_1[0x33]);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

