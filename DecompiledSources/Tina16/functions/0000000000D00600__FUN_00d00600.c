/* Ghidra address: 00d00600 */
/* Ghidra symbol: FUN_00d00600 */


char FUN_00d00600(longlong param_1)

{
  char cVar1;
  char local_29;
  undefined8 local_28;
  wchar_t *local_20;
  wchar_t *local_18;
  wchar_t *local_10;
  
  local_28 = 0;
  local_20 = L"application/xml";
  local_18 = L"application/xml-external-parsed-entity";
  local_10 = L"application/xml-dtd";
  local_29 = FUN_008b01a0(*(undefined8 *)(param_1 + 0x70),&local_20,2);
  if (local_29 == '\0') {
    cVar1 = FUN_008b0130(*(undefined8 *)(param_1 + 0x70),L"text");
    local_29 = cVar1 == '\0';
    if ((bool)local_29) {
      FUN_008b0240(&local_28,*(undefined8 *)(param_1 + 0x70));
      local_29 = FUN_00879100(local_28,L"+xml");
    }
  }
  FUN_00414480(&local_28);
  return local_29;
}

