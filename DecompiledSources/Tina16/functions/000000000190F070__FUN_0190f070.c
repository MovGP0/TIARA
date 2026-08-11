/* Ghidra address: 0190f070 */
/* Ghidra symbol: FUN_0190f070 */


undefined8
FUN_0190f070(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined **param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined2 local_32;
  undefined8 local_30 [2];
  
  local_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  local_30[0] = 0;
  FUN_00468530(param_2,0,1);
  if (param_4 == &PTR_FUN_00719158) {
    iVar2 = FUN_00416db0(param_5,L"EXECUTE");
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*param_3 + 0xa8))(param_3);
      FUN_00468820(param_2,uVar3);
    }
  }
  else {
    iVar2 = FUN_00416db0(param_5,L"INPUTBOX");
    if (iVar2 == 0) {
      FUN_018493d0(param_6,&local_58,0);
      FUN_00467e90(&local_60,&local_58);
      FUN_018493d0(param_6,&local_78,1);
      FUN_00467e90(&local_80,&local_78);
      FUN_018493d0(param_6,&local_98,2);
      FUN_00467e90(&local_a0,&local_98);
      FUN_0072f5c0(&local_40,local_60,local_80,local_a0);
      FUN_00468a10(param_2,local_40);
    }
    else {
      iVar2 = FUN_00416db0(param_5,L"INPUTQUERY");
      if (iVar2 == 0) {
        FUN_018493d0(param_6,&local_b8,2);
        FUN_00467e90(local_30,&local_b8);
        FUN_018493d0(param_6,&local_d0,0);
        FUN_00467e90(&local_d8,&local_d0);
        FUN_018493d0(param_6,&local_f0,1);
        FUN_00467e90(&local_f8,&local_f0);
        uVar3 = FUN_0072f4e0(local_d8,local_f8,local_30);
        FUN_00468820(param_2,uVar3);
        FUN_00468a10(&local_110,local_30[0]);
        FUN_01849420(param_6,2,&local_110);
      }
      else {
        iVar2 = FUN_00416db0(param_5,L"MESSAGEDLG");
        if (iVar2 == 0) {
          FUN_018493d0(param_6,&local_128,2);
          local_32 = FUN_00462650(&local_128);
          FUN_018493d0(param_6,&local_140,0);
          FUN_00467e90(&local_148,&local_140);
          uVar1 = local_148;
          FUN_018493d0(param_6,&local_160,1);
          uVar3 = FUN_00462650(&local_160);
          FUN_018493d0(param_6,&local_178,3);
          uVar4 = FUN_00462650(&local_178);
          uVar3 = FUN_0072d5c0(uVar1,uVar3,local_32,uVar4,0xffffffff,0xffffffff,0);
          FUN_00468530(param_2,uVar3,0xfffffffffffffffc);
        }
      }
    }
  }
  FUN_00417840(&local_178,&DAT_004013d8,2);
  FUN_00414480(&local_148);
  FUN_00417840(&local_140,&DAT_004013d8,3);
  FUN_00414480(&local_f8);
  FUN_00460ba0(&local_f0);
  FUN_00414480(&local_d8);
  FUN_00417840(&local_d0,&DAT_004013d8,2);
  FUN_00414480(&local_a0);
  FUN_00460ba0(&local_98);
  FUN_00414480(&local_80);
  FUN_00460ba0(&local_78);
  FUN_00414480(&local_60);
  FUN_00460ba0(&local_58);
  FUN_00414480(&local_40);
  FUN_00414480(local_30);
  return param_2;
}

