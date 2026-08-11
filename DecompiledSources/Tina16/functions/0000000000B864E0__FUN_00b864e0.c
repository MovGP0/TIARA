/* Ghidra address: 00b864e0 */
/* Ghidra symbol: FUN_00b864e0 */


undefined8 FUN_00b864e0(undefined8 param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 local_res8;
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
  FUN_00b6cfe0(local_res8,0,param_3);
  if (DAT_020198ec == '\0') {
    FUN_00b863d0();
    DAT_020198ec = '\x01';
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

