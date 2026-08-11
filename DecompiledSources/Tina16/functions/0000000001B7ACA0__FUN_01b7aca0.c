/* Ghidra address: 01b7aca0 */
/* Ghidra symbol: FUN_01b7aca0 */


void FUN_01b7aca0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_168 [32];
  undefined *local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
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
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4a;
  char local_49;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  
  local_60 = auStack_168;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_108 = 0;
  local_110 = 0;
  local_120 = 0;
  local_118 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_70 = 0;
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x728) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  local_58 = 0;
  FUN_0043f750(&local_68,0);
  FUN_00416ba0(&local_40,&DAT_01b7b6f0,local_68);
  FUN_00416ba0(&local_80,local_40,L"_Name");
  local_148 = &DAT_01b7b760;
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x10))
            (*(longlong **)(param_1 + 0x800),&local_78,L"Schematic Editor Color Sets",local_80);
  FUN_00415dd0(&local_88,local_78,0);
  FUN_00b0d000(&local_70,local_88,0xfde9);
  FUN_004168b0(&local_38,local_70);
  FUN_00416ba0(&local_90,local_40,&DAT_01b7b770);
  local_148 = (undefined *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x10))
            (*(longlong **)(param_1 + 0x800),&local_48,L"Schematic Editor Color Sets",local_90);
  do {
    iVar2 = FUN_00416db0(local_38,&DAT_01b7b760);
    if (iVar2 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x728) + 0x4f0);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar2 == 0) {
        plVar1 = *(longlong **)(param_1 + 0x728);
        uVar4 = FUN_00b89270();
        FUN_00b8e520(uVar4,&local_130,0x853);
        uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x78))((longlong *)plVar1[0x9e],local_130);
        (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
        (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),0);
      }
      else {
        local_49 = FUN_01b7aba0(auStack_168,&local_50);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x728) + 0x4f0);
        local_54 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2);
        local_4a = local_54 != -1;
        if (local_49 == '\0') {
          if ((bool)local_4a) {
            (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
                      (*(longlong **)(param_1 + 0x728),local_54);
          }
          else {
            plVar1 = *(longlong **)(param_1 + 0x728);
            uVar4 = FUN_00b89270();
            FUN_00b8e520(uVar4,&local_138,0x853);
            uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x78))
                              ((longlong *)plVar1[0x9e],local_138);
            (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
          }
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))
                    (*(longlong **)(param_1 + 0x728),local_50);
        }
      }
      FUN_00414560(&local_138,3);
      FUN_004144d0(&local_120);
      FUN_00414560(&local_118,2);
      FUN_00414520(&local_108);
      FUN_00414480(&local_100);
      FUN_00414560(&local_e8,3);
      FUN_00414520(&local_d0);
      FUN_004144d0(&local_c8);
      FUN_00414560(&local_c0,3);
      FUN_00414520(&local_a8);
      FUN_004144d0(&local_a0);
      FUN_00414560(&local_98,2);
      FUN_004144d0(&local_88);
      FUN_00414560(&local_80,2);
      FUN_00414520(&local_70);
      FUN_00414480(&local_68);
      FUN_00414560(&local_48,3);
      return;
    }
    iVar2 = FUN_00416db0(local_38,L"Black background");
    if (iVar2 == 0) {
LAB_01b7af51:
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_38,0x851);
      FUN_00416ba0(&local_98,local_40,L"_Name");
      FUN_004168e0(&local_a8,local_38);
      FUN_00b0cea0(&local_a0,local_a8,0xfde9);
      FUN_00416880(&local_b0,local_a0);
      (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
                (*(longlong **)(param_1 + 0x800),L"Schematic Editor Color Sets",local_98,local_b0);
      FUN_00416ba0(&local_b8,local_40,&DAT_01b7b770);
      (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
                (*(longlong **)(param_1 + 0x800),L"Schematic Editor Color Sets",local_b8,
                 L"{6A65B724-CD3D-4588-A748-E6453AA5351A}");
      FUN_00414b50(&local_48,L"{6A65B724-CD3D-4588-A748-E6453AA5351A}");
    }
    else {
      iVar2 = FUN_00416db0(local_48,L"{6A65B724-CD3D-4588-A748-E6453AA5351A}");
      if (iVar2 == 0) goto LAB_01b7af51;
      iVar2 = FUN_00416db0(local_38,L"White background");
      if (iVar2 == 0) {
LAB_01b7b080:
        uVar4 = FUN_00b89270();
        FUN_00b8e520(uVar4,&local_38,0x852);
        FUN_00416ba0(&local_c0,local_40,L"_Name");
        FUN_004168e0(&local_d0,local_38);
        FUN_00b0cea0(&local_c8,local_d0,0xfde9);
        FUN_00416880(&local_d8,local_c8);
        (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
                  (*(longlong **)(param_1 + 0x800),L"Schematic Editor Color Sets",local_c0,local_d8)
        ;
        FUN_00416ba0(&local_e0,local_40,&DAT_01b7b770);
        (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
                  (*(longlong **)(param_1 + 0x800),L"Schematic Editor Color Sets",local_e0,
                   L"{10920985-9400-45D4-B218-55DC7E202202}");
        FUN_00414b50(&local_48,L"{10920985-9400-45D4-B218-55DC7E202202}");
      }
      else {
        iVar2 = FUN_00416db0(local_48,L"{10920985-9400-45D4-B218-55DC7E202202}");
        if (iVar2 == 0) goto LAB_01b7b080;
      }
    }
    local_30 = (undefined8 *)FUN_004095c0(0x10);
    if (local_48 == 0) {
      FUN_0043dc90(local_30);
      FUN_0043dec0(&local_48,local_30);
      FUN_00416ba0(&local_e8,local_40,&DAT_01b7b770);
      (**(code **)(**(longlong **)(param_1 + 0x800) + 0x18))
                (*(longlong **)(param_1 + 0x800),L"Schematic Editor Color Sets",local_e8,local_48);
    }
    FUN_0043dd70(&local_f8,local_48);
    *local_30 = local_f8;
    local_30[1] = uStack_f0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x728) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_38,local_30);
    local_58 = local_58 + 1;
    FUN_0043f750(&local_100,local_58);
    FUN_00416ba0(&local_40,&DAT_01b7b6f0,local_100);
    FUN_00416ba0(&local_118,local_40,L"_Name");
    local_148 = &DAT_01b7b760;
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x10))
              (*(longlong **)(param_1 + 0x800),&local_110,L"Schematic Editor Color Sets",local_118);
    FUN_00415dd0(&local_120,local_110,0);
    FUN_00b0d000(&local_108,local_120,0xfde9);
    FUN_004168b0(&local_38,local_108);
    FUN_00416ba0(&local_128,local_40,&DAT_01b7b770);
    local_148 = (undefined *)0x0;
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x10))
              (*(longlong **)(param_1 + 0x800),&local_48,L"Schematic Editor Color Sets",local_128);
  } while( true );
}

