/* Ghidra address: 01130b40 */
/* Ghidra symbol: FUN_01130b40 */


undefined8
FUN_01130b40(undefined8 param_1,char param_2,undefined8 param_3,ushort param_4,ushort param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 local_res8;
  undefined1 auStack_b8 [32];
  uint local_98;
  undefined *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined1 local_64 [34];
  undefined1 local_42 [34];
  undefined8 local_20 [2];
  
  local_70 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  if (((param_4 == 0) || (0x40 < param_4)) || (param_4 < param_5)) {
    FUN_0041ddd0(&local_78,PTR_PTR_02003350);
    FUN_0112d910(local_78);
  }
  FUN_00414480(local_20);
  local_98 = (uint)param_5;
  local_90 = PTR_DAT_02004830;
  FUN_00448510(local_20,param_3,2,param_4);
  FUN_0112f2b0(local_42,local_20[0]);
  FUN_00414480(local_20);
  cVar2 = FUN_0112ebb0(local_42,local_64,param_4,param_5);
  if (cVar2 == '\0') {
    FUN_0041ddd0(&local_80,PTR_PTR_02003350);
    FUN_0112d910(local_80);
  }
  FUN_01130820(local_res8,0,local_64);
  FUN_00414560(&local_80,2);
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

