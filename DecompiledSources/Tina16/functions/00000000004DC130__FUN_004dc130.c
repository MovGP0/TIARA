/* Ghidra address: 004dc130 */
/* Ghidra symbol: FUN_004dc130 */


undefined8 * FUN_004dc130(undefined8 *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410ae0(*local_res8,&local_38);
  local_30 = local_38;
  local_28 = 0x11;
  local_48 = 0;
  uVar2 = FUN_0044d8d0(&PTR_FUN_00434a30,1,PTR_DAT_02004408,&local_30);
  FUN_004134c0(uVar2);
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

