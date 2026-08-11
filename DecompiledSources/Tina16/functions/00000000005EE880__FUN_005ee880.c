/* Ghidra address: 005ee880 */
/* Ghidra symbol: FUN_005ee880 */


void FUN_005ee880(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  local_20 = *(longlong *)(param_1 + 0x10);
  local_30 = FUN_005ebee0(local_20,param_2);
  if (local_30 == 0) {
    (**(code **)(*param_3 + 0x90))(param_3);
  }
  else {
    local_28 = *(undefined8 *)(local_20 + 8);
    FUN_005ea700(local_20,local_30);
    FUN_005eb0d0(local_20,param_3);
    FUN_005ea700(local_20,local_28);
    thunk_FUN_0418fb4b(local_30);
  }
  return;
}

