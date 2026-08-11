/* Ghidra address: 01c3ff70 */
/* Ghidra symbol: FUN_01c3ff70 */


bool FUN_01c3ff70(longlong param_1,undefined8 param_2,undefined1 *param_3,uint *param_4)

{
  int iVar1;
  undefined8 local_res10 [3];
  bool local_89;
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
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_4 = 0;
  FUN_00441a10(&local_18,local_res10[0]);
  FUN_0043e130(&local_10,local_18);
  iVar1 = FUN_00416db0(local_10,L".VHD");
  if (iVar1 != 0) {
    FUN_00441a10(&local_28,local_res10[0]);
    FUN_0043e130(&local_20,local_28);
    iVar1 = FUN_00416db0(local_20,L".AMS");
    if (iVar1 != 0) {
      local_89 = false;
      goto LAB_01c400bd;
    }
  }
  local_89 = true;
LAB_01c400bd:
  if (local_89 == false) {
    FUN_00441a10(&local_38,local_res10[0]);
    FUN_0043e130(&local_30,local_38);
    iVar1 = FUN_00416db0(local_30,&DAT_01c4038c);
    local_89 = iVar1 == 0;
    if (local_89) {
      *param_3 = 3;
      *param_4 = *param_4 | 1;
    }
    else {
      FUN_00441a10(&local_48,local_res10[0]);
      FUN_0043e130(&local_40,local_48);
      iVar1 = FUN_00416db0(local_40,&DAT_01c403a0);
      local_89 = iVar1 == 0;
      if (local_89) {
        *param_3 = 3;
        *param_4 = *param_4 | 2;
      }
      else {
        FUN_00441a10(&local_58,local_res10[0]);
        FUN_0043e130(&local_50,local_58);
        iVar1 = FUN_00416db0(local_50,&DAT_01c403b4);
        local_89 = iVar1 == 0;
        if (local_89) {
          *param_3 = 4;
          *param_4 = *param_4 | 4;
        }
        else {
          FUN_00441a10(&local_68,local_res10[0]);
          FUN_0043e130(&local_60,local_68);
          iVar1 = FUN_00416db0(local_60,L".VAMS");
          local_89 = iVar1 == 0;
          if (local_89) {
            *param_3 = 4;
            *param_4 = *param_4 | 8;
          }
          else {
            FUN_00441a10(&local_78,local_res10[0]);
            FUN_0043e130(&local_70,local_78);
            iVar1 = FUN_00416db0(local_70,L".DLL");
            local_89 = iVar1 == 0;
            if (local_89) {
              *param_3 = 3;
              *param_4 = *param_4 | 0x10;
            }
            else if (*(char *)(param_1 + 0xbfc) != '\0') {
              FUN_00441a10(&local_88,local_res10[0]);
              FUN_0043e130(&local_80,local_88);
              iVar1 = FUN_00416db0(local_80,L".TFLITE");
              local_89 = iVar1 == 0;
              if (local_89) {
                *param_3 = 3;
                *param_4 = *param_4 | 0x20;
              }
            }
          }
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0xbf9) == '\0') {
    *param_3 = 3;
  }
  else {
    *param_3 = 4;
  }
  FUN_00414560(&local_88,0x10);
  FUN_00414480(local_res10);
  return local_89;
}

