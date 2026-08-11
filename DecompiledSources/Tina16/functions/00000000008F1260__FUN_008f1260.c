/* Ghidra address: 008f1260 */
/* Ghidra symbol: FUN_008f1260 */


char FUN_008f1260(undefined8 param_1,ushort param_2)

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
  uVar2 = (ulonglong)param_2;
  cVar1 = (char)param_2;
  if (uVar2 < 0xa6) {
    if (uVar2 == 0xa5) {
      local_31 = '\\';
      cVar1 = local_31;
      goto code_r0x008f133b;
    }
    if ((uVar2 - 0x20 < 0x3c) || (uVar2 - 0x5d < 0x21)) goto code_r0x008f133b;
  }
  else {
    if (uVar2 == 0x203e) {
      local_31 = '~';
      cVar1 = local_31;
      goto code_r0x008f133b;
    }
    if (uVar2 - 0xff61 < 0x3f) {
      cVar1 = cVar1 + '@';
      goto code_r0x008f133b;
    }
  }
  FUN_0041ddd0(&local_10,PTR_PTR_02003cd8);
  local_30[0] = (uint)param_2;
  local_28 = 0;
  local_20 = L"JIS_X0201";
  local_18 = 0x11;
  uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_10,local_30,1);
  FUN_004134c0(uVar3);
  cVar1 = local_31;
code_r0x008f133b:
  local_31 = cVar1;
  FUN_00414480(&local_10);
  return local_31;
}

