/* Ghidra address: 01a024e0 */
/* Ghidra symbol: FUN_01a024e0 */


void FUN_01a024e0(longlong param_1)

{
  short sVar1;
  undefined7 uVar4;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar5;
  undefined8 in_stack_fffffffffffffda8;
  undefined4 uVar7;
  undefined1 *puVar6;
  undefined8 local_1e8;
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
  undefined1 local_b8 [56];
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  undefined8 local_28;
  char local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffda8 >> 0x20);
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_190 = 0;
  local_198 = 0;
  local_180 = 0;
  local_188 = 0;
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
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_28 = 0;
  local_30 = 0;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  if (sVar1 != 0x16) {
    sVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
    if (sVar1 != 0x56) {
      FUN_00414480(&local_30);
      FUN_00414ff0(local_80,&DAT_01a037f4);
      uVar2 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
      FUN_00415110(local_80,uVar2,0x15);
      FUN_00414ff0(local_b8,local_80);
      FUN_00415110(local_b8,&DAT_01a037f6,0x30);
      FUN_004169a0(&local_28,local_b8);
      puVar6 = &local_1a;
      FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,0,local_19,puVar6,&local_1b);
      uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
      if (local_1b == '\x01') {
        FUN_00414b50(&local_28,L" StdOpamp");
        if (*(char *)(param_1 + 0xc0) == '\x04') {
          FUN_00416ad0(&local_30,L"+ VARS:");
        }
        else {
          FUN_00416ad0(&local_30,L"+ PARAMS:");
        }
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,1,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_c0,*puVar3);
        FUN_00416880(&local_c8,local_c0);
        FUN_00416cd0(&local_30,3,local_30,L" GAIN=",local_c8);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,2,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_d0,*puVar3);
        FUN_00416880(&local_d8,local_d0);
        FUN_00416cd0(&local_30,3,local_30,L" RIN=",local_d8);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,3,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_e0,*puVar3);
        FUN_00416880(&local_e8,local_e0);
        FUN_00416cd0(&local_30,3,local_30,L" ROUT=",local_e8);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,4,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_f0,*puVar3);
        FUN_00416880(&local_f8,local_f0);
        FUN_00416cd0(&local_30,3,local_30,L" SLEWRATE=",local_f8);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,5,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_100,*puVar3);
        FUN_00416880(&local_108,local_100);
        FUN_00416cd0(&local_30,3,local_30,L" FPOLE1=",local_108);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,6,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_110,*puVar3);
        FUN_00416880(&local_118,local_110);
        FUN_00416cd0(&local_30,3,local_30,L" FPOLE2=",local_118);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,7,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_120,*puVar3);
        FUN_00416880(&local_128,local_120);
        FUN_00416cd0(&local_30,3,local_30,L" VOFFS=",local_128);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,8,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_130,*puVar3);
        FUN_00416880(&local_138,local_130);
        FUN_00416cd0(&local_30,3,local_30,L" IBIAS=",local_138);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,9,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_140,*puVar3);
        FUN_00416880(&local_148,local_140);
        FUN_00416cd0(&local_30,3,local_30,L" IOFFS=",local_148);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,0xc,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_150,*puVar3);
        FUN_00416880(&local_158,local_150);
        FUN_00416cd0(&local_30,3,local_30,L" VDROPOH=",local_158);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,0xd,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_160,*puVar3);
        FUN_00416880(&local_168,local_160);
        uVar2 = local_168;
        FUN_00416cd0(&local_30,3,local_30,L" VDROPOL=",local_168);
        uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
        if (*(byte *)(param_1 + 0xc0) < 8) {
          bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 0x30U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          FUN_01a022a0(param_1,L"StdOpamp");
        }
      }
      else if (local_1b == '\x02') {
        FUN_00414b50(&local_28,L" LinOpamp");
        if (*(char *)(param_1 + 0xc0) == '\x04') {
          FUN_00416ad0(&local_30,L"+ VARS:");
        }
        else {
          FUN_00416ad0(&local_30,L"+ PARAMS:");
        }
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,1,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_170,*puVar3);
        FUN_00416880(&local_178,local_170);
        FUN_00416cd0(&local_30,3,local_30,L" GAIN=",local_178);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,2,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_180,*puVar3);
        FUN_00416880(&local_188,local_180);
        FUN_00416cd0(&local_30,3,local_30,L" RIN=",local_188);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,3,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_190,*puVar3);
        FUN_00416880(&local_198,local_190);
        FUN_00416cd0(&local_30,3,local_30,L" ROUT=",local_198);
        puVar3 = (undefined8 *)
                 FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),1,4,local_19,&local_1a,&local_1b);
        FUN_016b9450(&local_1a0,*puVar3);
        FUN_00416880(&local_1a8,local_1a0);
        uVar2 = local_1a8;
        FUN_00416cd0(&local_30,3,local_30,L" FPOLE1=",local_1a8);
        uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
        if (*(byte *)(param_1 + 0xc0) < 8) {
          bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 0x30U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          FUN_01a022a0(param_1,L"LinOpamp");
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                (*(longlong **)(param_1 + 0x58),&local_1c0);
      FUN_019ee820(param_1,&local_1b8,0x15,local_1c0,CONCAT44(uVar7,0xb));
      FUN_019f0400(param_1,&local_1c8,0,0);
      FUN_019f0400(param_1,&local_1d0,1,0);
      FUN_019f0400(param_1,&local_1d8,3,0);
      FUN_019f0400(param_1,&local_1e0,4,0);
      FUN_019f0400(param_1,&local_1e8,2,0);
      FUN_00416cd0(&local_1b0,0xd,local_1b8,&DAT_01a037d0,&DAT_01a037d0,local_1c8,&DAT_01a037d0,
                   local_1d0,&DAT_01a037d0,local_1d8,&DAT_01a037d0,local_1e0,&DAT_01a037d0,local_1e8
                   ,local_28);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_1b0)
      ;
      if (local_30 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_30);
      }
      goto code_r0x01a03465;
    }
  }
  FUN_00414b50(&local_28,L" IdOpamp");
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_50);
  FUN_019ee820(param_1,&local_48,0x15,local_50,CONCAT44(uVar7,0xb));
  FUN_019f0400(param_1,&local_58,0,0);
  FUN_019f0400(param_1,&local_60,1,0);
  FUN_019f0400(param_1,&local_68,2,0);
  FUN_00416cd0(local_40,9,local_48,&DAT_01a037d0,&DAT_01a037d0,local_58,&DAT_01a037d0,local_60,
               &DAT_01a037d0,local_68,local_28);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_40[0]);
  if (*(byte *)(param_1 + 0xc0) < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 0x30U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    FUN_01a022a0(param_1,L"IdOpamp");
  }
code_r0x01a03465:
  FUN_00414560(&local_1e8,9);
  FUN_004144d0(&local_1a0);
  FUN_00414480(&local_198);
  FUN_004144d0(&local_190);
  FUN_00414480(&local_188);
  FUN_004144d0(&local_180);
  FUN_00414480(&local_178);
  FUN_004144d0(&local_170);
  FUN_00414480(&local_168);
  FUN_004144d0(&local_160);
  FUN_00414480(&local_158);
  FUN_004144d0(&local_150);
  FUN_00414480(&local_148);
  FUN_004144d0(&local_140);
  FUN_00414480(&local_138);
  FUN_004144d0(&local_130);
  FUN_00414480(&local_128);
  FUN_004144d0(&local_120);
  FUN_00414480(&local_118);
  FUN_004144d0(&local_110);
  FUN_00414480(&local_108);
  FUN_004144d0(&local_100);
  FUN_00414480(&local_f8);
  FUN_004144d0(&local_f0);
  FUN_00414480(&local_e8);
  FUN_004144d0(&local_e0);
  FUN_00414480(&local_d8);
  FUN_004144d0(&local_d0);
  FUN_00414480(&local_c8);
  FUN_004144d0(&local_c0);
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_30,2);
  return;
}

