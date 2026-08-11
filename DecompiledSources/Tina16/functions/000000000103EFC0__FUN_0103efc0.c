/* Ghidra address: 0103efc0 */
/* Ghidra symbol: FUN_0103efc0 */


void FUN_0103efc0(longlong param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  int local_148;
  int local_144;
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
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x10);
  local_148 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x90),local_148);
      if (*(char *)(lVar3 + 0x30) == '\x05') {
        if (*(char *)(lVar3 + 0x125) == '\0') {
          dVar8 = (double)*(int *)(lVar3 + 0x120) / 1000.0;
        }
        else {
          dVar8 = (double)*(int *)(lVar3 + 0x120) / 1000000.0;
        }
        local_144 = FUN_0040c770(dVar8 / (1.0 / *(double *)(param_1 + 0x78)));
        if (local_144 == 0) {
          local_144 = 1;
        }
        if (param_3 == '\0') {
          *(undefined4 *)(param_1 + 0x924) = 1;
        }
        else {
          FUN_00416780(&local_48,*(undefined2 *)(param_1 + 0xb0));
          FUN_00416cd0(local_40,4,*(undefined8 *)(lVar3 + 0x100),&DAT_0103f94c,local_48,
                       L"; delay block");
          FUN_00f788b0(param_1,param_2,local_40[0]);
          FUN_0043f750(&local_58,*(undefined4 *)(param_1 + 0x924));
          FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0xb0));
          FUN_00416cd0(&local_50,5,L"DELAY",local_58,&DAT_0103f94c,local_60,L"; delay block");
          FUN_00f788b0(param_1,param_2,local_50);
          *(int *)(param_1 + 0x924) = *(int *)(param_1 + 0x924) + 1;
        }
        if (local_144 < 0x201) {
          if (param_3 != '\0') {
            if (local_144 != 1) {
              local_144 = (local_144 / 2) % 0x100;
            }
            FUN_00416780(&local_70,*(undefined2 *)(param_1 + 0xb0));
            FUN_0043f750(&local_78,local_144);
            FUN_00416cd0(&local_68,4,L"MOV ",local_70,L"R7,#",local_78);
            FUN_00f787d0(param_1,param_2,local_68);
            FUN_00f78e10(param_1,&local_30,0);
            FUN_00416ba0(&local_80,local_30,&DAT_0103f94c);
            FUN_00f788b0(param_1,param_2,local_80);
            FUN_00416780(&local_90,*(undefined2 *)(param_1 + 0xb0));
            FUN_00416cd0(&local_88,4,L"DJNZ",local_90,&DAT_0103f9e4,local_30);
            FUN_00f787d0(param_1,param_2,local_88);
            *(undefined1 *)(param_1 + 0x920) = 0;
          }
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        else if (local_144 < 0x10000) {
          if (param_3 != '\0') {
            FUN_0040c760((double)local_144);
            iVar2 = FUN_0040c770();
            iVar7 = iVar2 * 2 + 3;
            uVar1 = (longlong)local_144 / (longlong)iVar7;
            FUN_00416780(&local_a0,*(undefined2 *)(param_1 + 0xb0));
            FUN_0043f750(&local_a8,iVar2);
            FUN_00416cd0(&local_98,4,L"MOV ",local_a0,L"R6,#",local_a8);
            FUN_00f787d0(param_1,param_2,local_98);
            FUN_00416780(&local_b8,*(undefined2 *)(param_1 + 0xb0));
            FUN_0043f750(&local_c0,uVar1 & 0xffffffff);
            FUN_00416cd0(&local_b0,4,L"MOV ",local_b8,L"R7,#",local_c0);
            FUN_00f787d0(param_1,param_2,local_b0);
            FUN_00f78e10(param_1,&local_30,0);
            FUN_00416ba0(&local_c8,local_30,&DAT_0103f94c);
            FUN_00f788b0(param_1,param_2,local_c8);
            FUN_00416780(&local_d8,*(undefined2 *)(param_1 + 0xb0));
            FUN_00416cd0(&local_d0,4,L"DJNZ ",local_d8,&DAT_0103fa28,local_30);
            FUN_00f787d0(param_1,param_2,local_d0);
            FUN_00416780(&local_e8,*(undefined2 *)(param_1 + 0xb0));
            FUN_0043f750(&local_f0,iVar2);
            FUN_00416cd0(&local_e0,4,L"MOV ",local_e8,L"R6,#",local_f0);
            FUN_00f787d0(param_1,param_2,local_e0);
            FUN_00416780(&local_100,*(undefined2 *)(param_1 + 0xb0));
            FUN_00416cd0(&local_f8,4,L"DJNZ ",local_100,&DAT_0103f9e4,local_30);
            FUN_00f787d0(param_1,param_2,local_f8);
            local_144 = local_144 - (int)uVar1 * iVar7;
            uVar5 = 1;
            if (local_144 != 1) {
              uVar1 = (longlong)local_144 / 2;
              uVar5 = (undefined4)
                      ((longlong)
                       ((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) % 0x100)
              ;
            }
            FUN_00416780(&local_110,*(undefined2 *)(param_1 + 0xb0));
            FUN_0043f750(&local_118,uVar5);
            FUN_00416cd0(&local_108,4,L"MOV ",local_110,L"R7,#",local_118);
            FUN_00f787d0(param_1,param_2,local_108);
            FUN_00416ba0(&local_120,local_30,&DAT_0103fa3c);
            FUN_00f788b0(param_1,param_2,local_120);
            FUN_00416780(&local_130,*(undefined2 *)(param_1 + 0xb0));
            FUN_00416cd0(&local_128,5,L"DJNZ",local_130,&DAT_0103f9e4,local_30,&DAT_0103fa50);
            FUN_00f787d0(param_1,param_2,local_128);
            *(undefined1 *)(param_1 + 0x920) = 0;
          }
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 2;
        }
        else {
          uVar4 = FUN_00b89270();
          FUN_0041ddd0(&local_140,PTR_PTR_02001da0);
          FUN_00b8e650(uVar4,&local_138,L"HDLStrings.Msg_code_generation_delay",local_140);
          uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_138);
          FUN_004134c0(uVar4);
        }
        if (param_3 != '\0') {
          FUN_00f787d0(param_1,param_2,L"RET ");
        }
      }
      local_148 = local_148 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_140,0x21);
  FUN_00414480(&local_30);
  return;
}

