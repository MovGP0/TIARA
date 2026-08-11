/* Ghidra address: 00b91e50 */
/* Ghidra symbol: FUN_00b91e50 */


undefined4 FUN_00b91e50(undefined8 param_1)

{
  undefined8 local_res8 [4];
  undefined1 auStack_188 [40];
  undefined8 local_160;
  undefined1 local_158 [24];
  undefined1 local_140 [256];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  char local_1d [17];
  undefined4 local_c;
  
  local_30 = auStack_188;
  local_160 = 0;
  local_40 = 0;
  local_38 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_004169a0(&local_38,&DAT_01e9473f);
  local_24 = FUN_004170c0(local_38,local_res8[0],1);
  if (local_24 < 1) {
    local_c = 0;
  }
  else {
    FUN_00416dc0(&local_40,local_res8[0],local_24 + 3,8);
    FUN_00416910(local_140,local_40,0xff);
    FUN_00415020(local_1d,local_140,0x10);
    if (local_1d[0] == '\0') {
      local_c = 0;
    }
    else {
      FUN_00414ff0(local_158,&LAB_00b9202c);
      FUN_00415110(local_158,local_1d,0x11);
      FUN_004169a0(&local_160,local_158);
      local_c = FUN_0043fc00(local_160);
    }
  }
  FUN_00414480(&local_160);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_res8);
  return local_c;
}

