/* Ghidra address: 018293d0 */
/* Ghidra symbol: FUN_018293d0 */


undefined8
FUN_018293d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_70 = auStack_138;
  local_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar1 = FUN_00416db0(param_5,L"INTTOSTR");
  if (iVar1 == 0) {
    FUN_018493d0(param_6,&local_88,0);
    local_40 = FUN_004634b0(&local_88);
    FUN_0043f780(&local_90,local_40);
    FUN_00468a10(param_2,local_90);
  }
  else {
    iVar1 = FUN_00416db0(param_5,L"FLOATTOSTR");
    if (iVar1 == 0) {
      FUN_00414480(local_20);
      FUN_018493d0(param_6,&local_a8,0);
      local_48 = FUN_00464c60(&local_a8);
      FUN_00448450(local_20,local_48,PTR_DAT_02004830);
      FUN_00468a10(param_2,local_20[0]);
      FUN_00414480(local_20);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"DATETOSTR");
      if (iVar1 == 0) {
        FUN_00414480(&local_28);
        FUN_018493d0(param_6,&local_c0,0);
        local_50 = FUN_00464c60(&local_c0);
        FUN_0044a2b0(&local_28,local_50,PTR_DAT_02004830);
        FUN_00468a10(param_2,local_28);
        FUN_00414480(&local_28);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"TIMETOSTR");
        if (iVar1 == 0) {
          FUN_00414480(&local_30);
          FUN_018493d0(param_6,&local_d8,0);
          local_58 = FUN_00464c60(&local_d8);
          FUN_0044a300(&local_30,local_58,PTR_DAT_02004830);
          FUN_00468a10(param_2,local_30);
          FUN_00414480(&local_30);
        }
        else {
          iVar1 = FUN_00416db0(param_5,L"DATETIMETOSTR");
          if (iVar1 == 0) {
            FUN_00414480(&local_38);
            FUN_018493d0(param_6,&local_f0,0);
            local_60 = FUN_00464c60(&local_f0);
            FUN_0044a350(&local_38,local_60,PTR_DAT_02004830);
            FUN_00468a10(param_2,local_38);
            FUN_00414480(&local_38);
          }
          else {
            iVar1 = FUN_00416db0(param_5,L"BOOLTOSTR");
            if (iVar1 == 0) {
              FUN_018493d0(param_6,&local_110,0);
              iVar1 = FUN_004644a0(&local_110);
              FUN_00440030(&local_f8,iVar1 != 0,0);
              FUN_00468a10(param_2,local_f8);
            }
          }
        }
      }
    }
  }
  FUN_00460ba0(&local_110);
  FUN_00414480(&local_f8);
  FUN_00417840(&local_f0,&DAT_004013d8,4);
  FUN_00414480(&local_90);
  FUN_00460ba0(&local_88);
  FUN_00414560(&local_38,4);
  return param_2;
}

