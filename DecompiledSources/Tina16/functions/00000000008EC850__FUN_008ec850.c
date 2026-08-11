/* Ghidra address: 008ec850 */
/* Ghidra symbol: FUN_008ec850 */


char FUN_008ec850(undefined8 param_1,ushort param_2)

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
  if (param_2 < 0xa1) goto code_r0x008ec98a;
  uVar2 = (ulonglong)param_2;
  if (uVar2 < 0xbe) {
    if (uVar2 == 0xbd) goto code_r0x008ec98a;
    if (uVar2 < 0xb0) {
      if ((uVar2 - 0xa6 < 4) || (uVar2 - 0xab < 3)) goto code_r0x008ec98a;
    }
    else if (((uVar2 - 0xb0 < 4) || (uVar2 == 0xb7)) || (uVar2 == 0xbb)) goto code_r0x008ec98a;
  }
  else {
    if (uVar2 - 0x373 < 0x5c) {
      cVar1 = cVar1 + '0';
      goto code_r0x008ec98a;
    }
    if (uVar2 == 0x2015) {
      local_31 = -0x51;
      cVar1 = local_31;
      goto code_r0x008ec98a;
    }
    if (uVar2 == 0x2018) {
      local_31 = -0x5f;
      cVar1 = local_31;
      goto code_r0x008ec98a;
    }
    if (uVar2 == 0x2019) {
      local_31 = -0x5e;
      cVar1 = local_31;
      goto code_r0x008ec98a;
    }
  }
  FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
  local_30[0] = (uint)param_2;
  local_28 = 0;
  local_20 = L"ISO-8859-7";
  local_18 = 0x11;
  uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
  FUN_004134c0(uVar3);
  cVar1 = local_31;
code_r0x008ec98a:
  local_31 = cVar1;
  FUN_00414480(&local_10);
  return local_31;
}

