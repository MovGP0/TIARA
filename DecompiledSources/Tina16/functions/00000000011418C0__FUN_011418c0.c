/* Ghidra address: 011418c0 */
/* Ghidra symbol: FUN_011418c0 */


void FUN_011418c0(byte param_1,double *param_2,int param_3,undefined1 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  double dVar2;
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
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  double local_28;
  double local_20;
  
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
  local_b0 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_48 = 0;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (param_1 < 3) {
    if (param_1 == 2) {
      if (param_3 < 2) {
        FUN_00b8fec0(&local_d8,local_28,param_4,0,0x3cd203af9ee75616);
        local_40 = local_d8;
        local_38 = 0x11;
        FUN_00442f70(&local_d0,L"%15s",&local_40,0);
        FUN_00414ad0(param_5,local_d0);
      }
      else {
        FUN_00b8fec0(&local_c8,local_28 * 2.0,param_4,0,0x3cd203af9ee75616);
        local_40 = local_c8;
        local_38 = 0x11;
        FUN_00442f70(&local_c0,L"%15s",&local_40,0);
        FUN_00414ad0(param_5,local_c0);
      }
      FUN_00b8fec0(&local_e8,local_20 * -2.0,param_4,0,0x3cd203af9ee75616);
      local_40 = local_e8;
      local_38 = 0x11;
      FUN_00442f70(&local_e0,L"%15s",&local_40,0);
      FUN_00414ad0(param_6,local_e0);
    }
    else if (param_1 == 0) {
      if (param_3 < 2) {
        uVar1 = FUN_00c44590(&local_28);
        FUN_00b8fec0(&local_58,uVar1,param_4,0,0x3cd203af9ee75616);
        local_40 = local_58;
        local_38 = 0x11;
        FUN_00442f70(&local_50,L"%15s",&local_40,0);
        FUN_00414ad0(param_5,local_50);
      }
      else {
        dVar2 = (double)FUN_00c44590(&local_28);
        FUN_00b8fec0(&local_48,dVar2 * 2.0,param_4,0,0x3cd203af9ee75616);
        local_40 = local_48;
        local_38 = 0x11;
        FUN_00442f70(&local_30,L"%15s",&local_40,0);
        FUN_00414ad0(param_5,local_30);
      }
      dVar2 = (double)FUN_00c445d0(&local_28);
      FUN_00b8fec0(&local_68,dVar2 * 57.29577951308232,2,0,0x3cd203af9ee75616);
      local_40 = local_68;
      local_38 = 0x11;
      FUN_00442f70(&local_60,L"%15s",&local_40,0);
      FUN_00414ad0(param_6,local_60);
    }
    else if (param_1 == 1) {
      uVar1 = FUN_00c44590(&local_28);
      FUN_00b8fec0(&local_78,uVar1,param_4,0,0x3cd203af9ee75616);
      local_40 = local_78;
      local_38 = 0x11;
      FUN_00442f70(&local_70,L"%15s",&local_40,0);
      FUN_00414ad0(param_5,local_70);
      dVar2 = (double)FUN_00c445d0(&local_28);
      FUN_00b8fec0(&local_88,dVar2 * 57.29577951308232,2,0,0x3cd203af9ee75616);
      local_40 = local_88;
      local_38 = 0x11;
      FUN_00442f70(&local_80,L"%15s",&local_40,0);
      FUN_00414ad0(param_6,local_80);
    }
  }
  else if (param_1 == 3) {
    if (param_3 < 2) {
      uVar1 = FUN_00c44590(&local_28);
      FUN_00b8fec0(&local_a8,uVar1,param_4,0,0x3cd203af9ee75616);
      local_40 = local_a8;
      local_38 = 0x11;
      FUN_00442f70(&local_a0,L"%15s",&local_40,0);
      FUN_00414ad0(param_5,local_a0);
    }
    else {
      dVar2 = (double)FUN_00c44590(&local_28);
      FUN_00b8fec0(&local_98,dVar2 * 1.4142135623730951,param_4,0,0x3cd203af9ee75616);
      local_40 = local_98;
      local_38 = 0x11;
      FUN_00442f70(&local_90,L"%15s",&local_40,0);
      FUN_00414ad0(param_5,local_90);
    }
    dVar2 = (double)FUN_00c445d0(&local_28);
    FUN_00b8fec0(&local_b8,dVar2 * 57.29577951308232,2,0,0x3cd203af9ee75616);
    local_40 = local_b8;
    local_38 = 0x11;
    FUN_00442f70(&local_b0,L"%15s",&local_40,0);
    FUN_00414ad0(param_6,local_b0);
  }
  else if (param_1 == 4) {
    if (param_3 < 2) {
      FUN_00b8fec0(&local_108,local_28,param_4,0,0x3cd203af9ee75616);
      local_40 = local_108;
      local_38 = 0x11;
      FUN_00442f70(&local_100,L"%15s",&local_40,0);
      FUN_00414ad0(param_5,local_100);
    }
    else {
      FUN_00b8fec0(&local_f8,local_28 * 1.4142135623730951,param_4,0,0x3cd203af9ee75616);
      local_40 = local_f8;
      local_38 = 0x11;
      FUN_00442f70(&local_f0,L"%15s",&local_40,0);
      FUN_00414ad0(param_5,local_f0);
    }
    FUN_00b8fec0(&local_118,local_20 * -1.4142135623730951,param_4,0,0x3cd203af9ee75616);
    local_40 = local_118;
    local_38 = 0x11;
    FUN_00442f70(&local_110,L"%15s",&local_40,0);
    FUN_00414ad0(param_6,local_110);
  }
  FUN_00414560(&local_118,0x1b);
  FUN_00414480(&local_30);
  return;
}

