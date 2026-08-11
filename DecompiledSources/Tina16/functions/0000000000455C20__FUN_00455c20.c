/* Ghidra address: 00455c20 */
/* Ghidra symbol: FUN_00455c20 */


undefined8 FUN_00455c20(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  wchar_t *local_30;
  undefined1 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_10 = 0;
  if (param_4 == 0) {
    FUN_00414480(param_2);
  }
  else {
    local_20 = auStack_68;
    if (param_3 < 0) {
      local_30 = L"StartIndex";
      local_28 = 0x11;
      local_48 = 0;
      local_20 = auStack_68;
      uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_30);
      FUN_004134c0(uVar1);
    }
    if (param_4 < 0) {
      local_30 = L"StrLength";
      local_28 = 0x11;
      local_48 = 0;
      uVar1 = FUN_0044d8d0(&PTR_FUN_004355d0,1,PTR_PTR_02005608,&local_30);
      FUN_004134c0(uVar1);
    }
    FUN_00453ab0(param_1,param_3);
    FUN_00453ab0(param_1,param_3 + param_4 + -1);
    FUN_00414480(&local_10);
    local_18 = (undefined8 *)(param_1 + 8);
    FUN_00416dc0(&local_10,*local_18,param_3 + 1,param_4);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
  }
  FUN_00414480(&local_10);
  return param_2;
}

