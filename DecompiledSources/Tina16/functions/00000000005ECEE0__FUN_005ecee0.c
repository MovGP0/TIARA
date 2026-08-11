/* Ghidra address: 005ecee0 */
/* Ghidra symbol: FUN_005ecee0 */


undefined8
FUN_005ecee0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            longlong param_5)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_005ebee0(param_1,param_3);
  if (local_18 != 0) {
    local_10 = *(undefined8 *)(param_1 + 8);
    FUN_005ea700(param_1,local_18);
    if ((param_5 == 0) || (cVar1 = FUN_005ebec0(param_1,param_4), cVar1 != '\0')) {
      FUN_005eb6d0(param_1,param_2,param_4);
    }
    else {
      FUN_00414ad0(param_2,param_5);
    }
    FUN_005ea700(param_1,local_10);
    thunk_FUN_0418fb4b(local_18);
    return param_2;
  }
  FUN_00414ad0(param_2,param_5);
  return param_2;
}

