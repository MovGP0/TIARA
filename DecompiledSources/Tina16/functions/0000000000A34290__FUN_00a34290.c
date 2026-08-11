/* Ghidra address: 00a34290 */
/* Ghidra symbol: FUN_00a34290 */


undefined8 FUN_00a34290(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  undefined4 local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_10 = 0;
  FUN_00410ae0(param_1,&local_10);
  FUN_00410ae0(param_1,&local_38);
  local_18 = local_38;
  local_1c = 0;
  if (local_38 != 0) {
    local_1c = *(undefined4 *)(local_38 + -4);
  }
  FUN_00416dc0(param_2,local_10,7,local_1c);
  FUN_00414480(&local_10);
  FUN_00414480(&local_38);
  return param_2;
}

