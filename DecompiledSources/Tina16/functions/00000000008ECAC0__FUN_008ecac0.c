/* Ghidra address: 008ecac0 */
/* Ghidra symbol: FUN_008ecac0 */


char FUN_008ecac0(undefined8 param_1,ushort param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  char local_31;
  uint local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = (char)param_2;
  if (param_2 < 0xa1) goto code_r0x008ecbee;
  uVar2 = (ulonglong)param_2;
  if (uVar2 < 0xd8) {
    if (uVar2 == 0xd7) {
      local_31 = -0x56;
      cVar1 = local_31;
      goto code_r0x008ecbee;
    }
    if ((((uVar2 - 0xa2 < 8) || (uVar2 - 0xab < 4)) || (uVar2 - 0xb0 < 10)) || (uVar2 - 0xbb < 4))
    goto code_r0x008ecbee;
  }
  else {
    if (uVar2 == 0xf7) {
      local_31 = -0x46;
      cVar1 = local_31;
      goto code_r0x008ecbee;
    }
    if (uVar2 - 0x5c0 < 0x1b) {
      cVar1 = cVar1 + ' ';
      goto code_r0x008ecbee;
    }
    if (uVar2 == 0x2017) {
      local_31 = -0x21;
      cVar1 = local_31;
      goto code_r0x008ecbee;
    }
    if (uVar2 == 0x203e) {
      local_31 = -0x51;
      cVar1 = local_31;
      goto code_r0x008ecbee;
    }
  }
  FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
  local_30[0] = (uint)param_2;
  local_28 = 0;
  local_20 = L"ISO-8859-8";
  local_18 = 0x11;
  uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
  FUN_004134c0(uVar3);
  cVar1 = local_31;
code_r0x008ecbee:
  local_31 = cVar1;
  FUN_00414480(&local_10);
  return local_31;
}

