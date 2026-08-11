/* Ghidra address: 013c7550 */
/* Ghidra symbol: FUN_013c7550 */


void FUN_013c7550(char param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 unaff_RDI;
  int iVar5;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar6;
  longlong *local_38;
  ulonglong local_30;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  lVar3 = FUN_019a45d0();
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 8) + 0x10);
  if (iVar2 != 0) {
    local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00f1e090(&local_30);
    unaff_RDI = FUN_013c43c0(&DAT_013c3858,1,param_1,1,
                             CONCAT44(uVar6,(uint)(*PTR_DAT_02005258 != '\0')),0,0,0);
    FUN_013c4e30(unaff_RDI,local_30,0);
  }
  iVar4 = 0;
  iVar5 = iVar2;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_019a45d0();
      lVar3 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 8),iVar4);
      if ((*(char *)(lVar3 + 0x28) == param_1) && (*(char *)(lVar3 + 0x12) == '\0')) {
        FUN_013c70b0(unaff_RDI,lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar2 != 0) {
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00f1df90(*(undefined8 *)PTR_DAT_02005188,&local_38);
    FUN_013e2500(*(undefined8 *)PTR_DAT_02005188,local_38,0,1);
    FUN_00410f20(local_38);
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00f1df90(*(undefined8 *)PTR_DAT_02004fb8,&local_38);
    iVar2 = (**(code **)(*local_38 + 0x28))(local_38);
    if (0 < iVar2) {
      FUN_013e25c0(L"XY Plot");
    }
    FUN_013e2500(*(undefined8 *)PTR_DAT_02004fb8,local_38,0,1);
    FUN_00410f20(local_38);
    FUN_00410f20(local_30);
    FUN_00410f20(unaff_RDI);
    lVar3 = *(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0x7a0);
    plVar1 = *(longlong **)(lVar3 + 0x10);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_01cec9c0(lVar3,iVar2 + -1,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
                 *(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),1);
  }
  return;
}

