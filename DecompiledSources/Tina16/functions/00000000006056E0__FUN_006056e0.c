/* Ghidra address: 006056e0 */
/* Ghidra symbol: FUN_006056e0 */


undefined8 FUN_006056e0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_28 = 0;
  local_30 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00605f70(param_3,&local_28);
  FUN_00606000(param_3,&local_30);
  local_48 = local_28;
  local_40 = local_30;
  FUN_00605810(local_res8,0,param_3,param_4);
  FUN_00414560(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

