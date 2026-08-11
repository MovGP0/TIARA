/* Ghidra address: 008ecce0 */
/* Ghidra symbol: FUN_008ecce0 */


undefined1 FUN_008ecce0(undefined8 param_1,ushort param_2)

{
  undefined8 uVar1;
  undefined1 local_31;
  uint local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < 0x132) {
    if (param_2 == 0x131) {
      local_31 = 0xfd;
      goto code_r0x008ecde2;
    }
    if (param_2 == 0x11e) {
      local_31 = 0xd0;
      goto code_r0x008ecde2;
    }
    if (param_2 == 0x11f) {
      local_31 = 0xf0;
      goto code_r0x008ecde2;
    }
    if (param_2 == 0x130) {
      local_31 = 0xdd;
      goto code_r0x008ecde2;
    }
  }
  else {
    if (param_2 == 0x15e) {
      local_31 = 0xde;
      goto code_r0x008ecde2;
    }
    if (param_2 == 0x15f) {
      local_31 = 0xfe;
      goto code_r0x008ecde2;
    }
  }
  if (param_2 < 0x100) {
    local_31 = (undefined1)param_2;
  }
  else {
    FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
    local_30[0] = (uint)param_2;
    local_28 = 0;
    local_20 = L"ISO-8859-9";
    local_18 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
    FUN_004134c0(uVar1);
  }
code_r0x008ecde2:
  FUN_00414480(&local_10);
  return local_31;
}

