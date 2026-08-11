/* Ghidra address: 005ed3f0 */
/* Ghidra symbol: FUN_005ed3f0 */


void FUN_005ed3f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_005ebee0(param_1,param_2);
  if (local_18 != 0) {
    local_10 = *(undefined8 *)(param_1 + 8);
    FUN_005ea700(param_1,local_18);
    FUN_005eb400(param_1,param_3);
    FUN_005ea700(param_1,local_10);
    thunk_FUN_0418fb4b(local_18);
  }
  return;
}

