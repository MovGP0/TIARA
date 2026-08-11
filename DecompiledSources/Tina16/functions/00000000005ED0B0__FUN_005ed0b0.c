/* Ghidra address: 005ed0b0 */
/* Ghidra symbol: FUN_005ed0b0 */


undefined4 FUN_005ed0b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_28 = 0;
  local_18 = FUN_005ebee0(param_1,param_2);
  local_1c = param_4;
  if (local_18 != 0) {
    local_10 = *(undefined8 *)(param_1 + 8);
    FUN_005ea700(param_1,local_18);
    FUN_005eb6d0(param_1,&local_28,param_3);
    local_1c = FUN_0043fc50(local_28,param_4);
    FUN_005ea700(param_1,local_10);
    thunk_FUN_0418fb4b(local_18);
  }
  FUN_00414480(&local_28);
  return local_1c;
}

