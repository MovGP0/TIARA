/* Ghidra address: 005ee3f0 */
/* Ghidra symbol: FUN_005ee3f0 */


void FUN_005ee3f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  char local_28 [8];
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_10 = *(longlong *)(param_1 + 0x10);
  FUN_005ea710(local_10,param_2);
  local_20 = FUN_005ebee0(local_10,param_2);
  if (local_20 != 0) {
    local_18 = *(undefined8 *)(local_10 + 8);
    FUN_005ea700(local_10,local_20);
    cVar1 = FUN_005eb550(local_10,param_3,local_28);
    if ((cVar1 == '\0') || (local_28[0] != '\x01')) {
      FUN_005eba20(local_10,param_3,param_4);
    }
    else {
      FUN_0043f750(&local_38,param_4);
      FUN_005eb630(local_10,param_3,local_38);
    }
    FUN_005ea700(local_10,local_18);
    thunk_FUN_0418fb4b(local_20);
  }
  FUN_00414480(&local_38);
  return;
}

