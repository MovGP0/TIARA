/* Ghidra address: 00d45dd0 */
/* Ghidra symbol: FUN_00d45dd0 */


longlong FUN_00d45dd0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00d3b000(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 200) = 0;
  *(undefined8 *)(local_res8 + 0xc0) = 0;
  FUN_00788d90(local_res8,4);
  thunk_FUN_041b2403(*(undefined8 *)(local_res8 + 8),0x4e,0,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

