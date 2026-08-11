/* Ghidra address: 01629b30 */
/* Ghidra symbol: FUN_01629b30 */


void FUN_01629b30(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_188 [32];
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
  undefined1 *local_100;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_100 = auStack_188;
  local_150 = 0;
  local_158 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_b0 = param_2;
  local_b8 = FUN_0161bc10(*(undefined4 *)(param_2 + 0x5bc),*(undefined8 *)(param_3 + 0x48));
  FUN_01628cb0(&local_68,*(undefined8 *)(param_1 + 0x58),param_3);
  if (*(char *)(param_1 + 0x51) == '\0') {
    local_c8 = *(undefined8 *)(local_b0 + 0x78);
  }
  else {
    local_c8 = *(undefined8 *)(local_b0 + 0x70);
  }
  local_60 = FUN_01636d10(local_b0,local_c8,local_68);
  local_c0 = *(longlong *)(local_60 + 0x10);
  local_3c = *(int *)(local_c0 + 0x10);
  FUN_01618cb0(&local_108,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10),0);
  FUN_01618cb0(&local_110,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x18),0);
  local_168 = local_110;
  FUN_00416cd0(&local_88,3,local_108,&DAT_0162a4b0);
  local_34 = 0;
  iVar2 = local_3c;
  if (-1 < local_3c + -1) {
    do {
      local_d0 = FUN_004aeac0(local_c0,local_34);
      iVar3 = *(int *)(*(longlong *)(local_d0 + 0x20) + 0x10);
      local_38 = 0;
      local_40 = iVar3;
      if (-1 < iVar3 + -1) {
        do {
          local_58 = FUN_004aeac0(*(undefined8 *)(local_d0 + 0x20),local_38);
          FUN_01618cb0(&local_118,*(undefined8 *)(local_58 + 0x10),0);
          FUN_01618cb0(&local_120,*(undefined8 *)(local_58 + 0x18),0);
          local_168 = local_120;
          FUN_00416cd0(&local_80,3,local_118,&DAT_0162a4b0);
          FUN_00414b50(&local_a0,local_80);
          local_a2 = 0;
          if (*(char *)(local_58 + 8) == '2') {
            local_a2 = 1;
            FUN_01618e70(&local_90,*(undefined8 *)(local_58 + 0x10),0);
            FUN_01618e70(&local_98,*(undefined8 *)(local_58 + 0x18),0);
            local_168 = local_90;
            local_160 = local_98;
            FUN_00416cd0(&local_128,4,*(undefined8 *)(param_1 + 0x38),&DAT_0162a4c0);
            local_48 = (**(code **)(**(longlong **)(local_b0 + 0x6d0) + 0xb0))
                                 (*(longlong **)(local_b0 + 0x6d0),local_128);
            if ((local_38 == 0) && (local_48 == -1)) {
              (**(code **)(**(longlong **)(local_b0 + 0x6b0) + 0x78))
                        (*(longlong **)(local_b0 + 0x6b0),local_90);
              (**(code **)(**(longlong **)(local_b0 + 0x6b0) + 0x78))
                        (*(longlong **)(local_b0 + 0x6b0),local_98);
              local_168 = local_80;
              FUN_00416cd0(&local_a0,3,*(undefined8 *)(param_1 + 0x38),&DAT_0162a4c0);
              local_168 = local_90;
              local_160 = local_98;
              FUN_00416cd0(&local_130,4,*(undefined8 *)(param_1 + 0x38),&DAT_0162a4c0);
              (**(code **)(**(longlong **)(local_b0 + 0x6d0) + 0x78))
                        (*(longlong **)(local_b0 + 0x6d0),local_130);
              local_168 = local_90;
              local_160 = local_98;
              FUN_00416cd0(&local_138,4,*(undefined8 *)(param_1 + 0x38),&DAT_0162a4c0);
              local_48 = (**(code **)(**(longlong **)(local_b0 + 0x6d0) + 0xb0))
                                   (*(longlong **)(local_b0 + 0x6d0),local_138);
              if (local_48 < 0) {
                FUN_01613110(L"TSpiceComp.CollectControlComponents");
              }
              FUN_0043f750(&local_140,local_48);
              FUN_00416ba0(local_58 + 0x40,&DAT_0162a524,local_140);
              FUN_0164acb0(local_b0,*(undefined8 *)(local_58 + 0x40));
              FUN_0164ad20(local_b0,*(undefined8 *)(local_58 + 0x40));
            }
            if (local_48 < 0) {
              FUN_01613110(L"TSpiceComp.CollectControlComponents");
            }
            FUN_0043f750(&local_148,local_48);
            FUN_00416ba0(local_58 + 0x40,&DAT_0162a524);
          }
          else if ((*(char *)(local_58 + 8) == '4') && (local_a2 = 1, local_38 == 0)) {
            local_168 = local_80;
            FUN_00416cd0(&local_a0,3,*(undefined8 *)(param_1 + 0x38),&DAT_0162a4c0);
            iVar1 = FUN_00416db0(local_88,local_80);
            if (iVar1 == 0) {
              FUN_00416ba0(local_58 + 0x40,&DAT_0162a538);
            }
            else {
              FUN_01618e70(&local_90,*(undefined8 *)(local_58 + 0x10),0);
              FUN_01618e70(&local_98,*(undefined8 *)(local_58 + 0x18),0);
              local_e0 = FUN_01628af0(local_90,local_98,param_3);
              if (local_e0 == 0) {
                FUN_01618e70(&local_90,*(undefined8 *)(local_58 + 0x18),0);
                FUN_01618e70(&local_98,*(undefined8 *)(local_58 + 0x10),0);
                local_e0 = FUN_01628af0(local_90,local_98,param_3);
                if (local_e0 == 0) {
                  FUN_01626f30(local_58,param_3,&local_4c,&local_50);
                  local_e8 = (longlong *)FUN_0163e040(param_3,local_4c,local_50,local_58 + 0x4b);
                  if (local_e8 == (longlong *)0x0) {
                    FUN_016351a0(local_b8,&local_158);
                    FUN_00416ba0(&local_150,L"Branch not found: component: ",local_158);
                    FUN_01613110(local_150);
                  }
                  else {
                    (**(code **)(*local_e8 + 0x288))(local_e8,&local_a0);
                    *(undefined1 *)(local_58 + 0x4c) = 1;
                  }
                }
                else {
                  *(undefined1 *)(local_58 + 0x4b) = 1;
                }
              }
              FUN_00416ba0(local_58 + 0x40,&DAT_0162a538);
            }
            iVar1 = (**(code **)(**(longlong **)(local_b0 + 0x6b8) + 0xb0))
                              (*(longlong **)(local_b0 + 0x6b8),*(undefined8 *)(local_58 + 0x40));
            if (iVar1 == -1) {
              FUN_0164acb0(local_b0,*(undefined8 *)(local_58 + 0x40));
            }
            iVar1 = (**(code **)(**(longlong **)(local_b0 + 0x6c8) + 0xb0))
                              (*(longlong **)(local_b0 + 0x6c8),*(undefined8 *)(local_58 + 0x40));
            if (iVar1 == -1) {
              FUN_0164ad90(local_b0,*(undefined8 *)(local_58 + 0x40));
            }
            iVar1 = (**(code **)(**(longlong **)(local_b0 + 0x88) + 0xb0))
                              (*(longlong **)(local_b0 + 0x88),*(undefined8 *)(local_58 + 0x40));
            if ((iVar1 == -1) && (*(char *)(local_58 + 0x4c) == '\0')) {
              (**(code **)(**(longlong **)(local_b0 + 0x88) + 0x80))
                        (*(longlong **)(local_b0 + 0x88),*(undefined8 *)(local_58 + 0x40));
            }
          }
          local_38 = local_38 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_30);
  FUN_00414560(&local_158,0xb);
  FUN_00414560(&local_a0,8);
  return;
}

