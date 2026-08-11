/* Ghidra address: 00ac2f70 */
/* Ghidra symbol: FUN_00ac2f70 */


undefined8
FUN_00ac2f70(undefined8 param_1,char param_2,undefined8 param_3,longlong param_4,longlong param_5)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_78;
  local_20[0] = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (param_5 == 0) {
    if (param_4 != 0) {
      FUN_00a72b50(param_4,local_20);
      FUN_00a72920(param_4,&local_28);
    }
  }
  else {
    FUN_00414b50(local_20,*(undefined8 *)(param_5 + 0x48));
    FUN_00414b50(&local_28,*(undefined8 *)(param_5 + 0x40));
  }
  local_58 = param_5;
  local_50 = local_20[0];
  local_48 = local_28;
  FUN_00ac3120(local_res8,0,param_3,param_4);
  FUN_00414560(&local_28,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

