/* Ghidra address: 01b3b7c0 */
/* Ghidra symbol: FUN_01b3b7c0 */


void FUN_01b3b7c0(undefined8 param_1,longlong *param_2,undefined8 param_3,ushort param_4,
                 longlong param_5,longlong *param_6,undefined8 param_7)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_7);
  FUN_01b3b450(&local_20,param_7);
  FUN_00414ad0(param_5,local_20);
  *(undefined4 *)(param_5 + 0x34) = 2;
  FUN_00419260(param_6,&DAT_004066f0,1,2);
  FUN_01d03640(param_2,&local_28,*(undefined8 *)PTR_DAT_02001f18);
  FUN_00414ad0(param_5 + 8,local_28);
  if (param_4 == 0xe) {
    sVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
    if (sVar1 == 0x60) {
      FUN_00414b50(&local_10,L"NTC ");
    }
    else {
      sVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
      if (sVar1 == 0x61) {
        FUN_00414b50(&local_10,L"PTC ");
      }
      else {
        sVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
        if (sVar1 == 0x5f) {
          FUN_00414b50(&local_10,L"FUSE ");
        }
        else {
          FUN_00414480(&local_10);
        }
      }
    }
    uVar3 = FUN_01cfd6a0(param_2);
    FUN_004169a0(&local_30,uVar3);
    FUN_00416ba0(param_5 + 0x10,local_10,local_30);
  }
  else if (param_4 == 0xf) {
    FUN_00414480(param_5 + 0x10);
  }
  else {
    uVar3 = FUN_01b3b3e0(param_2,1,0);
    FUN_00b8fd60(&local_18,uVar3,*PTR_DAT_02005310,0,1);
    FUN_00414ad0(param_5 + 8,local_18);
    if (param_4 < 6) {
      if (param_4 == 5) {
        FUN_00414b50(&local_10,&DAT_01b3bc18);
      }
      else if (param_4 == 1) {
        FUN_00414b50(&local_10,&DAT_01b3bbf0);
      }
      else if (param_4 == 3) {
        FUN_00414b50(&local_10,&DAT_01b3bc18);
      }
      else if (param_4 == 4) {
        FUN_00414b50(&local_10,&DAT_01b3bc2c);
      }
    }
    else if (param_4 == 6) {
      FUN_00414b50(&local_10,&DAT_01b3bc2c);
    }
    else if (param_4 == 8) {
      FUN_00414b50(&local_10,&DAT_01b3bc04);
    }
    else if (param_4 == 0xb) {
      FUN_00414b50(&local_10,&DAT_01b3bbdc);
    }
    FUN_00416ba0(param_5 + 0x10,local_10,local_18);
  }
  *(uint *)(param_5 + 0x38) = (uint)param_4;
  FUN_01b388b0(param_5 + 8);
  FUN_01d04330(param_2,&local_38);
  FUN_00414ad0(param_5 + 0x18,local_38);
  uVar2 = FUN_01b3b5a0(param_1,param_2,local_res18[0],0);
  *(undefined4 *)*param_6 = uVar2;
  uVar2 = FUN_01b3b5a0(param_1,param_2,local_res18[0],1);
  *(undefined4 *)(*param_6 + 4) = uVar2;
  FUN_00414560(&local_38,6);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414480(&param_7);
  return;
}

