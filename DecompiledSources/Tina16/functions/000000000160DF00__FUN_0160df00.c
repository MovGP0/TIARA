/* Ghidra address: 0160df00 */
/* Ghidra symbol: FUN_0160df00 */


undefined1 FUN_0160df00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res20;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_19;
  undefined8 local_18;
  undefined1 local_9;
  
  local_18 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20 = param_4;
  local_28 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_9 = 0;
  FUN_00414480(&local_18);
  FUN_0160db50(auStack_48,local_res8,0);
  FUN_00414ad0(local_28,local_18);
  local_19 = local_9;
  FUN_00414480(&local_18);
  FUN_00414560(&local_res8,2);
  return local_19;
}

