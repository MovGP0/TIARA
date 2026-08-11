/* Ghidra address: 008ec600 */
/* Ghidra symbol: FUN_008ec600 */


char FUN_008ec600(undefined8 param_1,ushort param_2)

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
  if (param_2 < 0xa1) goto code_r0x008ec6fe;
  uVar2 = (ulonglong)param_2;
  if (uVar2 < 0x63c) {
    if (uVar2 != 0x63b) {
      if (uVar2 == 0xa4) {
        local_31 = -0x5c;
        cVar1 = local_31;
        goto code_r0x008ec6fe;
      }
      if (uVar2 == 0xad) {
        local_31 = -0x53;
        cVar1 = local_31;
        goto code_r0x008ec6fe;
      }
      if (uVar2 != 0x62c) goto LAB_008ec6a9;
    }
  }
  else if (((uVar2 != 0x63f) && (0x19 < uVar2 - 0x641)) && (0x12 < uVar2 - 0x660)) {
LAB_008ec6a9:
    FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
    local_30[0] = (uint)param_2;
    local_28 = 0;
    local_20 = L"ISO-8859-6";
    local_18 = 0x11;
    uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
    FUN_004134c0(uVar3);
    cVar1 = local_31;
    goto code_r0x008ec6fe;
  }
  cVar1 = (char)param_2 + -0x80;
code_r0x008ec6fe:
  local_31 = cVar1;
  FUN_00414480(&local_10);
  return local_31;
}

