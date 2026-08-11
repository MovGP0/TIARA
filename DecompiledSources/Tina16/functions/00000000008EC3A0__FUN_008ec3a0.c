/* Ghidra address: 008ec3a0 */
/* Ghidra symbol: FUN_008ec3a0 */


char FUN_008ec3a0(undefined8 param_1,ushort param_2)

{
  char cVar1;
  undefined8 uVar2;
  char local_39;
  undefined8 local_38;
  uint local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_10 = 0;
  cVar1 = (char)param_2;
  if (0xa0 < param_2) {
    if (param_2 == 0xa7) {
      local_39 = -3;
      cVar1 = local_39;
    }
    else if (param_2 == 0xad) {
      local_39 = -0x53;
      cVar1 = local_39;
    }
    else {
      cVar1 = local_39;
      if ((ushort)(param_2 - 0x401) < 0x5f) {
        if (((param_2 == 0x40d) || (param_2 == 0x450)) || (param_2 == 0x45d)) {
          FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
          local_30[0] = (uint)param_2;
          local_28 = 0;
          local_20 = L"ISO-8859-5";
          local_18 = 0x11;
          uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
          FUN_004134c0(uVar2);
        }
        else {
          cVar1 = (char)param_2 + -0x60;
        }
      }
      else if (param_2 == 0x2116) {
        local_39 = -0x10;
        cVar1 = local_39;
      }
      else {
        FUN_0041ddd0(&local_38,PTR_PTR_02003cd8);
        local_30[0] = (uint)param_2;
        local_28 = 0;
        local_20 = L"ISO-8859-5";
        local_18 = 0x11;
        uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_38,local_30,1);
        FUN_004134c0(uVar2);
      }
    }
  }
  local_39 = cVar1;
  FUN_00414480(&local_38);
  FUN_00414480(&local_10);
  return local_39;
}

