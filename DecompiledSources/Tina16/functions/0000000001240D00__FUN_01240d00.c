/* Ghidra address: 01240d00 */
/* Ghidra symbol: FUN_01240d00 */


void FUN_01240d00(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
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
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_180 = 0;
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_150 = 0;
  local_158 = 0;
  local_140 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_128 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_60 = 0;
  local_78 = 0;
  local_30[0] = 0;
  local_58 = 0;
  local_20[0] = 0;
  lVar2 = *(longlong *)(param_1 + 0x600);
  if (*(char *)(lVar2 + 0x1fc8) == '\0') {
    FUN_00414b50(local_20,L"Passive");
  }
  else {
    FUN_00414b50(local_20,L"Active");
  }
  FUN_0123b0a0(&local_58,lVar2);
  local_50 = local_58;
  local_48 = 0x11;
  local_40 = local_20[0];
  local_38 = 0x11;
  FUN_00442f70(local_30,L"Type: %s, %s",&local_50,1);
  (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
            (*(longlong **)(param_1 + 0x5f0),local_30[0]);
  puVar3 = *(undefined8 **)(param_1 + 0x600);
  sVar1 = *(short *)((longlong)puVar3 + 0x1fa4);
  if ((sVar1 == 0x4c) || (sVar1 == 0x48)) {
    FUN_00b8fd60(&local_78,*puVar3,*PTR_DAT_02005310,0,1);
    local_70 = local_78;
    local_68 = 0x11;
    FUN_00442f70(&local_60,L"Passband: %sdB",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_60)
    ;
    FUN_00b8fd60(&local_88,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x10),*PTR_DAT_02005310,
                 0,1);
    local_70 = local_88;
    local_68 = 0x11;
    FUN_00442f70(&local_80,L"Stopband: %sdB",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_80)
    ;
    FUN_00b8fd60(&local_98,*(double *)(*(longlong *)(param_1 + 0x600) + 0x20) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_98;
    local_68 = 0x11;
    FUN_00442f70(&local_90,L"Passband frequency: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_90)
    ;
    FUN_00b8fd60(&local_a8,*(double *)(*(longlong *)(param_1 + 0x600) + 0x30) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_a8;
    local_68 = 0x11;
    FUN_00442f70(&local_a0,L"Stopband frequency: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_a0)
    ;
    uVar4 = FUN_0123b1d0(*(undefined8 *)(param_1 + 0x600));
    local_70 = CONCAT44(local_70._4_4_,uVar4);
    local_68 = 0;
    FUN_00442f70(&local_b0,L"Roll-off rate: %ddB/d",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_b0)
    ;
  }
  else if (sVar1 == 0x50) {
    FUN_00b8fd60(&local_c0,puVar3[2],*PTR_DAT_02005310,0,1);
    local_70 = local_c0;
    local_68 = 0x11;
    FUN_00442f70(&local_b8,L"Stopband: %sdB",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_b8)
    ;
    FUN_00b8fd60(&local_d0,**(undefined8 **)(param_1 + 0x600),*PTR_DAT_02005310,0,1);
    local_70 = local_d0;
    local_68 = 0x11;
    FUN_00442f70(&local_c8,L"Passband: %sdB",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_c8)
    ;
    FUN_00b8fd60(&local_e0,*(double *)(*(longlong *)(param_1 + 0x600) + 0x30) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_e0;
    local_68 = 0x11;
    FUN_00442f70(&local_d8,L"Stopband frequency #1: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_d8)
    ;
    FUN_00b8fd60(&local_f0,*(double *)(*(longlong *)(param_1 + 0x600) + 0x20) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_f0;
    local_68 = 0x11;
    FUN_00442f70(&local_e8,L"Passband frequency #1: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_e8)
    ;
    FUN_00b8fd60(&local_100,*(double *)(*(longlong *)(param_1 + 0x600) + 0x28) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_100;
    local_68 = 0x11;
    FUN_00442f70(&local_f8,L"Passband frequency #2: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))(*(longlong **)(param_1 + 0x5f0),local_f8)
    ;
    FUN_00b8fd60(&local_110,*(double *)(*(longlong *)(param_1 + 0x600) + 0x38) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_110;
    local_68 = 0x11;
    FUN_00442f70(&local_108,L"Stopband frequency #2: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
              (*(longlong **)(param_1 + 0x5f0),local_108);
    uVar4 = FUN_0123b1d0(*(undefined8 *)(param_1 + 0x600));
    local_70 = CONCAT44(local_70._4_4_,uVar4);
    local_68 = 0;
    FUN_00442f70(&local_118,L"Roll-off rate: %ddB/d",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
              (*(longlong **)(param_1 + 0x5f0),local_118);
  }
  else if (sVar1 == 0x53) {
    FUN_00b8fd60(&local_128,*puVar3,*PTR_DAT_02005310,0,1);
    local_70 = local_128;
    local_68 = 0x11;
    FUN_00442f70(&local_120,L"Passband: %sdB",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
              (*(longlong **)(param_1 + 0x5f0),local_120);
    FUN_00b8fd60(&local_138,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x10),*PTR_DAT_02005310
                 ,0,1);
    local_70 = local_138;
    local_68 = 0x11;
    FUN_00442f70(&local_130,L"Stopband: %sdB",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
              (*(longlong **)(param_1 + 0x5f0),local_130);
    FUN_00b8fd60(&local_148,*(double *)(*(longlong *)(param_1 + 0x600) + 0x20) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_148;
    local_68 = 0x11;
    FUN_00442f70(&local_140,L"Passband frequency #1: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
              (*(longlong **)(param_1 + 0x5f0),local_140);
    FUN_00b8fd60(&local_158,*(double *)(*(longlong *)(param_1 + 0x600) + 0x30) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_158;
    local_68 = 0x11;
    FUN_00442f70(&local_150,L"Stopband frequency #1: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
              (*(longlong **)(param_1 + 0x5f0),local_150);
    FUN_00b8fd60(&local_168,*(double *)(*(longlong *)(param_1 + 0x600) + 0x38) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_168;
    local_68 = 0x11;
    FUN_00442f70(&local_160,L"Stopband frequency #2: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
              (*(longlong **)(param_1 + 0x5f0),local_160);
    FUN_00b8fd60(&local_178,*(double *)(*(longlong *)(param_1 + 0x600) + 0x28) / 6.2831853071796,
                 *PTR_DAT_02005310,0,1);
    local_70 = local_178;
    local_68 = 0x11;
    FUN_00442f70(&local_170,L"Passband frequency #2: %sHz",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
              (*(longlong **)(param_1 + 0x5f0),local_170);
    uVar4 = FUN_0123b1d0(*(undefined8 *)(param_1 + 0x600));
    local_70 = CONCAT44(local_70._4_4_,uVar4);
    local_68 = 0;
    FUN_00442f70(&local_180,L"Roll-off rate: %ddB/d",&local_70,0);
    (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x78))
              (*(longlong **)(param_1 + 0x5f0),local_180);
  }
  FUN_00414560(&local_180,0x22);
  FUN_00414560(&local_60,2);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

