/* Ghidra address: 0172dba0 */
/* Ghidra symbol: FUN_0172dba0 */


longlong FUN_0172dba0(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4,
                     undefined8 param_5,undefined1 param_6)

{
  longlong local_res8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 *local_60;
  undefined1 local_4d [22];
  int local_37;
  undefined1 local_33 [19];
  int local_20;
  
  local_60 = auStack_98;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  local_78 = param_5;
  local_70 = param_6;
  FUN_0172bd70(local_res8,0,param_3,param_4);
  if (*(char *)(local_res8 + 0x16c) != '\0') {
    FUN_0172a910(*(undefined8 *)(local_res8 + 8),
                 *(int *)(local_res8 + 0x14) + (uint)*(ushort *)(local_res8 + 0x16a) * 0x1a + 2);
    FUN_0172a920(*(undefined8 *)(local_res8 + 8),local_4d,0x1a);
    FUN_0172a910(*(undefined8 *)(local_res8 + 8),
                 *(int *)(local_res8 + 0x10) + (uint)*(byte *)(local_res8 + 0x169) * 0x1b + 1);
    FUN_0172a920(*(undefined8 *)(local_res8 + 8),local_33,0x1b);
    *(int *)(local_res8 + 0x170) = local_20 + 2;
    *(int *)(local_res8 + 0x174) = local_37 + 0x1f;
  }
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

