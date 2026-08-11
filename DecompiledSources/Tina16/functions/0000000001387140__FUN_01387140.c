/* Ghidra address: 01387140 */
/* Ghidra symbol: FUN_01387140 */


void FUN_01387140(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  byte bVar9;
  undefined **ppuVar10;
  undefined1 auStack_208 [32];
  longlong local_1e8;
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
  undefined1 local_178 [48];
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [264];
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
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_148 = 0;
  local_140 = 0;
  local_30 = 0;
  local_1e8 = param_1;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0));
  plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  if ((*(char *)(local_1e8 + 0x7fa) == '\b') &&
     (iVar2 = (**(code **)(**(longlong **)(local_1e8 + 0xbf0) + 0x260))
                        (*(longlong **)(local_1e8 + 0xbf0)), iVar2 == 0)) {
    lVar5 = FUN_013870b0(auStack_208,plVar4,1);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414480(lVar5 + 8);
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(undefined8 *)(lVar5 + 0x48) = 0x4024000000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      FUN_00416910(local_138,PTR_u_Lin_Magnitude_01f38d38,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    else {
      FUN_00414480(lVar5 + 8);
      FUN_00416910(local_138,(&PTR_u_Log_Magnitude_01f38d30)[*(byte *)(lVar5 + 0x10)],0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    FUN_004169a0(&local_140,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_140,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,0);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414480(lVar5 + 8);
      *(undefined8 *)(lVar5 + 0x40) = 0x3f847ae147ae147b;
      *(undefined8 *)(lVar5 + 0x48) = 0x4024000000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 0;
      FUN_00416910(local_138,PTR_u_Log_Magnitude_01f38d30,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    else {
      FUN_00414480(lVar5 + 8);
      FUN_00416910(local_138,(&PTR_u_Log_Magnitude_01f38d30)[*(byte *)(lVar5 + 0x10)],0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    FUN_004169a0(&local_148,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_148,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,2);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_0138887c);
      *(undefined8 *)(lVar5 + 0x40) = 0xc034000000000000;
      *(undefined8 *)(lVar5 + 0x48) = 0x4034000000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 2;
      *(undefined4 *)(lVar5 + 0x11) = 0x69614704;
      *(undefined1 *)(lVar5 + 0x15) = 0x6e;
    }
    else {
      FUN_00414ad0(lVar5 + 8,&DAT_0138887c);
      *(undefined4 *)(lVar5 + 0x11) = 0x69614704;
      *(undefined1 *)(lVar5 + 0x15) = 0x6e;
    }
    FUN_00414ff0(local_178,lVar5 + 0x11);
    FUN_00415110(local_178,&DAT_01388887,0x2d);
    FUN_004169a0(&local_180,local_178);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_180,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,3);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_0138887c);
      *(undefined8 *)(lVar5 + 0x40) = 0xc034000000000000;
      *(undefined8 *)(lVar5 + 0x48) = 0x4034000000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 3;
      *(undefined8 *)(lVar5 + 0x11) = 0x69747265736e490e;
      *(undefined4 *)(lVar5 + 0x19) = 0x4c206e6f;
      *(undefined2 *)(lVar5 + 0x1d) = 0x736f;
      *(undefined1 *)(lVar5 + 0x1f) = 0x73;
    }
    else {
      FUN_00414ad0(lVar5 + 8,&DAT_0138887c);
      *(undefined8 *)(lVar5 + 0x11) = 0x69747265736e490e;
      *(undefined4 *)(lVar5 + 0x19) = 0x4c206e6f;
      *(undefined2 *)(lVar5 + 0x1d) = 0x736f;
      *(undefined1 *)(lVar5 + 0x1f) = 0x73;
    }
    FUN_00414ff0(local_178,lVar5 + 0x11);
    FUN_00415110(local_178,&DAT_01388887,0x2d);
    FUN_004169a0(&local_188,local_178);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_188,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,4);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_013888a8);
      *(undefined8 *)(lVar5 + 0x40) = 0xc066800000000000;
      *(undefined8 *)(lVar5 + 0x48) = 0x4066800000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 4;
      *(undefined8 *)(lVar5 + 0x11) = 0x69747265736e490f;
      *(undefined8 *)(lVar5 + 0x19) = 0x6573616850206e6f;
    }
    else {
      FUN_00414ad0(lVar5 + 8,&DAT_013888a8);
      *(undefined8 *)(lVar5 + 0x11) = 0x69747265736e490f;
      *(undefined8 *)(lVar5 + 0x19) = 0x6573616850206e6f;
    }
    FUN_004169a0(&local_190,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_190,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,7);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_013888cc);
      *(undefined8 *)(lVar5 + 0x40) = 0xbf50624dd2f1a9fc;
      *(undefined8 *)(lVar5 + 0x48) = 0x3f50624dd2f1a9fc;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 7;
      *(undefined8 *)(lVar5 + 0x11) = 0x442070756f72470b;
      *(undefined4 *)(lVar5 + 0x19) = 0x79616c65;
    }
    else {
      FUN_00414ad0(lVar5 + 8,&DAT_013888cc);
      *(undefined8 *)(lVar5 + 0x11) = 0x442070756f72470b;
      *(undefined4 *)(lVar5 + 0x19) = 0x79616c65;
    }
    FUN_004169a0(&local_198,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_198,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,8);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_013888e8);
      *(undefined8 *)(lVar5 + 0x40) = 0xbff0000000000000;
      *(undefined8 *)(lVar5 + 0x48) = 0x3ff0000000000000;
      *(undefined1 *)(lVar5 + 0x10) = 8;
      FUN_00416910(local_138,PTR_u_Polar_01f38d70,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
      lVar6 = FUN_00410e60(&DAT_0137f810,1);
      *(longlong *)(lVar5 + 0x50) = lVar6;
      FUN_00414ad0(lVar6 + 8,&DAT_013888fc);
      lVar6 = *(longlong *)(lVar5 + 0x50);
      *(undefined8 *)(lVar6 + 0x40) = 0xbff0000000000000;
      *(undefined8 *)(lVar6 + 0x48) = 0x3ff0000000000000;
      *(undefined1 *)(lVar6 + 0x10) = *(undefined1 *)(lVar5 + 0x10);
      FUN_00415020(lVar6 + 0x11,lVar5 + 0x11,0x28);
    }
    FUN_004169a0(&local_1a0,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_1a0,lVar5);
    *(longlong *)(local_1e8 + 0xe78) = lVar5;
    *(undefined1 *)(local_1e8 + 0x990) = *(undefined1 *)(lVar5 + 0x10);
  }
  else if ((*(char *)(local_1e8 + 0x7fa) == '\b') &&
          (iVar2 = (**(code **)(**(longlong **)(local_1e8 + 0xbf0) + 0x260))
                             (*(longlong **)(local_1e8 + 0xbf0)), iVar2 == 1)) {
    lVar5 = FUN_013870b0(auStack_208,plVar4,1);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414480(lVar5 + 8);
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(undefined8 *)(lVar5 + 0x48) = 0x4024000000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      FUN_00416910(local_138,PTR_u_Lin_Magnitude_01f38d38,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    else {
      FUN_00414480(lVar5 + 8);
      FUN_00416910(local_138,(&PTR_u_Log_Magnitude_01f38d30)[*(byte *)(lVar5 + 0x10)],0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    FUN_004169a0(&local_1a8,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_1a8,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,0);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414480(lVar5 + 8);
      *(undefined8 *)(lVar5 + 0x40) = 0x3f847ae147ae147b;
      *(undefined8 *)(lVar5 + 0x48) = 0x4024000000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 0;
      FUN_00416910(local_138,PTR_u_Log_Magnitude_01f38d30,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    else {
      FUN_00414480(lVar5 + 8);
      FUN_00416910(local_138,(&PTR_u_Log_Magnitude_01f38d30)[*(byte *)(lVar5 + 0x10)],0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    FUN_004169a0(&local_1b0,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_1b0,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,3);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_0138887c);
      *(undefined8 *)(lVar5 + 0x40) = 0xc034000000000000;
      *(undefined8 *)(lVar5 + 0x48) = 0x4034000000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 3;
      *(undefined8 *)(lVar5 + 0x11) = 0x206e72757465520b;
      builtin_strncpy((char *)(lVar5 + 0x19),"Loss",4);
    }
    else {
      FUN_00414ad0(lVar5 + 8,&DAT_0138887c);
      *(undefined8 *)(lVar5 + 0x11) = 0x206e72757465520b;
      builtin_strncpy((char *)(lVar5 + 0x19),"Loss",4);
    }
    FUN_00414ff0(local_178,lVar5 + 0x11);
    FUN_00415110(local_178,&DAT_01388887,0x2d);
    FUN_004169a0(&local_1b8,local_178);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_1b8,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,9);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_013888e8);
      *(undefined8 *)(lVar5 + 0x40) = 0xbff0000000000000;
      *(undefined8 *)(lVar5 + 0x48) = 0x3ff0000000000000;
      *(undefined1 *)(lVar5 + 0x10) = 9;
      FUN_00416910(local_138,PTR_u_Smith_01f38d78,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
      lVar6 = FUN_00410e60(&DAT_0137f810,1);
      *(longlong *)(lVar5 + 0x50) = lVar6;
      FUN_00414ad0(lVar6 + 8,&DAT_013888fc);
      lVar6 = *(longlong *)(lVar5 + 0x50);
      *(undefined8 *)(lVar6 + 0x40) = 0xbff0000000000000;
      *(undefined8 *)(lVar6 + 0x48) = 0x3ff0000000000000;
      *(undefined1 *)(lVar6 + 0x10) = *(undefined1 *)(lVar5 + 0x10);
      FUN_00415020(lVar6 + 0x11,lVar5 + 0x11,0x28);
    }
    FUN_004169a0(&local_1c0,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_1c0,lVar5);
    *(longlong *)(local_1e8 + 0xe78) = lVar5;
    *(undefined1 *)(local_1e8 + 0x990) = *(undefined1 *)(lVar5 + 0x10);
  }
  else if ((*(char *)(local_1e8 + 0x7fa) == '\b') &&
          (iVar2 = (**(code **)(**(longlong **)(local_1e8 + 0xbf0) + 0x260))
                             (*(longlong **)(local_1e8 + 0xbf0)), iVar2 == 2)) {
    lVar5 = FUN_013870b0(auStack_208,plVar4,1);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_0138891c);
      *(undefined8 *)(lVar5 + 0x40) = 0;
      *(undefined8 *)(lVar5 + 0x48) = 0x4024000000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 1;
      FUN_00416910(local_138,PTR_u_Lin_Magnitude_01f38d38,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    else {
      FUN_00414ad0(lVar5 + 8,&DAT_0138891c);
      FUN_00416910(local_138,(&PTR_u_Log_Magnitude_01f38d30)[*(byte *)(lVar5 + 0x10)],0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    FUN_004169a0(&local_1c8,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_1c8,lVar5);
    *(longlong *)(local_1e8 + 0xe78) = lVar5;
    *(undefined1 *)(local_1e8 + 0x990) = *(undefined1 *)(lVar5 + 0x10);
    lVar5 = FUN_013870b0(auStack_208,plVar4,0);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_0138891c);
      *(undefined8 *)(lVar5 + 0x40) = 0x3f847ae147ae147b;
      *(undefined8 *)(lVar5 + 0x48) = 0x4024000000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 0;
      FUN_00416910(local_138,PTR_u_Log_Magnitude_01f38d30,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    else {
      FUN_00414ad0(lVar5 + 8,&DAT_0138891c);
      FUN_00416910(local_138,(&PTR_u_Log_Magnitude_01f38d30)[*(byte *)(lVar5 + 0x10)],0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    FUN_004169a0(&local_1d0,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_1d0,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,4);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_013888a8);
      *(undefined8 *)(lVar5 + 0x40) = 0xc066800000000000;
      *(undefined8 *)(lVar5 + 0x48) = 0x4066800000000000;
      *(undefined8 *)(lVar5 + 0x50) = 0;
      *(undefined1 *)(lVar5 + 0x10) = 4;
      FUN_00416910(local_138,PTR_u_Phase_01f38d50,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    else {
      FUN_00414ad0(lVar5 + 8,&DAT_013888a8);
      FUN_00416910(local_138,(&PTR_u_Log_Magnitude_01f38d30)[*(byte *)(lVar5 + 0x10)],0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
    }
    FUN_004169a0(&local_1d8,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_1d8,lVar5);
    lVar5 = FUN_013870b0(auStack_208,plVar4,8);
    if (lVar5 == 0) {
      lVar5 = FUN_00410e60(&DAT_0137f810,1);
      FUN_00414ad0(lVar5 + 8,&DAT_013888e8);
      *(undefined8 *)(lVar5 + 0x40) = 0xbff0000000000000;
      *(undefined8 *)(lVar5 + 0x48) = 0x3ff0000000000000;
      *(undefined1 *)(lVar5 + 0x10) = 8;
      FUN_00416910(local_138,PTR_u_Polar_01f38d70,0xff);
      FUN_00415020(lVar5 + 0x11,local_138,0x28);
      lVar6 = FUN_00410e60(&DAT_0137f810,1);
      *(longlong *)(lVar5 + 0x50) = lVar6;
      FUN_00414ad0(lVar6 + 8,&DAT_013888fc);
      lVar6 = *(longlong *)(lVar5 + 0x50);
      *(undefined8 *)(lVar6 + 0x40) = 0xbff0000000000000;
      *(undefined8 *)(lVar6 + 0x48) = 0x3ff0000000000000;
      *(undefined1 *)(lVar6 + 0x10) = *(undefined1 *)(lVar5 + 0x10);
      FUN_00415020(lVar6 + 0x11,lVar5 + 0x11,0x28);
    }
    FUN_004169a0(&local_1e0,lVar5 + 0x11);
    plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,local_1e0,lVar5);
  }
  else {
    bVar9 = 0;
    ppuVar10 = &PTR_u_Log_Magnitude_01f38d30;
    do {
      if (((((*(char *)(local_1e8 + 0x7fa) == '\x04') || (*(char *)(local_1e8 + 0x7fa) == '\x0f'))
           && (bVar9 != 8)) && ((bVar9 != 3 && (bVar9 != 9)))) ||
         ((((*(char *)(local_1e8 + 0x7fa) == '\b' && ((bVar9 != 6 && (bVar9 != 2)))) && (bVar9 != 3)
           ) && (bVar9 != 7)))) {
        lVar5 = FUN_013870b0(auStack_208,plVar4,bVar9);
        if (lVar5 == 0) {
          lVar5 = FUN_00410e60(&DAT_0137f810,1);
          FUN_00414b50(&local_30,*ppuVar10);
          FUN_00416910(local_138,*ppuVar10,0xff);
          FUN_00415020(lVar5 + 0x11,local_138,0x28);
          if (bVar9 < 6) {
            if (bVar9 == 5) {
              FUN_00414ad0(lVar5 + 8,&DAT_0138887c);
              *(undefined8 *)(lVar5 + 0x40) = 0xc034000000000000;
              *(undefined8 *)(lVar5 + 0x48) = 0x4034000000000000;
              *(undefined1 *)(lVar5 + 0x10) = 5;
              lVar6 = FUN_00410e60(&DAT_0137f810,1);
              *(longlong *)(lVar5 + 0x50) = lVar6;
              FUN_00414ad0(lVar6 + 8,&DAT_013888a8);
              lVar6 = *(longlong *)(lVar5 + 0x50);
              *(undefined8 *)(lVar6 + 0x40) = 0xc066800000000000;
              *(undefined8 *)(lVar6 + 0x48) = 0x4066800000000000;
              *(undefined1 *)(lVar6 + 0x10) = *(undefined1 *)(lVar5 + 0x10);
              FUN_00415020(lVar6 + 0x11,lVar5 + 0x11,0x28);
            }
            else if (bVar9 == 0) {
              FUN_00414ad0(lVar5 + 8,&LAB_01388930);
              *(undefined8 *)(lVar5 + 0x40) = 0x3f847ae147ae147b;
              *(undefined8 *)(lVar5 + 0x48) = 0x4024000000000000;
              *(undefined8 *)(lVar5 + 0x50) = 0;
              *(undefined1 *)(lVar5 + 0x10) = 0;
            }
            else if (bVar9 == 1) {
              FUN_00414ad0(lVar5 + 8,&LAB_01388930);
              *(undefined8 *)(lVar5 + 0x40) = 0;
              *(undefined8 *)(lVar5 + 0x48) = 0x3ff0000000000000;
              *(undefined8 *)(lVar5 + 0x50) = 0;
              *(undefined1 *)(lVar5 + 0x10) = 1;
            }
            else if (bVar9 == 2) {
              FUN_00414ad0(lVar5 + 8,&DAT_0138887c);
              *(undefined8 *)(lVar5 + 0x40) = 0xc034000000000000;
              *(undefined8 *)(lVar5 + 0x48) = 0x4034000000000000;
              *(undefined8 *)(lVar5 + 0x50) = 0;
              *(undefined1 *)(lVar5 + 0x10) = 2;
            }
            else if (bVar9 == 4) {
              FUN_00414ad0(lVar5 + 8,&DAT_013888a8);
              *(undefined8 *)(lVar5 + 0x40) = 0xc066800000000000;
              *(undefined8 *)(lVar5 + 0x48) = 0x4066800000000000;
              *(undefined8 *)(lVar5 + 0x50) = 0;
              *(undefined1 *)(lVar5 + 0x10) = 4;
            }
          }
          else if (bVar9 == 6) {
            FUN_00414ad0(lVar5 + 8,&DAT_013888e8);
            *(undefined8 *)(lVar5 + 0x40) = 0xbff0000000000000;
            *(undefined8 *)(lVar5 + 0x48) = 0x3ff0000000000000;
            *(undefined1 *)(lVar5 + 0x10) = 6;
            uVar7 = FUN_00410e60(&DAT_0137f810,1);
            *(undefined8 *)(lVar5 + 0x50) = uVar7;
            FUN_00414ad0(*(longlong *)(lVar5 + 0x50) + 8,&DAT_013888fc);
            lVar6 = *(longlong *)(lVar5 + 0x50);
            *(undefined8 *)(lVar6 + 0x40) = 0xbff0000000000000;
            *(undefined8 *)(lVar6 + 0x48) = 0x3ff0000000000000;
            *(undefined1 *)(lVar6 + 0x10) = *(undefined1 *)(lVar5 + 0x10);
            FUN_00415020(lVar6 + 0x11,lVar5 + 0x11,0x28);
          }
          else if (bVar9 == 7) {
            FUN_00414ad0(lVar5 + 8,&DAT_013888cc);
            *(undefined8 *)(lVar5 + 0x40) = 0xbf50624dd2f1a9fc;
            *(undefined8 *)(lVar5 + 0x48) = 0x3f50624dd2f1a9fc;
            *(undefined8 *)(lVar5 + 0x50) = 0;
            *(undefined1 *)(lVar5 + 0x10) = 7;
          }
          else if (bVar9 == 8) {
            FUN_00414ad0(lVar5 + 8,&DAT_013888e8);
            *(undefined8 *)(lVar5 + 0x40) = 0xbff0000000000000;
            *(undefined8 *)(lVar5 + 0x48) = 0x3ff0000000000000;
            *(undefined1 *)(lVar5 + 0x10) = 8;
            uVar7 = FUN_00410e60(&DAT_0137f810,1);
            *(undefined8 *)(lVar5 + 0x50) = uVar7;
            FUN_00414ad0(*(longlong *)(lVar5 + 0x50) + 8,&DAT_013888fc);
            lVar6 = *(longlong *)(lVar5 + 0x50);
            *(undefined8 *)(lVar6 + 0x40) = 0xbff0000000000000;
            *(undefined8 *)(lVar6 + 0x48) = 0x3ff0000000000000;
            *(undefined1 *)(lVar6 + 0x10) = *(undefined1 *)(lVar5 + 0x10);
            FUN_00415020(lVar6 + 0x11,lVar5 + 0x11,0x28);
          }
          else if (bVar9 == 9) {
            FUN_00414ad0(lVar5 + 8,&DAT_013888e8);
            *(undefined8 *)(lVar5 + 0x40) = 0xbff0000000000000;
            *(undefined8 *)(lVar5 + 0x48) = 0x3ff0000000000000;
            *(undefined1 *)(lVar5 + 0x10) = 9;
            uVar7 = FUN_00410e60(&DAT_0137f810,1);
            *(undefined8 *)(lVar5 + 0x50) = uVar7;
            FUN_00414ad0(*(longlong *)(lVar5 + 0x50) + 8,&DAT_013888fc);
            lVar6 = *(longlong *)(lVar5 + 0x50);
            *(undefined8 *)(lVar6 + 0x40) = 0xbff0000000000000;
            *(undefined8 *)(lVar6 + 0x48) = 0x3ff0000000000000;
            *(undefined1 *)(lVar6 + 0x10) = *(undefined1 *)(lVar5 + 0x10);
            FUN_00415020(lVar6 + 0x11,lVar5 + 0x11,0x28);
          }
        }
        if ((*(char *)(local_1e8 + 0x7fa) == '\x0f') && (bVar9 == 1)) {
          *(longlong *)(local_1e8 + 0xe78) = lVar5;
          *(undefined1 *)(local_1e8 + 0x990) = 1;
        }
        else if ((*(char *)(local_1e8 + 0x7fa) == '\x04') && (bVar9 == 2)) {
          *(longlong *)(local_1e8 + 0xe78) = lVar5;
          *(undefined1 *)(local_1e8 + 0x990) = 2;
        }
        else if ((*(char *)(local_1e8 + 0x7fa) == '\b') && (bVar9 == 9)) {
          *(longlong *)(local_1e8 + 0xe78) = lVar5;
          *(undefined1 *)(local_1e8 + 0x990) = 9;
        }
        plVar1 = *(longlong **)(*(longlong *)(local_1e8 + 0xba0) + 0x4f0);
        (**(code **)(*plVar1 + 0x80))(plVar1,*ppuVar10,lVar5);
      }
      bVar9 = bVar9 + 1;
      ppuVar10 = ppuVar10 + 1;
    } while (bVar9 != 10);
  }
  plVar1 = *(longlong **)(local_1e8 + 0xba0);
  uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xc0))
                    ((longlong *)plVar1[0x9e],*(undefined8 *)(local_1e8 + 0xe78));
  (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
  iVar2 = (**(code **)(*plVar4 + 0x28))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar8);
      if (lVar5 != 0) {
        uVar7 = (**(code **)(*plVar4 + 0x30))(plVar4,iVar8);
        lVar5 = FUN_004113f0(uVar7,&DAT_0137f810);
        FUN_00410f20(*(undefined8 *)(lVar5 + 0x50));
        FUN_00410f20(lVar5);
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar4);
  FUN_00414560(&local_1e0,0xd);
  FUN_00414560(&local_148,2);
  FUN_00414480(&local_30);
  return;
}

