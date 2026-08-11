/* Ghidra address: 016fda80 */
/* Ghidra symbol: FUN_016fda80 */


void FUN_016fda80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108 [2];
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_118 = 0;
  local_120 = 0;
  local_130 = 0;
  local_128 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_110 = 0;
  local_e8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_58 = 0;
  local_60 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  cVar2 = FUN_004113d0(param_1,&PTR_FUN_01af2dc0);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(param_1,&PTR_FUN_01af3038);
    if (cVar2 == '\0') {
      FUN_016fd9b0(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    }
    else {
      lVar4 = FUN_00c87e30(&PTR_FUN_00c87668,1,*(undefined8 *)PTR_DAT_02004030,0);
      FUN_0064de00(*(undefined8 *)(lVar4 + 0x6b0),*(undefined8 *)(param_1 + 8));
      FUN_0064cf60(lVar4,*(undefined4 *)(param_1 + 0x10));
      lVar3 = *(longlong *)(param_1 + 0x58);
      if ((*(char *)(lVar3 + 0x331) == '\0') || (*(longlong *)(lVar3 + 0x340) == 0)) {
        FUN_00414b50(local_30,*(undefined8 *)(param_1 + 0x38));
        bVar6 = *(longlong *)(lVar3 + 0x348) != 0;
      }
      else {
        FUN_00414b50(local_30,*(undefined8 *)(param_1 + 0x30));
        bVar6 = true;
      }
      FUN_00648780(&local_50,local_30[0]);
      plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x6e0) + 0x4d8);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_50);
      if ((!bVar6) && (-1 < *(int *)(*(longlong *)(param_1 + 0x58) + 0x2ec))) {
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,0);
        uVar5 = FUN_00b89270();
        FUN_0041ddd0(&local_68,&PTR_PTR_016fda40);
        FUN_00b8e650(uVar5,&local_60,L"Specio.SCurrentValueAtNode",local_68);
        FUN_00648720(&local_a0,local_30[0]);
        local_98 = local_a0;
        local_90 = 0x11;
        local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x2ec);
        local_80 = 0;
        FUN_00b8fd60(&local_a8,*(undefined8 *)(param_1 + 0x40),6,0,1);
        local_78 = local_a8;
        local_70 = 0x11;
        FUN_00442f70(&local_58,local_60,&local_98,2);
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_58);
        uVar5 = FUN_00b89270();
        FUN_0041ddd0(&local_c0,&PTR_PTR_016fda50);
        FUN_00b8e650(uVar5,&local_b8,L"Specio.SOldValueAtNode",local_c0);
        FUN_00648720(&local_c8,local_30[0]);
        local_98 = local_c8;
        local_90 = 0x11;
        local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x2ec);
        local_80 = 0;
        FUN_00b8fd60(&local_d0,*(undefined8 *)(param_1 + 0x48),6,0,1);
        local_78 = local_d0;
        local_70 = 0x11;
        FUN_00442f70(&local_b0,local_b8,&local_98,2);
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_b0);
        uVar5 = FUN_00b89270();
        FUN_0041ddd0(&local_e8,&PTR_PTR_016fda60);
        FUN_00b8e650(uVar5,&local_e0,L"Specio.SErrorAtNode",local_e8);
        local_108[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x2ec);
        local_100 = 0;
        uVar5 = FUN_0040c850(*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x48));
        FUN_00b8fd60(&local_110,uVar5,6,0,1);
        local_f8 = local_110;
        local_f0 = 0x11;
        FUN_00442f70(&local_d8,local_e0,local_108,1);
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_d8);
        uVar5 = FUN_00b89270();
        FUN_0041ddd0(&local_128,&PTR_PTR_016fda70);
        FUN_00b8e650(uVar5,&local_120,L"Specio.SToleranceAtNode",local_128);
        local_108[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x2ec);
        local_100 = 0;
        FUN_00b8fd60(&local_130,*(undefined8 *)(param_1 + 0x50),6,0,1);
        local_f8 = local_130;
        local_f0 = 0x11;
        FUN_00442f70(&local_118,local_120,local_108,1);
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_118);
      }
      FUN_008059a0(lVar4);
    }
  }
  else {
    lVar3 = FUN_00c87e30(&PTR_FUN_00c87668,1,*(undefined8 *)PTR_DAT_02004030,0);
    FUN_0064de00(*(undefined8 *)(lVar3 + 0x6b0),*(undefined8 *)(param_1 + 8));
    FUN_0064cf60(lVar3,*(undefined4 *)(param_1 + 0x10));
    FUN_00648780(local_40,*(undefined8 *)(param_1 + 0x40));
    plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x6e0) + 0x4d8);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_40[0]);
    if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x34)) {
      plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x6e0) + 0x4d8);
      (**(code **)(*plVar1 + 0x78))(plVar1,0);
      FUN_00648780(&local_48,*(undefined8 *)(param_1 + 0x48));
      plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x6e0) + 0x4d8);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_48);
    }
    FUN_008059a0(lVar3);
  }
  FUN_00414560(&local_130,5);
  FUN_00414560(&local_e8,10);
  FUN_00414560(&local_68,6);
  FUN_00414480(local_30);
  return;
}

