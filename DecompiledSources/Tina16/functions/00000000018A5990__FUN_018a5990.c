/* Ghidra address: 018a5990 */
/* Ghidra symbol: FUN_018a5990 */


void FUN_018a5990(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_50 = 0;
  local_58 = 0;
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x490);
  FUN_005fd4e0(plVar6[0xf],*(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x504));
  FUN_005fd6d0(plVar6[0xf],1);
  FUN_005fd640(plVar6[0xf],4);
  FUN_005fd670(plVar6[0xf],0);
  FUN_005fdab0(plVar6[0x10],0xffffff);
  FUN_005fdcb0(plVar6[0x10],0);
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
  (**(code **)(*plVar6 + 0xf8))
            (plVar6,*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
             *(undefined4 *)(param_1 + 0x78),CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x7c)));
  plVar6 = (longlong *)FUN_018a73a0(*(undefined8 *)(param_1 + 0xb0));
  uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x548);
  (**(code **)(*plVar6 + 0x118))
            (plVar6,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x490),
             *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x548),uVar9,
             (double)*(int *)(param_1 + 0x70),(double)*(int *)(param_1 + 0x74),
             *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x551));
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (*(char *)(*(longlong *)(param_1 + 0xb0) + 0x508) != '\0') {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x490);
    FUN_005fcd80(plVar6[0xe],L"Arial");
    FUN_005fce30(plVar6[0xe],8);
    FUN_005fce70(plVar6[0xe],0);
    FUN_005fc860(plVar6[0xe],0xffffff);
    FUN_005fdcb0(plVar6[0x10],0);
    FUN_005fdab0(plVar6[0x10],*(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x4ec));
    FUN_0043f750(&local_58,param_2 + 1);
    uVar10 = 0;
    FUN_00416cd0(&local_50,3,&LAB_018a5dd4,local_58,&LAB_018a5dd4);
    (**(code **)(*plVar6 + 0x120))
              (plVar6,*(int *)(param_1 + 0x70) + 1,*(int *)(param_1 + 0x74) + 1,local_50);
  }
  uVar2 = FUN_0040c770((double)(int)DAT_02110674 *
                       *(double *)(*(longlong *)(param_1 + 0xb0) + 0x548));
  uVar3 = FUN_0040c770((double)DAT_02110674._4_4_ *
                       *(double *)(*(longlong *)(param_1 + 0xb0) + 0x548));
  uVar4 = FUN_0040c770((double)(int)DAT_0211067c *
                       *(double *)(*(longlong *)(param_1 + 0xb0) + 0x548));
  uVar5 = FUN_0040c770((double)DAT_0211067c._4_4_ *
                       *(double *)(*(longlong *)(param_1 + 0xb0) + 0x548));
  FUN_00498350(&local_48,uVar2,uVar3,uVar4,CONCAT44(uVar10,uVar5));
  if ((DAT_02110670 != '\0') && (param_2 == *(int *)(*(longlong *)(param_1 + 0xb0) + 0x50c))) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x490);
    FUN_005fd6d0(plVar6[0xf],1);
    FUN_005fd670(plVar6[0xf],0);
    FUN_005fd640(plVar6[0xf],0xe);
    FUN_005fd4e0(plVar6[0xf],0xffffff);
    iVar7 = 0;
    if (-1 < local_3c - local_44) {
      iVar8 = (local_3c - local_44) + 1;
      do {
        iVar1 = local_44;
        (**(code **)(*plVar6 + 200))
                  (plVar6,*(int *)(param_1 + 0x70) + local_48 + -1,
                   *(int *)(param_1 + 0x74) + local_44 + iVar7);
        (**(code **)(*plVar6 + 0xc0))
                  (plVar6,*(int *)(param_1 + 0x70) + local_40 + 1,
                   *(int *)(param_1 + 0x74) + iVar1 + iVar7);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_005fd640(plVar6[0xf],4);
  }
  FUN_00414560(&local_58,2);
  return;
}

