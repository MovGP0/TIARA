/* Ghidra address: 005ed310 */
/* Ghidra symbol: FUN_005ed310 */


void FUN_005ed310(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_005ea710(param_1,param_2);
  local_18 = FUN_005ebee0(param_1,param_2);
  if (local_18 != 0) {
    local_10 = *(undefined8 *)(param_1 + 8);
    FUN_005ea700(param_1,local_18);
    FUN_005eb630(param_1,param_3,(&PTR_DAT_01deacb0)[param_4]);
    FUN_005ea700(param_1,local_10);
    thunk_FUN_0418fb4b(local_18);
  }
  return;
}

