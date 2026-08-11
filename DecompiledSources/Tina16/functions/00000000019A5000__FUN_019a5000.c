/* Ghidra address: 019a5000 */
/* Ghidra symbol: FUN_019a5000 */


void FUN_019a5000(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar6 = *(int *)(param_2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_004aeac0(param_2,iVar5);
      (**(code **)(*param_1 + 0x20))(param_1,uVar3);
      uVar3 = FUN_004aeac0(param_2,iVar5);
      cVar1 = FUN_0198a580(uVar3);
      if ((cVar1 == '\x04') && (*(longlong *)PTR_DAT_020015a8 != 0)) {
        uVar3 = FUN_004aeac0(param_2,iVar5);
        FUN_013abe40(*(undefined8 *)PTR_DAT_020015a8,uVar3);
      }
      plVar4 = (longlong *)FUN_004aeac0(param_2,iVar5);
      (**(code **)(*plVar4 + 0x1b8))(plVar4,0,plVar2,0);
      plVar4 = (longlong *)FUN_004aeac0(param_2,iVar5);
      (**(code **)(*plVar4 + 0x1c0))(plVar4,0,plVar2);
      uVar3 = FUN_004aeac0(param_2,iVar5);
      FUN_0198a9e0(param_1[0x19],uVar3);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_00b95360(param_1[0x19]);
  }
  FUN_019ad9f0(param_1,plVar2,1);
  iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (0 < iVar6) {
    FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,plVar2,0,1);
  }
  FUN_00410f20(plVar2);
  return;
}

