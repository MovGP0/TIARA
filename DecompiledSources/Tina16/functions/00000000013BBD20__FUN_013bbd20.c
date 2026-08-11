/* Ghidra address: 013bbd20 */
/* Ghidra symbol: FUN_013bbd20 */


void FUN_013bbd20(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  if (param_4 == '\0') {
    FUN_00414b50(&local_10,L"-X %s=%s");
  }
  else {
    FUN_00414b50(&local_10,L"-X %s=\"%s\"");
  }
  local_40 = local_res10;
  local_38 = 0x11;
  local_30 = local_res18;
  local_28 = 0x11;
  FUN_00442f70(local_20,local_10,&local_40,1);
  FUN_00416cd0(param_1 + 0xb8,3,*(undefined8 *)(param_1 + 0xb8),local_20[0],&LAB_013bbeb8);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}

