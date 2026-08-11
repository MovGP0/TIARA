/* Ghidra address: 006242c0 */
/* Ghidra symbol: FUN_006242c0 */


longlong FUN_006242c0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_20 [2];
  
  local_30 = auStack_68;
  local_38 = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00414b50(local_20,param_3);
  if (local_20[0] == 0) {
    FUN_0044b630(local_20,param_4,0);
    if (local_20[0] == 0) {
      FUN_0041ddd0(&local_38,PTR_PTR_02001c20);
      local_40 = 0;
      local_48[0] = param_4;
      FUN_00442fd0(local_20,local_38,local_48,0);
    }
  }
  FUN_0044d9f0(local_res8,0,local_20[0],param_5);
  *(undefined4 *)(local_res8 + 0x30) = param_4;
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

