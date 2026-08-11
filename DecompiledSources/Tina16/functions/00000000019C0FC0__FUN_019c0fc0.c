/* Ghidra address: 019c0fc0 */
/* Ghidra symbol: FUN_019c0fc0 */


undefined8
FUN_019c0fc0(undefined8 param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
            undefined8 *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  
  local_30 = (undefined8 *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_78 = (undefined8 *)0x0;
  FUN_00417580(local_70,&DAT_019c0088);
  lVar4 = 0;
  if (param_2 != (undefined8 *)0x0) {
    lVar4 = param_2[-1];
  }
  puVar2 = param_2;
  if (lVar4 < 3) {
    puVar2 = (undefined8 *)FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_019c1628);
    FUN_004134c0();
  }
  lVar4 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = puVar2[-1];
  }
  FUN_00419260(&local_30,&DAT_0147b748,1,lVar4 + 3);
  FUN_00419260(&local_38,&DAT_0147b748,1,1);
  FUN_00419260(&local_40,&DAT_0147b748,1,1);
  *local_30 = *param_2;
  iVar6 = 1;
  if (param_4 == 0) {
    iVar5 = 0;
    iVar1 = 0;
    if (-1 < param_5) {
      iVar7 = param_5 + 1;
      do {
        local_48 = FUN_00498310(*(undefined4 *)(param_2 + iVar1),
                                *(int *)((longlong)param_2 + (longlong)iVar1 * 8 + 4) + param_3);
        local_30[iVar6] = local_48;
        FUN_00419260(&local_38,&DAT_0147b748,1,(longlong)(iVar5 + 1));
        *(undefined8 *)(local_38 + (longlong)iVar5 * 8) = local_48;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    lVar4 = (longlong)param_5;
    local_58 = FUN_00498310(*(undefined4 *)(param_2 + lVar4),
                            *(undefined4 *)((longlong)param_2 + lVar4 * 8 + 4));
    uVar3 = FUN_00498310(*(int *)(param_2 + lVar4) - param_3,
                         *(int *)((longlong)param_2 + lVar4 * 8 + 4) + param_3);
    *param_6 = uVar3;
    local_30[iVar6] = *param_6;
    iVar6 = iVar6 + 1;
    iVar7 = 0;
    iVar5 = param_5 + 1;
    iVar1 = 0;
    if (param_2 != (undefined8 *)0x0) {
      iVar1 = (int)param_2[-1];
    }
    if (iVar5 <= iVar1 + -1) {
      iVar1 = ((iVar1 + -1) - iVar5) + 1;
      do {
        local_48 = FUN_00498310(*(int *)(param_2 + iVar5) - param_3,
                                *(undefined4 *)((longlong)param_2 + (longlong)iVar5 * 8 + 4));
        local_30[iVar6] = local_48;
        FUN_00419260(&local_40,&DAT_0147b748,1,(longlong)(iVar7 + 1));
        *(undefined8 *)(local_40 + (longlong)iVar7 * 8) = local_48;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else if (param_4 == 1) {
    iVar5 = 0;
    iVar1 = 0;
    if (-1 < param_5) {
      iVar7 = param_5 + 1;
      do {
        local_48 = FUN_00498310(*(int *)(param_2 + iVar1) + param_3,
                                *(undefined4 *)((longlong)param_2 + (longlong)iVar1 * 8 + 4));
        local_30[iVar6] = local_48;
        FUN_00419260(&local_38,&DAT_0147b748,1,(longlong)(iVar5 + 1));
        *(undefined8 *)(local_38 + (longlong)iVar5 * 8) = local_48;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    lVar4 = (longlong)param_5;
    local_58 = FUN_00498310(*(undefined4 *)(param_2 + lVar4),
                            *(undefined4 *)((longlong)param_2 + lVar4 * 8 + 4));
    uVar3 = FUN_00498310(*(int *)(param_2 + lVar4) + param_3,
                         *(int *)((longlong)param_2 + lVar4 * 8 + 4) - param_3);
    *param_6 = uVar3;
    local_30[iVar6] = *param_6;
    iVar6 = iVar6 + 1;
    iVar7 = 0;
    iVar5 = param_5 + 1;
    iVar1 = 0;
    if (param_2 != (undefined8 *)0x0) {
      iVar1 = (int)param_2[-1];
    }
    if (iVar5 <= iVar1 + -1) {
      iVar1 = ((iVar1 + -1) - iVar5) + 1;
      do {
        local_48 = FUN_00498310(*(undefined4 *)(param_2 + iVar5),
                                *(int *)((longlong)param_2 + (longlong)iVar5 * 8 + 4) - param_3);
        local_30[iVar6] = local_48;
        FUN_00419260(&local_40,&DAT_0147b748,1,(longlong)(iVar7 + 1));
        *(undefined8 *)(local_40 + (longlong)iVar7 * 8) = local_48;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"ShiftRoute: ismeretlen routeIndex");
    FUN_004134c0(uVar3);
  }
  lVar4 = 0;
  if (param_2 != (undefined8 *)0x0) {
    lVar4 = param_2[-1];
  }
  local_50 = param_2[lVar4 + -1];
  local_30[iVar6] = local_50;
  iVar6 = 0;
  if (local_30 != (undefined8 *)0x0) {
    iVar6 = (int)local_30[-1];
  }
  FUN_00419260(local_68,&DAT_0147b748,1,5);
  FUN_00419430(&local_78,&DAT_0147b748);
  FUN_00419260(&local_78,&DAT_0147b748,1,5);
  *local_78 = *local_30;
  local_78[1] = local_30[1];
  local_78[2] = *param_6;
  local_78[3] = local_30[iVar6 + -2];
  local_78[4] = local_30[iVar6 + -1];
  FUN_004194b0(local_68,local_78,&DAT_0147b748);
  FUN_004194b0(local_70,local_30,&DAT_0147b748);
  local_60 = param_5 + 1;
  FUN_00417c40(param_1,local_70,&DAT_019c0088);
  FUN_00419430(&local_78,&DAT_0147b748);
  FUN_00417740(local_70,&DAT_019c0088);
  FUN_00417840(&local_40,&DAT_0147b748,3);
  return param_1;
}

