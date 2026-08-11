/* Ghidra address: 01cbff30 */
/* Ghidra symbol: FUN_01cbff30 */


undefined8 FUN_01cbff30(undefined8 param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00416830(&local_38,param_3 + 0x20,0x105);
  FUN_01cbfd50(local_res8,0,local_38);
  FUN_01cc0070(local_res8,param_3);
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

