/* Ghidra address: 00b146c0 */
/* Ghidra symbol: FUN_00b146c0 */


longlong FUN_00b146c0(longlong param_1,char param_2,byte param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(byte *)(local_res8 + 0x30) = param_3;
  FUN_00416880(&local_28,*(undefined8 *)(&DAT_01e81dd8 + (ulonglong)param_3 * 8));
  FUN_0044d490(local_res8,0,local_28);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

