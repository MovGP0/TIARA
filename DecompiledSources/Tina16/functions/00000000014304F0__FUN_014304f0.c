/* Ghidra address: 014304f0 */
/* Ghidra symbol: FUN_014304f0 */


undefined8 * FUN_014304f0(undefined8 *param_1,char param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined8 *local_res8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01430100(local_res8,0,param_3,param_4);
  local_res8[1] = param_3;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x78))(local_20,&LAB_014306ac);
  local_24 = 0x41;
  do {
    FUN_00416760(&local_38,(undefined1)local_24);
    (**(code **)(*local_20 + 0x78))(local_20,local_38);
    local_24 = local_24 + 1;
  } while (local_24 != 0x5b);
  local_24 = 0x30;
  do {
    FUN_00416760(&local_40,(undefined1)local_24);
    (**(code **)(*local_20 + 0x78))(local_20,local_40);
    local_24 = local_24 + 1;
  } while (local_24 != 0x3a);
  (**(code **)*local_res8)(local_res8,local_20);
  FUN_00410f20(local_20);
  FUN_00414560(&local_40,2);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

