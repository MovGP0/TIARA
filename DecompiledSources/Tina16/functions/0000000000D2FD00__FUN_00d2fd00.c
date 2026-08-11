/* Ghidra address: 00d2fd00 */
/* Ghidra symbol: FUN_00d2fd00 */


undefined1 FUN_00d2fd00(void)

{
  int iVar1;
  undefined1 local_149;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130 [2];
  undefined4 local_11c;
  int local_118;
  int local_114;
  int local_10c;
  undefined1 local_108 [256];
  
  local_140 = 0;
  local_148 = 0;
  local_130[0] = 0;
  local_138 = 0;
  FUN_0040d200(&local_11c,0x114,0);
  local_11c = 0x114;
  thunk_FUN_03ed3ad2(&local_11c);
  local_149 = 0;
  if (local_10c == 2) {
    if (local_118 == 3) {
      local_149 = 6;
    }
    else if (local_118 == 4) {
      local_149 = 7;
    }
    else if (local_118 == 5) {
      local_149 = 8;
    }
    else if (local_118 - 6U < 3) {
      local_149 = 10;
    }
    else {
      local_149 = 10;
    }
    if ((local_118 == 5) && (local_114 == 1)) {
      local_149 = 9;
    }
  }
  else if ((local_118 == 4) && (local_114 == 0)) {
    local_149 = 1;
    FUN_00416830(&local_138,local_108,0x80);
    FUN_0043ea00(local_130,local_138);
    iVar1 = FUN_00416db0(local_130[0],&DAT_00d2fea8);
    if (iVar1 == 0) {
      local_149 = 2;
    }
  }
  else if ((local_118 == 4) && (local_114 == 10)) {
    local_149 = 3;
    FUN_00416830(&local_148,local_108,0x80);
    FUN_0043ea00(&local_140,local_148);
    iVar1 = FUN_00416db0(local_140,&LAB_00d2feb8);
    if (iVar1 == 0) {
      local_149 = 4;
    }
  }
  else if ((local_118 == 4) && (local_114 == 0x5a)) {
    local_149 = 5;
  }
  FUN_00414560(&local_148,4);
  return local_149;
}

