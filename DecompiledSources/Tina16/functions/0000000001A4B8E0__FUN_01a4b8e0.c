/* Ghidra address: 01a4b8e0 */
/* Ghidra symbol: FUN_01a4b8e0 */


void FUN_01a4b8e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  FUN_0043e1a0(&local_10,local_res10);
  FUN_00414b50(local_res18,local_res18[0]);
  iVar1 = FUN_004170c0(L"passband",local_10,1);
  if (((iVar1 < 1) || (iVar1 = FUN_004170c0(L"frequency",local_10,1), iVar1 < 1)) ||
     ((*(uint *)(param_1 + 0x940) & 4) != 0)) {
    iVar1 = FUN_004170c0(L"stopband",local_10,1);
    if (((iVar1 < 1) || (iVar1 = FUN_004170c0(L"frequency",local_10,1), iVar1 < 1)) ||
       ((*(uint *)(param_1 + 0x940) & 8) != 0)) {
      iVar1 = FUN_004170c0(L"passband",local_10,1);
      if ((iVar1 < 1) || ((*(uint *)(param_1 + 0x940) & 1) != 0)) {
        iVar1 = FUN_004170c0(L"stopband",local_10,1);
        if ((0 < iVar1) && ((*(uint *)(param_1 + 0x940) & 2) == 0)) {
          FUN_00450070(&local_60,local_res18[0],&LAB_01a4bf28,0,3);
          FUN_00414b50(local_res18,local_60);
          dVar3 = (double)FUN_00b8f030(local_res18[0]);
          if (dVar3 == 0.0) {
            local_38 = local_10;
            local_30 = 0x11;
            FUN_00442f70(&local_68,L"Invalid value in Filter Design parameters: %s",&local_38,0);
            uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_68);
            dVar3 = (double)FUN_004134c0(uVar2);
          }
          if (0.0 < dVar3) {
            dVar3 = -dVar3;
          }
          *(double *)(param_1 + 0x970) = dVar3;
          *(uint *)(param_1 + 0x940) = *(uint *)(param_1 + 0x940) | 2;
        }
      }
      else {
        FUN_00450070(&local_50,local_res18[0],&LAB_01a4bf28,0,3);
        FUN_00414b50(local_res18,local_50);
        dVar3 = (double)FUN_00b8f030(local_res18[0]);
        if (dVar3 == 0.0) {
          local_38 = local_10;
          local_30 = 0x11;
          FUN_00442f70(&local_58,L"Invalid value in Filter Design parameters: %s",&local_38,0);
          uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_58);
          dVar3 = (double)FUN_004134c0(uVar2);
        }
        if (0.0 < dVar3) {
          dVar3 = -dVar3;
        }
        *(double *)(param_1 + 0x960) = dVar3;
        *(uint *)(param_1 + 0x940) = *(uint *)(param_1 + 0x940) | 1;
      }
    }
    else {
      FUN_00450070(&local_40,local_res18[0],&DAT_01a4be8c,0,3);
      FUN_00414b50(local_res18,local_40);
      dVar3 = (double)FUN_00b8f030(local_res18[0]);
      if (dVar3 < 1.0) {
        local_38 = local_10;
        local_30 = 0x11;
        FUN_00442f70(&local_48,L"Invalid value in Filter Design parameters: %s",&local_38,0);
        uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_48);
        dVar3 = (double)FUN_004134c0(uVar2);
      }
      *(double *)(param_1 + 0x990) = dVar3;
      *(uint *)(param_1 + 0x940) = *(uint *)(param_1 + 0x940) | 8;
    }
  }
  else {
    FUN_00450070(local_20,local_res18[0],&DAT_01a4be8c,0,3);
    FUN_00414b50(local_res18,local_20[0]);
    dVar3 = (double)FUN_00b8f030(local_res18[0]);
    if (dVar3 < 1.0) {
      local_38 = local_10;
      local_30 = 0x11;
      FUN_00442f70(&local_28,L"Invalid value in Filter Design parameters: %s",&local_38,0);
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_28);
      dVar3 = (double)FUN_004134c0(uVar2);
    }
    *(double *)(param_1 + 0x980) = dVar3;
    *(uint *)(param_1 + 0x940) = *(uint *)(param_1 + 0x940) | 4;
  }
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}

