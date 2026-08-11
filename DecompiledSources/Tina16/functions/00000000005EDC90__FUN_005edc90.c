/* Ghidra address: 005edc90 */
/* Ghidra symbol: FUN_005edc90 */


undefined4 FUN_005edc90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  char local_2c [8];
  undefined4 local_24;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_10 = *(longlong *)(param_1 + 0x10);
  local_20 = FUN_005ebee0(local_10,param_2);
  local_24 = param_4;
  if (local_20 != 0) {
    local_18 = *(undefined8 *)(local_10 + 8);
    FUN_005ea700(local_10,local_20);
    cVar1 = FUN_005eb550(local_10,param_3,local_2c);
    if (cVar1 != '\0') {
      if (local_2c[0] == '\x01') {
        FUN_005eb6d0(local_10,&local_48,param_3);
        local_24 = FUN_0043fc50(local_48,param_4);
      }
      else {
        local_24 = FUN_005eba50(local_10,param_3);
      }
    }
    FUN_005ea700(local_10,local_18);
    thunk_FUN_0418fb4b(local_20);
  }
  FUN_00414480(&local_48);
  return local_24;
}

