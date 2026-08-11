/* Ghidra address: 00ea2dc0 */
/* Ghidra symbol: FUN_00ea2dc0 */


undefined8 FUN_00ea2dc0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (param_2 == 0) {
    local_30 = auStack_58;
    FUN_00414480(param_1);
  }
  else {
    FUN_00414480(&local_20);
    FUN_00416dc0(&local_20,param_2,1,1);
    local_10 = 0;
    FUN_0043e130(&local_10,local_20);
    local_24 = 0;
    if (param_2 != 0) {
      local_24 = *(undefined4 *)(param_2 + -4);
    }
    FUN_00414480(&local_18);
    FUN_00416dc0(&local_18,param_2,2,local_24);
    FUN_0043e600(&local_38,local_18);
    FUN_00416ba0(param_1,local_10,local_38);
    FUN_00414480(&local_10);
    FUN_00414480(&local_18);
    FUN_00414480(&local_20);
  }
  FUN_00414480(&local_38);
  FUN_00414560(&local_20,2);
  return param_1;
}

