/* Ghidra address: 005ee150 */
/* Ghidra symbol: FUN_005ee150 */


void FUN_005ee150(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = auStack_58;
  local_10 = *(longlong *)(param_1 + 0x10);
  FUN_005ea710(local_10,param_2);
  local_20 = FUN_005ebee0(local_10,param_2);
  if (local_20 != 0) {
    local_18 = *(undefined8 *)(local_10 + 8);
    FUN_005ea700(local_10,local_20);
    FUN_005ebc50(local_10,param_3,param_4);
    FUN_005ea700(local_10,local_18);
    thunk_FUN_0418fb4b(local_20);
  }
  return;
}

