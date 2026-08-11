/* Ghidra address: 01829f30 */
/* Ghidra symbol: FUN_01829f30 */


undefined8
FUN_01829f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_188 [40];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_188;
  local_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_20[0] = 0;
  local_28 = 0;
  iVar1 = FUN_00416db0(param_5,L"FORMAT");
  if (iVar1 == 0) {
    FUN_018493d0(param_6,&local_70,0);
    FUN_00467e90(&local_78,&local_70);
    FUN_018493d0(param_6,&local_90,1);
    FUN_018244a0(&local_58,local_78,&local_90);
    FUN_00468a10(param_2,local_58);
  }
  else {
    iVar1 = FUN_00416db0(param_5,L"FORMATFLOAT");
    if (iVar1 == 0) {
      FUN_00414480(local_20);
      FUN_018493d0(param_6,&local_a8,0);
      FUN_00467e90(&local_b0,&local_a8);
      local_30 = local_b0;
      FUN_018493d0(param_6,&local_c8,1);
      FUN_00468860(&local_e0,0x3ff0000000000000);
      FUN_0046f200(&local_c8,&local_e0);
      local_38 = FUN_00464c60(&local_c8);
      FUN_004485a0(local_20,local_30,local_38,PTR_DAT_02004830);
      FUN_00468a10(param_2,local_20[0]);
      FUN_00414480(local_20);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"FORMATDATETIME");
      if (iVar1 == 0) {
        FUN_00414480(&local_28);
        FUN_018493d0(param_6,&local_f8,0);
        FUN_00467e90(&local_100,&local_f8);
        local_40 = local_100;
        FUN_018493d0(param_6,&local_118,1);
        local_48 = FUN_00464c60(&local_118);
        FUN_0044a3a0(&local_28,local_40,local_48,PTR_DAT_02004830);
        FUN_00468a10(param_2,local_28);
        FUN_00414480(&local_28);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"FORMATMASKTEXT");
        if (iVar1 == 0) {
          FUN_018493d0(param_6,&local_138,0);
          FUN_00467e90(&local_140,&local_138);
          FUN_018493d0(param_6,&local_158,1);
          FUN_00467e90(&local_160,&local_158);
          FUN_00832f30(&local_120,local_140,local_160);
          FUN_00468a10(param_2,local_120);
        }
      }
    }
  }
  FUN_00414480(&local_160);
  FUN_00460ba0(&local_158);
  FUN_00414480(&local_140);
  FUN_00460ba0(&local_138);
  FUN_00414480(&local_120);
  FUN_00460ba0(&local_118);
  FUN_00414480(&local_100);
  FUN_00417840(&local_f8,&DAT_004013d8,3);
  FUN_00414480(&local_b0);
  FUN_00417840(&local_a8,&DAT_004013d8,2);
  FUN_00414480(&local_78);
  FUN_00460ba0(&local_70);
  FUN_00414480(&local_58);
  FUN_00414560(&local_28,2);
  return param_2;
}

