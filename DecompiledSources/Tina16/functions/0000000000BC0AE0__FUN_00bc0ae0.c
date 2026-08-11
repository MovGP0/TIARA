/* Ghidra address: 00bc0ae0 */
/* Ghidra symbol: FUN_00bc0ae0 */


undefined1
FUN_00bc0ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            char param_5)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_9;
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_18 = param_2;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  if (param_5 == '\0') {
    local_9 = FUN_00bc0400(auStack_38,local_18,local_res18,local_res20);
  }
  else {
    local_9 = FUN_00bbfe20(auStack_38,local_18,local_res18,local_res20);
  }
  FUN_00414560(&local_res18,2);
  return local_9;
}

