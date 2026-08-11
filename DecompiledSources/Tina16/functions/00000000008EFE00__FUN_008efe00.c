/* Ghidra address: 008efe00 */
/* Ghidra symbol: FUN_008efe00 */


char FUN_008efe00(undefined8 param_1,ushort param_2)

{
  char cVar1;
  undefined8 uVar2;
  ushort *puVar3;
  char local_31;
  uint local_30 [2];
  undefined1 local_28;
  wchar_t *local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_2 < 0x80) || ((param_2 < 0x100 && (0x9f < param_2)))) {
    cVar1 = (char)param_2;
  }
  else {
    cVar1 = -0x80;
    puVar3 = &DAT_01e2eda2;
    do {
      if (*puVar3 == param_2) goto LAB_008efeb8;
      cVar1 = cVar1 + '\x01';
      puVar3 = puVar3 + 1;
    } while (cVar1 != -0x60);
    FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
    local_30[0] = (uint)param_2;
    local_28 = 0;
    local_20 = L"Windows-1252";
    local_18 = 0x11;
    uVar2 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
    FUN_004134c0(uVar2);
    cVar1 = local_31;
  }
LAB_008efeb8:
  local_31 = cVar1;
  FUN_00414480(&local_10);
  return local_31;
}

