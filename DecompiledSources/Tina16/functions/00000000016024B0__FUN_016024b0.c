/* Ghidra address: 016024b0 */
/* Ghidra symbol: FUN_016024b0 */


undefined4 FUN_016024b0(undefined8 param_1,char param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined4 local_8c;
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
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00441a10(&local_18,local_res8[0]);
  FUN_0043e130(&local_10,local_18);
  iVar1 = FUN_00416db0(local_10,L".VHD");
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      local_8c = 1;
    }
    else {
      local_8c = 7;
    }
  }
  else {
    FUN_00441a10(&local_28,local_res8[0]);
    FUN_0043e130(&local_20,local_28);
    iVar1 = FUN_00416db0(local_20,L".AMS");
    if (iVar1 == 0) {
      local_8c = 7;
    }
    else {
      FUN_00441a10(&local_38,local_res8[0]);
      FUN_0043e130(&local_30,local_38);
      iVar1 = FUN_00416db0(local_30,&DAT_0160284c);
      if (iVar1 == 0) {
        local_8c = 2;
      }
      else {
        FUN_00441a10(&local_48,local_res8[0]);
        FUN_0043e130(&local_40,local_48);
        iVar1 = FUN_00416db0(local_40,&DAT_01602860);
        if (iVar1 == 0) {
          local_8c = 5;
        }
        else {
          FUN_00441a10(&local_58,local_res8[0]);
          FUN_0043e130(&local_50,local_58);
          iVar1 = FUN_00416db0(local_50,&DAT_01602874);
          if (iVar1 == 0) {
            local_8c = 3;
          }
          else {
            FUN_00441a10(&local_68,local_res8[0]);
            FUN_0043e130(&local_60,local_68);
            iVar1 = FUN_00416db0(local_60,L".VAMS");
            if (iVar1 == 0) {
              local_8c = 4;
            }
            else {
              FUN_00441a10(&local_78,local_res8[0]);
              FUN_0043e130(&local_70,local_78);
              iVar1 = FUN_00416db0(local_70,L".DLL");
              if (iVar1 == 0) {
                if (param_2 == '\0') {
                  local_8c = 5;
                }
                else {
                  local_8c = 6;
                }
              }
              else {
                FUN_00441a10(&local_88,local_res8[0]);
                FUN_0043e130(&local_80,local_88);
                iVar1 = FUN_00416db0(local_80,L".TFLITE");
                if (iVar1 == 0) {
                  local_8c = 8;
                }
                else {
                  uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid extension!");
                  FUN_004134c0(uVar2);
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00414560(&local_88,0x10);
  FUN_00414480(local_res8);
  return local_8c;
}

