/* Ghidra address: 00c4d140 */
/* Ghidra symbol: FUN_00c4d140 */


undefined8 * FUN_00c4d140(undefined8 *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_004d22d0(local_res8,0,param_3);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0xf] = uVar2;
  FUN_00410ae0(*local_res8,&local_28);
  FUN_00416ad0(&local_28,L" created");
  FUN_00c4c420(local_28);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

