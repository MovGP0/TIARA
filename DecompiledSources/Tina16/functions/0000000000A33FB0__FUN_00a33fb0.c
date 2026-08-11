/* Ghidra address: 00a33fb0 */
/* Ghidra symbol: FUN_00a33fb0 */


undefined8 * FUN_00a33fb0(undefined8 *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  int local_38;
  undefined4 local_34;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_88;
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00410e60(local_res8,0);
  local_20[0] = 0;
  FUN_00410ae0(*local_res8,local_20);
  FUN_00410ae0(*local_res8,&local_58);
  local_30 = local_58;
  local_34 = 0;
  if (local_58 != 0) {
    local_34 = *(undefined4 *)(local_58 + -4);
  }
  FUN_00416dc0(&local_60,local_20[0],7,local_34);
  FUN_00415dd0(&local_28,local_60,0);
  FUN_00414480(local_20);
  local_38 = 0;
  if (local_28 != 0) {
    local_38 = *(int *)(local_28 + -4);
  }
  if (local_38 == 4) {
    local_40 = local_res8 + 4;
    local_48 = FUN_00414df0(&local_28);
    FUN_00409a70(local_48,local_40,4);
  }
  uVar2 = FUN_004095c0(1);
  local_res8[1] = uVar2;
  *(undefined4 *)(local_res8 + 2) = 0;
  local_res8[3] = param_3;
  FUN_00414560(&local_60,2);
  FUN_004144d0(&local_28);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

