/* Ghidra address: 00b147c0 */
/* Ghidra symbol: FUN_00b147c0 */


longlong FUN_00b147c0(longlong param_1,char param_2,byte param_3,undefined8 param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(byte *)(local_res8 + 0x30) = param_3;
  FUN_00416880(&local_28,*(undefined8 *)(&DAT_01e81dd8 + (ulonglong)param_3 * 8));
  local_38 = param_5;
  FUN_0044d530(local_res8,0,local_28,param_4);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

