/* Ghidra address: 0105d2f0 */
/* Ghidra symbol: FUN_0105d2f0 */


void FUN_0105d2f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
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
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
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
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = (undefined4 *)0x0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_01b22620(param_2,L"Arduino.h",&local_44,0);
  (**(code **)(*param_2 + 0x18))(param_2,&local_58,local_44);
  FUN_00441640(&local_50,local_58);
  FUN_0044f8b0(&local_40,local_50);
  if ((cVar1 != '\0') && (iVar2 = (**(code **)(*param_2 + 0x28))(param_2), 0 < iVar2)) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_40);
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 == 0) {
    cVar1 = FUN_01b227a0(param_2,L"pins_arduino.h",L"variants\\mega",&local_44);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,&local_68,local_44);
      FUN_00441640(&local_60,local_68);
      FUN_0044f8b0(&local_38,local_60);
      FUN_00416ba0(&local_78,L"variants\\",*(undefined8 *)(param_1 + 200));
      FUN_00450070(&local_70,local_38,L"variants\\mega",local_78,1);
      FUN_00414b50(&local_38,local_70);
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38)
      ;
    }
  }
  else if (iVar2 == 2) {
    cVar1 = FUN_01b227a0(param_2,L"pins_arduino.h",L"variants\\nona4809",&local_44);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,&local_88,local_44);
      FUN_00441640(&local_80,local_88);
      FUN_0044f8b0(&local_38,local_80);
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38)
      ;
    }
    cVar1 = FUN_01b22620(param_2,L"WString.h",&local_44,0);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,&local_98,local_44);
      FUN_00441640(&local_90,local_98);
      FUN_0044f8b0(&local_38,local_90);
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38)
      ;
    }
  }
  else if (iVar2 == 1) {
    FUN_00416ba0(&local_a0,L"variants\\",*(undefined8 *)(param_1 + 200));
    FUN_00450070(&local_38,local_40,L"cores\\arduino",local_a0,1);
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38);
    FUN_01b22620(param_2,L"arm_common_tables.h",&local_44,1);
    (**(code **)(*param_2 + 0x18))(param_2,&local_b0,local_44);
    FUN_00441640(&local_a8,local_b0);
    FUN_0044f8b0(&local_38,local_a8);
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38);
    FUN_01b22620(param_2,L"samd.h",&local_44,1);
    (**(code **)(*param_2 + 0x18))(param_2,&local_c0,local_44);
    FUN_00441640(&local_b8,local_c0);
    FUN_0044f8b0(&local_38,local_b8);
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38);
    FUN_01b22620(param_2,L"libarm_cortexM7l_math.a",&local_44,1);
    (**(code **)(*param_2 + 0x18))(param_2,&local_d8,local_44);
    FUN_00441640(&local_d0,local_d8);
    FUN_0044f8b0(&local_c8,local_d0);
    FUN_00414ad0(param_1 + 0x88,local_c8);
    FUN_01b227a0(param_2,L"flash_with_bootloader.ld",L"mkr1000",&local_44);
    (**(code **)(*param_2 + 0x18))(param_2,&local_f0,local_44);
    FUN_00441640(&local_e8,local_f0);
    FUN_0044f8b0(&local_e0,local_e8);
    FUN_00414ad0(param_1 + 0x90,local_e0);
  }
  else if (iVar2 == 3) {
    FUN_00416ba0(&local_f8,L"variants\\",*(undefined8 *)(param_1 + 200));
    FUN_00450070(&local_38,local_40,L"cores\\arduino",local_f8,1);
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38);
    cVar1 = FUN_01b227a0(param_2,L"system_nrf51.h",L"components\\toolchain",&local_44);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,&local_108,local_44);
      FUN_00441640(&local_100,local_108);
      FUN_0044f8b0(&local_38,local_100);
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38)
      ;
    }
    FUN_01b22620(param_2,L"arm_common_tables.h",&local_44,1);
    (**(code **)(*param_2 + 0x18))(param_2,&local_118,local_44);
    FUN_00441640(&local_110,local_118);
    FUN_0044f8b0(&local_38,local_110);
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38);
    cVar1 = FUN_01b227a0(param_2,L"gcc_nrf51_common.ld",L"toolchain\\gcc",&local_44);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,&local_128,local_44);
      FUN_00441640(&local_120,local_128);
      FUN_0044f8b0(&local_38,local_120);
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38)
      ;
    }
    cVar1 = FUN_01b227a0(param_2,L"nrf51.h",L"components\\device",&local_44);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,&local_138,local_44);
      FUN_00441640(&local_130,local_138);
      FUN_0044f8b0(&local_38,local_130);
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38)
      ;
    }
    FUN_01b22620(param_2,L"nrf_delay.h",&local_44,1);
    (**(code **)(*param_2 + 0x18))(param_2,&local_148,local_44);
    FUN_00441640(&local_140,local_148);
    FUN_0044f8b0(&local_38,local_140);
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38);
    cVar1 = FUN_01b227a0(param_2,L"ble.h",L"s110\\headers",&local_44);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,&local_158,local_44);
      FUN_00441640(&local_150,local_158);
      FUN_0044f8b0(&local_38,local_150);
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38)
      ;
    }
    cVar1 = FUN_01b22620(param_2,L"WString.h",&local_44,0);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,&local_168,local_44);
      FUN_00441640(&local_160,local_168);
      FUN_0044f8b0(&local_38,local_160);
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38)
      ;
    }
    cVar1 = FUN_01b227a0(param_2,L"pins_arduino.h",L"variants\\BBCmicrobit",&local_44);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,&local_178,local_44);
      FUN_00441640(&local_170,local_178);
      FUN_0044f8b0(&local_38,local_170);
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_38)
      ;
    }
    FUN_01b22620(param_2,L"armgcc_s110_nrf51822_xxaa.ld",&local_44,0);
    (**(code **)(*param_2 + 0x18))(param_2,&local_190,local_44);
    FUN_00441640(&local_188,local_190);
    FUN_0044f8b0(&local_180,local_188);
    FUN_00414ad0(param_1 + 0x90,local_180);
  }
  FUN_004b37d0(*(undefined8 *)(param_1 + 0xe8),&local_198);
  FUN_00414ad0(param_1 + 0x38,local_198);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar4,*(undefined8 *)(param_1 + 0x40));
  iVar2 = (**(code **)(*plVar4 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (*(int *)(param_1 + 0x68) == 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_1a0,iVar5);
        iVar3 = FUN_00416db0(local_1a0,L"variant.cpp");
        if (iVar3 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_1a8,iVar5);
          cVar1 = FUN_01b227a0(param_2,local_1a8,L"mkr1000",&local_44);
        }
        else {
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_1b0,iVar5);
          iVar3 = FUN_00416db0(local_1b0,L"startup.c");
          if (iVar3 == 0) {
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_1b8,iVar5);
            cVar1 = FUN_01b227a0(param_2,local_1b8,L"\\startup.c",&local_44);
          }
          else {
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_1c0,iVar5);
            cVar1 = FUN_01b22620(param_2,local_1c0,&local_44,1);
          }
        }
      }
      else {
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_1c8,iVar5);
        cVar1 = FUN_01b22620(param_2,local_1c8,&local_44,1);
      }
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x78))
                  (*(longlong **)(param_1 + 0xf0),L"<dir not found>");
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2,&local_1d0,local_44);
        FUN_00441640(&local_38,local_1d0);
        (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x78))
                  (*(longlong **)(param_1 + 0xf0),local_38);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004b4b10(plVar4,*(undefined8 *)(param_1 + 0x48));
  iVar2 = (**(code **)(*plVar4 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_1d8,iVar5);
      cVar1 = FUN_01b22620(param_2,local_1d8,&local_44,1);
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x78))
                  (*(longlong **)(param_1 + 0xf8),L"<dir not found>");
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2,&local_1e0,local_44);
        FUN_00441640(&local_38,local_1e0);
        (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x78))
                  (*(longlong **)(param_1 + 0xf8),local_38);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar4);
  FUN_00414560(&local_1e0,0x33);
  FUN_00414560(&local_40,3);
  return;
}

