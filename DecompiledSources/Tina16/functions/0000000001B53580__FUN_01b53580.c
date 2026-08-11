/* Ghidra address: 01b53580 */
/* Ghidra symbol: FUN_01b53580 */


void FUN_01b53580(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_78;
  undefined1 local_70 [8];
  int local_68;
  int local_64;
  int local_5c;
  longlong *local_40;
  undefined8 local_20;
  
  local_90 = auStack_138;
  local_e0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_78 = 0;
  local_20 = 0;
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_64 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_98);
  FUN_004b4b10(local_40,local_98);
  local_68 = (**(code **)(*local_40 + 0x28))(local_40);
  iVar4 = (**(code **)(*local_40 + 0x28))(local_40);
  FUN_00419260(param_1 + 0x5588,&DAT_01b4b7e0,1,(longlong)iVar4);
  iVar4 = (**(code **)(*local_40 + 0x28))();
  local_5c = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*local_40 + 0x18))(local_40,&local_a0,local_5c);
      uVar8 = FUN_00b8f030(local_a0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x5588) + (longlong)local_5c * 8) = uVar8;
      if (*(double *)(*(longlong *)(param_1 + 0x5588) + (longlong)local_5c * 8) <= 0.0) {
        uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Frequency must be a positive number!");
        FUN_004134c0(uVar8);
      }
      local_5c = local_5c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_a8);
  FUN_004b4b10(local_40,local_a8);
  iVar4 = (**(code **)(*local_40 + 0x28))(local_40);
  FUN_00419260(param_1 + 0x5590,&DAT_01b4b830,1,(longlong)iVar4);
  iVar4 = (**(code **)(*local_40 + 0x28))(local_40);
  if (iVar4 != local_68) {
    uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"The Number of harmonics must be specified for each Base frequency, separated by commas (e.g., 3, 1, 1)!"
                        );
    FUN_004134c0(uVar8);
  }
  iVar4 = (**(code **)(*local_40 + 0x28))();
  local_5c = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*local_40 + 0x18))(local_40,&local_b0,local_5c);
      cVar3 = FUN_0043fc80(local_b0,local_70);
      if (cVar3 == '\0') {
        uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Number of harmonics must be an integer number!");
        FUN_004134c0(uVar8);
      }
      (**(code **)(*local_40 + 0x18))(local_40,&local_b8,local_5c);
      iVar5 = FUN_0043fc00(local_b8);
      lVar7 = (longlong)local_5c;
      lVar1 = *(longlong *)(param_1 + 0x5590);
      *(int *)(lVar1 + lVar7 * 4) = iVar5;
      if (iVar5 < 1) {
        lVar7 = FUN_0044d490(&PTR_FUN_004334c0,CONCAT71((int7)((ulonglong)lVar1 >> 8),1),
                             L"Number of harmonics must be a positive number!");
        FUN_004134c0();
      }
      if (0x40 < *(int *)(*(longlong *)(param_1 + 0x5590) + lVar7 * 4)) {
        local_d0[0] = 0x40;
        local_c8 = 0;
        FUN_00442f70(&local_c0,L"Number of harmonics exceed a limit (%d)",local_d0,0);
        lVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,local_c0);
        FUN_004134c0();
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x5590) + lVar7 * 4);
      if (local_64 < iVar5) {
        local_64 = iVar5;
      }
      local_5c = local_5c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6c8),local_64 + 4);
  *(undefined4 *)(param_1 + 0x5598) = 1;
  if (*(longlong *)PTR_DAT_02003fc0 == 0) {
    uVar8 = FUN_007fc180(&PTR_FUN_01054688,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02003fc0 = uVar8;
    FUN_01054c00(*(undefined8 *)PTR_DAT_02003fc0,L"Harmonic Balance Analysis is running...");
    FUN_008059a0(*(undefined8 *)PTR_DAT_02003fc0);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  plVar2 = *(longlong **)(param_1 + 0x700);
  uVar6 = (**(code **)(*plVar2 + 0x260))(plVar2);
  (**(code **)(*(longlong *)plVar2[0x9e] + 0x18))((longlong *)plVar2[0x9e],&local_78,uVar6);
  local_118 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
  local_110 = 0;
  local_108 = 0;
  local_100 = *(undefined1 *)(param_1 + 0x559c);
  local_f8 = *(undefined4 *)(param_1 + 0x5598);
  FUN_01b4f420(*(undefined8 *)(param_1 + 0x5580),*(undefined8 *)(param_1 + 0x5590),
               *(undefined8 *)(param_1 + 0x5588),local_78);
  if (*(char *)(*(longlong *)(param_1 + 0x5580) + 0x147d) == '\0') {
    if (*(char *)(param_1 + 0x5568) == '\0') {
      *(undefined1 *)(param_1 + 0x557d) = 1;
      FUN_007fdf10(param_1,*(int *)(param_1 + 0x5578) +
                           *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x9c));
      FUN_01b1d750(param_1,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
      (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),1);
      FUN_0064c650(*(undefined8 *)(param_1 + 0x6b0),5);
      *(undefined1 *)(param_1 + 0x557c) = 1;
      *(undefined1 *)(param_1 + 0x557d) = 0;
    }
    *(undefined1 *)(param_1 + 0x5568) = 0;
    FUN_01b54290(param_1);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_d8);
    FUN_00414ad0(PTR_DAT_02004010 + 0x914,local_d8);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x738),&local_e0);
    FUN_00414ad0(PTR_DAT_02004010 + 0x91c,local_e0);
    FUN_00414ad0(PTR_DAT_02004010 + 0x924,local_78);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    *(undefined4 *)(PTR_DAT_02004010 + 0x934) = uVar6;
    (**(code **)(*local_40 + 0x90))(local_40);
    FUN_00410f20(local_40);
    if (*(longlong *)PTR_DAT_02003fc0 != 0) {
      FUN_00410f20(*(undefined8 *)PTR_DAT_02003fc0);
      *(undefined8 *)PTR_DAT_02003fc0 = 0;
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  else {
    FUN_01b53e60(0,local_90);
  }
  FUN_00414560(&local_e0,2);
  FUN_00414560(&local_c0,3);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414480(&local_98);
  FUN_00414480(&local_78);
  FUN_00414480(&local_20);
  return;
}

