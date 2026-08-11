/* Ghidra address: 01bc3070 */
/* Ghidra symbol: FUN_01bc3070 */


void FUN_01bc3070(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined1 local_88;
  wchar_t *local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_34;
  undefined8 local_30;
  short *local_28 [3];
  
  local_40 = auStack_138;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_50 = 0;
  local_48 = 0;
  local_28[0] = (short *)0x0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  FUN_00c85e90(*(undefined8 *)PTR_DAT_02002c40,&local_30,uVar3,*PTR_DAT_02002480);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  if (cVar2 == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar4 < 1) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_108);
      local_d0 = local_108;
      local_c8 = 0x11;
      FUN_00442f70(local_28,L"[!%s]",&local_d0,0);
      (**(code **)(**(longlong **)(param_1 + 0x760) + 0x78))(*(longlong **)(param_1 + 0x760),0);
      (**(code **)(**(longlong **)(param_1 + 0x760) + 0x78))
                (*(longlong **)(param_1 + 0x760),local_28[0]);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_110);
      local_a0 = local_110;
      local_98 = 0x11;
      local_90 = 0x39;
      local_88 = 0;
      local_80 = L"TMacroHandler";
      local_78 = 0x11;
      FUN_00b92430(&local_118,local_res10[0]);
      local_70 = local_118;
      local_68 = 0x11;
      local_60 = local_30;
      local_58 = 0x11;
      FUN_00442f70(local_28,L"%s,%d,%s,%s,%s",&local_a0,4);
      (**(code **)(**(longlong **)(param_1 + 0x760) + 0x78))
                (*(longlong **)(param_1 + 0x760),local_28[0]);
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x720) + 0x4a0);
      iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
      local_34 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4 + -1);
      local_34 = local_34 + -1;
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x28))
                        (*(longlong **)(param_1 + 0x760));
      if (local_34 < iVar4 + -1) {
        while ((local_28[0] == (short *)0x0 || (*local_28[0] == 0x3b))) {
          local_34 = local_34 + -1;
          (**(code **)(**(longlong **)(param_1 + 0x760) + 0x18))
                    (*(longlong **)(param_1 + 0x760),&local_b8,local_34);
          FUN_0043ea00(local_28,local_b8);
        }
        (**(code **)(**(longlong **)(param_1 + 0x760) + 0x18))
                  (*(longlong **)(param_1 + 0x760),&local_c0,local_34);
        FUN_0043ea00(local_28,local_c0);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_d8);
        local_d0 = local_d8;
        local_c8 = 0x11;
        FUN_00442f70(local_28,L"[!%s]",&local_d0,0);
        (**(code **)(**(longlong **)(param_1 + 0x760) + 200))
                  (*(longlong **)(param_1 + 0x760),local_34 + 2,local_28[0]);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_e0);
        local_a0 = local_e0;
        local_98 = 0x11;
        local_90 = 0x39;
        local_88 = 0;
        local_80 = L"TMacroHandler";
        local_78 = 0x11;
        FUN_00b92430(&local_e8,local_res10[0]);
        local_70 = local_e8;
        local_68 = 0x11;
        local_60 = local_30;
        local_58 = 0x11;
        FUN_00442f70(local_28,L"%s,%d,%s,%s,%s",&local_a0,4);
        (**(code **)(**(longlong **)(param_1 + 0x760) + 200))
                  (*(longlong **)(param_1 + 0x760),local_34 + 3,local_28[0]);
        (**(code **)(**(longlong **)(param_1 + 0x760) + 200))
                  (*(longlong **)(param_1 + 0x760),local_34 + 4,0);
      }
      else {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_f0);
        local_d0 = local_f0;
        local_c8 = 0x11;
        FUN_00442f70(local_28,L"[!%s]",&local_d0,0);
        (**(code **)(**(longlong **)(param_1 + 0x760) + 0x78))(*(longlong **)(param_1 + 0x760),0);
        (**(code **)(**(longlong **)(param_1 + 0x760) + 0x78))
                  (*(longlong **)(param_1 + 0x760),local_28[0]);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_f8);
        local_a0 = local_f8;
        local_98 = 0x11;
        local_90 = 0x39;
        local_88 = 0;
        local_80 = L"TMacroHandler";
        local_78 = 0x11;
        FUN_00b92430(&local_100,local_res10[0]);
        local_70 = local_100;
        local_68 = 0x11;
        local_60 = local_30;
        local_58 = 0x11;
        FUN_00442f70(local_28,L"%s,%d,%s,%s,%s",&local_a0,4);
        (**(code **)(**(longlong **)(param_1 + 0x760) + 0x78))
                  (*(longlong **)(param_1 + 0x760),local_28[0]);
      }
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x720);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    local_34 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],uVar3);
    local_34 = local_34 + -1;
    (**(code **)(**(longlong **)(param_1 + 0x760) + 0x18))
              (*(longlong **)(param_1 + 0x760),&local_48,local_34);
    FUN_0043ea00(local_28,local_48);
    while ((local_28[0] == (short *)0x0 || (*local_28[0] == 0x3b))) {
      local_34 = local_34 + -1;
      (**(code **)(**(longlong **)(param_1 + 0x760) + 0x18))
                (*(longlong **)(param_1 + 0x760),&local_50,local_34);
      FUN_0043ea00(local_28,local_50);
    }
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_a8);
    local_a0 = local_a8;
    local_98 = 0x11;
    local_90 = 0x39;
    local_88 = 0;
    local_80 = L"TMacroHandler";
    local_78 = 0x11;
    FUN_00b92430(&local_b0,local_res10[0]);
    local_70 = local_b0;
    local_68 = 0x11;
    local_60 = local_30;
    local_58 = 0x11;
    FUN_00442f70(local_28,L"%s,%d,%s,%s,%s",&local_a0,4);
    (**(code **)(**(longlong **)(param_1 + 0x760) + 200))
              (*(longlong **)(param_1 + 0x760),local_34 + 1,local_28[0]);
  }
  (**(code **)(**(longlong **)(param_1 + 0x760) + 0x100))
            (*(longlong **)(param_1 + 0x760),*(undefined8 *)(param_1 + 0x770));
  FUN_00414480(&local_118);
  FUN_00414560(&local_110,2);
  FUN_00414480(&local_100);
  FUN_00414560(&local_f8,2);
  FUN_00414480(&local_e8);
  FUN_00414560(&local_e0,2);
  FUN_00414560(&local_c0,3);
  FUN_00414480(&local_a8);
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_30,2);
  FUN_00414480(local_res10);
  return;
}

