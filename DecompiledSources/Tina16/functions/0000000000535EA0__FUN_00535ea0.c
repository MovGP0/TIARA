/* Ghidra address: 00535ea0 */
/* Ghidra symbol: FUN_00535ea0 */


longlong FUN_00535ea0(longlong param_1,char param_2,longlong param_3,int param_4,undefined8 param_5,
                     undefined1 param_6)

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
  FUN_00535dd0(local_res8,0,param_4,param_5);
  *(undefined1 *)(local_res8 + 0x28) = param_6;
  if (param_3 != 0) {
    FUN_00409a70(param_3,*(undefined8 *)(local_res8 + 0x20),(longlong)param_4);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

