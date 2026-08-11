/* Ghidra address: 005eda90 */
/* Ghidra symbol: FUN_005eda90 */


undefined8 FUN_005eda90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_30 = auStack_58;
  local_10 = *(longlong *)(param_1 + 0x10);
  local_20 = FUN_005ebee0(local_10,param_2);
  local_28 = param_4;
  if (local_20 != 0) {
    local_18 = *(undefined8 *)(local_10 + 8);
    FUN_005ea700(local_10,local_20);
    cVar1 = FUN_005ebec0(local_10,param_3);
    if (cVar1 != '\0') {
      local_28 = FUN_005ebc00(local_10,param_3);
    }
    FUN_005ea700(local_10,local_18);
    thunk_FUN_0418fb4b(local_20);
  }
  return local_28;
}

