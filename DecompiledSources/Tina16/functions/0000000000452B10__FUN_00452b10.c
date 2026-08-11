/* Ghidra address: 00452b10 */
/* Ghidra symbol: FUN_00452b10 */


LCID FUN_00452b10(undefined8 param_1)

{
  char cVar1;
  LPCWSTR lpName;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  LCID local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  cVar1 = FUN_0045cdf0(6,0);
  if (cVar1 == '\0') {
    uVar2 = FUN_00452d90();
    local_14 = FUN_00452be0(uVar2,local_res8[0]);
  }
  else {
    FUN_00456970(local_res8,&local_10,0x5f,0x2d);
    lpName = (LPCWSTR)FUN_00416740(local_10);
    local_14 = LocaleNameToLCID(lpName,0);
  }
  FUN_00414480(&local_10);
  return local_14;
}

