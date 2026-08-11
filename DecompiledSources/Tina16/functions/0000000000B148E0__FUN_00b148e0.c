/* Ghidra address: 00b148e0 */
/* Ghidra symbol: FUN_00b148e0 */


longlong FUN_00b148e0(longlong param_1,char param_2,byte param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(byte *)(local_res8 + 0x30) = param_3;
  FUN_00416880(&local_30,*(undefined8 *)(&DAT_01e81dd8 + (ulonglong)param_3 * 8));
  FUN_00416880(&local_38,param_4);
  local_48 = local_38;
  FUN_00416cd0(&local_28,3,local_30,&DAT_00b14a3c);
  FUN_0044d490(local_res8,0,local_28);
  FUN_00414560(&local_38,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

