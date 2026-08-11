/* Ghidra address: 01b84090 */
/* Ghidra symbol: FUN_01b84090 */


void FUN_01b84090(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res20);
  cVar1 = FUN_01b80cf0(local_res10[0]);
  if (cVar1 == '\0') {
    iVar2 = FUN_00416db0(local_res10[0],&DAT_01b843d8);
    if (iVar2 != 0) {
      cVar1 = FUN_01b80e10(local_res10[0],local_c);
      if (cVar1 == '\0') {
        cVar1 = FUN_01b80fa0(local_res10[0]);
        if (cVar1 == '\0') {
          cVar1 = FUN_01b80350(local_res10[0]);
          if (cVar1 == '\0') {
            cVar1 = FUN_01b80620(local_res10[0]);
            if (cVar1 == '\0') goto code_r0x01b84358;
          }
          FUN_00414b50(&local_28,L"<TINADir>\\SpiceLib");
          FUN_00414b50(&local_20,L"LT_digital.lt");
          if (*(char *)(param_1 + 0x3c0) == '\0') {
            FUN_00414b50(&local_18,L"XDIGIFPWR1 0 DIGIFPWR");
            (**(code **)(*param_3 + 0x78))(param_3,local_18);
            *(undefined1 *)(param_1 + 0x3c0) = 1;
          }
          local_68 = local_28;
          local_60 = 0x11;
          local_58 = local_20;
          local_50 = 0x11;
          FUN_00442f70(&local_18,L".lib \"%s\\%s\"",&local_68,1);
          (**(code **)(*param_3 + 0x78))(param_3,local_18);
          goto code_r0x01b84358;
        }
      }
    }
  }
  FUN_01b81050(&local_38,local_res10[0]);
  FUN_00414b50(&local_28,L"<TINADir>\\SpiceLib");
  local_48 = local_38;
  local_40 = 0x11;
  FUN_00442f70(&local_20,L"standard.%s",&local_48,0);
  cVar1 = FUN_01b87de0(param_1,local_res20,&local_18);
  if (cVar1 == '\0') {
    local_68 = local_28;
    local_60 = 0x11;
    local_58 = local_20;
    local_50 = 0x11;
    FUN_00442f70(&local_18,L".lib \"%s\\%s\"",&local_68,1);
    (**(code **)(*param_3 + 0x78))(param_3,local_18);
  }
  else {
    cVar1 = FUN_01b84070(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_3 + 0x78))(param_3,local_18);
    }
    else {
      FUN_00414b50(&local_28,*(undefined8 *)(param_1 + 0x398));
      local_68 = local_28;
      local_60 = 0x11;
      local_58 = *(undefined8 *)(param_1 + 0x388);
      local_50 = 0x11;
      FUN_00442f70(&local_18,L".lib \"%s\\%s\"",&local_68,1);
      (**(code **)(*param_3 + 0x78))(param_3,local_18);
    }
  }
code_r0x01b84358:
  FUN_00414560(&local_38,5);
  FUN_00414480(local_res10);
  FUN_00414480(&local_res20);
  return;
}

