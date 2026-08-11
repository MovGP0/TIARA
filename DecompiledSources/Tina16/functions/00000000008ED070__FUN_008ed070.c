/* Ghidra address: 008ed070 */
/* Ghidra symbol: FUN_008ed070 */


undefined1 FUN_008ed070(undefined8 param_1,ushort param_2)

{
  undefined8 uVar1;
  undefined1 local_31;
  uint local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < 0x179) {
    if (param_2 == 0x178) {
      local_31 = 0xbe;
      goto code_r0x008ed1a0;
    }
    if (param_2 == 0xa6) {
      local_31 = 0xa6;
      goto code_r0x008ed1a0;
    }
    if (param_2 == 0x152) {
      local_31 = 0xbc;
      goto code_r0x008ed1a0;
    }
    if (param_2 == 0x153) {
      local_31 = 0xbd;
      goto code_r0x008ed1a0;
    }
    if (param_2 == 0x161) {
      local_31 = 0xa8;
      goto code_r0x008ed1a0;
    }
  }
  else {
    if (param_2 == 0x17d) {
      local_31 = 0xb4;
      goto code_r0x008ed1a0;
    }
    if (param_2 == 0x17e) {
      local_31 = 0xb8;
      goto code_r0x008ed1a0;
    }
    if (param_2 == 0x20ac) {
      local_31 = 0xa4;
      goto code_r0x008ed1a0;
    }
  }
  if (param_2 < 0x100) {
    local_31 = (undefined1)param_2;
  }
  else {
    FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
    local_30[0] = (uint)param_2;
    local_28 = 0;
    local_20 = L"ISO-8859-15";
    local_18 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
    FUN_004134c0(uVar1);
  }
code_r0x008ed1a0:
  FUN_00414480(&local_10);
  return local_31;
}

