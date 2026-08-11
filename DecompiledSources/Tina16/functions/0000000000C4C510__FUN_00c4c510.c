/* Ghidra address: 00c4c510 */
/* Ghidra symbol: FUN_00c4c510 */


undefined8 * FUN_00c4c510(undefined8 *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_24;
  undefined8 *local_20 [2];
  
  local_40 = auStack_68;
  local_48 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_004d22d0(local_res8,0,param_3);
  if (DAT_02019c78 == 0) {
    DAT_02019c78 = FUN_00c4e8e0(&PTR_FUN_00c4b2d8,1);
  }
  local_20[0] = local_res8;
  local_24 = FUN_00597e50(DAT_02019c78 + 8,local_20);
  FUN_00410ae0(*local_res8,&local_48);
  FUN_00416ad0(&local_48,L" created");
  FUN_00c4c420(local_48);
  FUN_00414480(&local_48);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

