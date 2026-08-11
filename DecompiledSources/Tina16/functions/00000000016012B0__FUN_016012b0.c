/* Ghidra address: 016012b0 */
/* Ghidra symbol: FUN_016012b0 */


undefined1 FUN_016012b0(undefined8 param_1,char param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_1c [12];
  
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  local_49 = 0;
  FUN_015fcb30(&local_30,&DAT_0210f7fc);
  local_58 = param_3;
  if (param_3 == 0) {
    local_58 = FUN_019a4600();
  }
  if (local_58 != 0) {
    FUN_019af590(local_58,local_30);
    cVar1 = FUN_016009b0(local_58,8,local_1c,&local_28);
    if (cVar1 == '\0') {
      if (param_2 == '\0') {
        uVar2 = FUN_00b89270();
        FUN_0041ddd0(&local_48,PTR_PTR_02001a40);
        FUN_00b8e650(uVar2,local_40,L"HDLStrings.Msg_NoPic18",local_48);
        FUN_016fd940(local_40[0]);
      }
    }
    else {
      FUN_01600b60(local_28);
      local_49 = 1;
    }
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  return local_49;
}

