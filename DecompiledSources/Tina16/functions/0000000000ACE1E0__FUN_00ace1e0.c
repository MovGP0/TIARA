/* Ghidra address: 00ace1e0 */
/* Ghidra symbol: FUN_00ace1e0 */


longlong FUN_00ace1e0(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

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
  FUN_00aca540(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x158) = *(undefined8 *)(param_4 + 0x158);
  FUN_00414ad0(local_res8 + 0x160,*(undefined8 *)(param_4 + 0x160));
  *(undefined4 *)(local_res8 + 0x168) = *(undefined4 *)(param_4 + 0x168);
  FUN_00414ad0(local_res8 + 0x148,*(undefined8 *)(param_4 + 0x148));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

