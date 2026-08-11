/* Ghidra address: 016fe2a0 */
/* Ghidra symbol: FUN_016fe2a0 */


void FUN_016fe2a0(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong local_res8 [4];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8 [2];
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  int local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_f8 = 0;
  local_100 = 0;
  local_110 = 0;
  local_108 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_38 = 0;
  local_40 = 0;
  local_80 = 0;
  local_88 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (local_res8[0] != 0) {
    if (param_2 == 0) {
      FUN_016fd840(local_res8[0],0,4,0);
    }
    else if ((param_2 == 0x1585) && (param_3 != 0)) {
      lVar2 = FUN_00c87e30(&PTR_FUN_00c87668,1,*(undefined8 *)PTR_DAT_02004030,1);
      FUN_0064de00(*(undefined8 *)(lVar2 + 0x6b0),local_res8[0]);
      FUN_0064cf60(lVar2,0x1585);
      if ((*(char *)(param_3 + 0x331) == '\0') || (*(longlong *)(param_3 + 0x340) == 0)) {
        FUN_016f0060(&local_20,param_3,*(undefined8 *)(param_3 + 0x348),
                     *(undefined4 *)(param_3 + 0x2ec),0);
        bVar4 = *(longlong *)(param_3 + 0x348) != 0;
      }
      else {
        FUN_016f0060(&local_20,param_3,*(undefined8 *)(param_3 + 0x340),0xffffffff,0);
        bVar4 = true;
      }
      FUN_00648780(local_30,local_20);
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x6e0) + 0x4d8);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
      if (!bVar4) {
        plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,0);
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_48,&PTR_PTR_016fda40);
        FUN_00b8e650(uVar3,&local_40,L"Specio.SCurrentValueAtNode",local_48);
        FUN_00648720(&local_80,local_20);
        local_78 = local_80;
        local_70 = 0x11;
        local_68 = *(int *)(param_3 + 0x2ec);
        local_60 = 0;
        FUN_00b8fd60(&local_88,
                     *(undefined8 *)(*(longlong *)(param_3 + 0x118) + (longlong)local_68 * 8),6,0,1)
        ;
        local_58 = local_88;
        local_50 = 0x11;
        FUN_00442f70(&local_38,local_40,&local_78,2);
        plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_a0,&PTR_PTR_016fda50);
        FUN_00b8e650(uVar3,&local_98,L"Specio.SOldValueAtNode",local_a0);
        FUN_00648720(&local_a8,local_20);
        local_78 = local_a8;
        local_70 = 0x11;
        local_68 = *(int *)(param_3 + 0x2ec);
        local_60 = 0;
        FUN_00b8fd60(&local_b0,
                     *(undefined8 *)(*(longlong *)(param_3 + 0x128) + (longlong)local_68 * 8),6,0,1)
        ;
        local_58 = local_b0;
        local_50 = 0x11;
        FUN_00442f70(&local_90,local_98,&local_78,2);
        plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_90);
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_c8,&PTR_PTR_016fda60);
        FUN_00b8e650(uVar3,&local_c0,L"Specio.SErrorAtNode",local_c8);
        local_e8[0] = *(int *)(param_3 + 0x2ec);
        local_e0 = 0;
        uVar3 = FUN_0040c850(*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)local_e8[0] * 8)
                             - *(double *)
                                (*(longlong *)(param_3 + 0x128) + (longlong)local_e8[0] * 8));
        FUN_00b8fd60(&local_f0,uVar3,6,0,1);
        local_d8 = local_f0;
        local_d0 = 0x11;
        FUN_00442f70(&local_b8,local_c0,local_e8,1);
        plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_b8);
        uVar3 = FUN_00b89270();
        FUN_0041ddd0(&local_108,&PTR_PTR_016fda70);
        FUN_00b8e650(uVar3,&local_100,L"Specio.SToleranceAtNode",local_108);
        local_e8[0] = *(int *)(param_3 + 0x2ec);
        local_e0 = 0;
        FUN_00b8fd60(&local_110,*(undefined8 *)(param_3 + 0x358),6,0,1);
        local_d8 = local_110;
        local_d0 = 0x11;
        FUN_00442f70(&local_f8,local_100,local_e8,1);
        plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x6e0) + 0x4d8);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_f8);
      }
      FUN_008059a0(lVar2);
    }
    else {
      FUN_016fd840(local_res8[0],0,0x404,param_2);
    }
  }
  FUN_00414560(&local_110,5);
  FUN_00414560(&local_c8,10);
  FUN_00414560(&local_48,4);
  FUN_00414480(&local_20);
  FUN_00414480(local_res8);
  return;
}

