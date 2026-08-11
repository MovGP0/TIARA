/* Ghidra address: 01ae3c10 */
/* Ghidra symbol: FUN_01ae3c10 */


void FUN_01ae3c10(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_30 [2];
  
  local_30[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  FUN_01acff30(param_1,local_30);
  if (param_2 != '\0') {
    lVar2 = FUN_004aeac0(local_30[0],0);
    plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0xa0);
    iVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (0 < iVar1) {
      lVar2 = FUN_004aeac0(local_30[0],0);
      if (*(char *)(lVar2 + 0x98) == '\x01') {
        FUN_01c80630(*(undefined8 *)PTR_DAT_02004e40,*(undefined8 *)PTR_DAT_02004030);
        FUN_00805990(*(undefined8 *)PTR_DAT_02002d20);
        FUN_007e2f80(*(undefined8 *)(*(longlong *)PTR_DAT_02002d20 + 0x750),0);
        FUN_007e2f80(*(undefined8 *)(*(longlong *)PTR_DAT_02002d20 + 0x800),1);
        plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        lVar2 = FUN_004aeac0(local_30[0],0);
        (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x90) + 0xa0));
        FUN_017f2380(*(undefined8 *)PTR_DAT_02002d20,plVar3);
        FUN_00410f20(plVar3);
        (**(code **)(**(longlong **)PTR_DAT_02002d20 + 0x2d0))(*(longlong **)PTR_DAT_02002d20);
        lVar2 = FUN_004aeac0(local_30[0],0);
        plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x90) + 0xa0);
        (**(code **)(*plVar3 + 0x90))(plVar3);
        lVar2 = FUN_004aeac0(local_30[0],0);
        FUN_017f2850(*(undefined8 *)PTR_DAT_02002d20,
                     *(undefined8 *)(*(longlong *)(lVar2 + 0x90) + 0xa0));
        goto LAB_01ae3e7e;
      }
    }
  }
  plVar3 = (longlong *)FUN_01aebb40(&PTR_FUN_01466f90,1,*(undefined8 *)PTR_DAT_02004030);
  uVar4 = FUN_004aeac0(local_30[0],0);
  FUN_0146a9a0(plVar3,uVar4);
  iVar1 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar1 == 2) {
    FUN_00410f20(plVar3);
    FUN_00410f20(local_30[0]);
    return;
  }
  plVar5 = (longlong *)FUN_004aeac0(local_30[0],0);
  (**(code **)(*plVar5 + 0x120))
            (plVar5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  plVar5 = (longlong *)FUN_004aeac0(local_30[0],0);
  (**(code **)(*plVar5 + 0x50))(plVar5,0);
  uVar4 = FUN_004aeac0(local_30[0],0);
  FUN_01a5eb60(uVar4,plVar3[0x11c]);
  uVar4 = FUN_004aeac0(local_30[0],0);
  FUN_01a5f250(uVar4);
  plVar5 = (longlong *)FUN_004aeac0(local_30[0],0);
  (**(code **)(*plVar5 + 0x128))
            (plVar5,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  FUN_00410f20(plVar3);
LAB_01ae3e7e:
  FUN_00410f20(local_30[0]);
  return;
}

