/* Ghidra address: 01abb4d0 */
/* Ghidra symbol: FUN_01abb4d0 */


void FUN_01abb4d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 in_stack_ffffffffffffff78;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  double local_30;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  iVar9 = *(int *)(param_1[0x1f] + 0x10);
  iVar8 = 0;
  if (-1 < iVar9 + -1) {
    do {
      plVar6 = (longlong *)FUN_004aeac0(param_1[0x1f],iVar8);
      (**(code **)(*plVar6 + 0x120))(plVar6,param_3,param_2);
      (**(code **)(*plVar6 + 0x118))(plVar6);
      (**(code **)(*plVar6 + 0x128))(plVar6,param_3,param_2);
      uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  if (((param_1[0x10] != 0) && (param_1[0x1d] != 0)) && (param_1[0x1e] != 0)) {
    lVar7 = FUN_01d2c6a0(&PTR_FUN_01d29b78,1);
    (**(code **)(**(longlong **)(lVar7 + 0x60) + 0x10))(*(longlong **)(lVar7 + 0x60),param_1[0xf]);
    (**(code **)(**(longlong **)(lVar7 + 0x68) + 0x10))(*(longlong **)(lVar7 + 0x68),param_1[0x20]);
    uVar3 = FUN_005fd4d0(param_1[0xf]);
    FUN_005fdab0(*(undefined8 *)(lVar7 + 0x68),uVar3);
    (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"HistRects",lVar7);
    FUN_00498350(local_58,*(undefined4 *)(param_1[0x1d] + 0xe8),
                 *(undefined4 *)(param_1[0x1e] + 0xec),*(undefined4 *)(param_1[0x1d] + 0xec),
                 CONCAT44(uVar5,*(undefined4 *)(param_1[0x1e] + 0xe8)));
    (**(code **)(*param_1 + 0xb0))(param_1,local_58);
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))((longlong *)param_1[0x10],param_1[0x13],0);
    *(undefined8 *)PTR_DAT_02005620 = 0;
    *(undefined8 *)PTR_DAT_020041f8 = 0;
    (**(code **)(*(longlong *)param_1[0x10] + 0x30))
              ((longlong *)param_1[0x10],&local_30,&local_40,0);
    while (cVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))
                             ((longlong *)param_1[0x10],&local_38,&local_48,0), cVar2 != '\0') {
      iVar8 = FUN_01cd60f0(param_1[0x1d],local_30);
      lVar1 = param_1[0x1d];
      iVar9 = *(int *)(lVar1 + 0xec);
      if (iVar8 < *(int *)(lVar1 + 0xec)) {
        iVar9 = iVar8;
      }
      iVar8 = *(int *)(lVar1 + 0xe8);
      if (iVar8 < iVar9) {
        iVar8 = iVar9;
      }
      iVar4 = FUN_01cd60f0(lVar1,local_38);
      iVar9 = *(int *)(param_1[0x1d] + 0xec);
      if (iVar4 < iVar9) {
        iVar9 = iVar4;
      }
      iVar4 = *(int *)(param_1[0x1d] + 0xe8);
      if (iVar4 < iVar9) {
        iVar4 = iVar9;
      }
      if (((*(double *)(param_1[0x1d] + 0xb8) <= local_30) ||
          (*(double *)(param_1[0x1d] + 0xb8) <= local_38)) &&
         ((local_30 < *(double *)(param_1[0x1d] + 0xc0) ||
           local_30 == *(double *)(param_1[0x1d] + 0xc0) ||
          (local_38 < *(double *)(param_1[0x1d] + 0xc0) ||
           local_38 == *(double *)(param_1[0x1d] + 0xc0))))) {
        uVar5 = FUN_01cd60f0(param_1[0x1e],local_40);
        FUN_01abb4a0(param_1,iVar8,iVar4,uVar5,lVar7);
      }
      local_30 = local_38;
      local_40 = local_48;
    }
    iVar8 = FUN_01cd60f0(param_1[0x1d],local_30);
    lVar1 = param_1[0x1d];
    iVar9 = *(int *)(lVar1 + 0xec);
    if (iVar8 < *(int *)(lVar1 + 0xec)) {
      iVar9 = iVar8;
    }
    iVar8 = *(int *)(lVar1 + 0xe8);
    if (iVar8 < iVar9) {
      iVar8 = iVar9;
    }
    iVar4 = FUN_01cd60f0(lVar1,param_1[0x18]);
    iVar9 = *(int *)(param_1[0x1d] + 0xec);
    if (iVar4 < *(int *)(param_1[0x1d] + 0xec)) {
      iVar9 = iVar4;
    }
    iVar4 = *(int *)(param_1[0x1d] + 0xe8);
    if (iVar4 < iVar9) {
      iVar4 = iVar9;
    }
    if (((*(double *)(param_1[0x1d] + 0xb8) <= local_30) ||
        (*(double *)(param_1[0x1d] + 0xb8) < (double)param_1[0x18] ||
         *(double *)(param_1[0x1d] + 0xb8) == (double)param_1[0x18])) &&
       ((local_30 < *(double *)(param_1[0x1d] + 0xc0) ||
         local_30 == *(double *)(param_1[0x1d] + 0xc0) ||
        ((double)param_1[0x18] < *(double *)(param_1[0x1d] + 0xc0) ||
         (double)param_1[0x18] == *(double *)(param_1[0x1d] + 0xc0))))) {
      uVar5 = FUN_01cd60f0(param_1[0x1e],local_40);
      FUN_01abb4a0(param_1,iVar8,iVar4,uVar5,lVar7);
    }
  }
  return;
}

