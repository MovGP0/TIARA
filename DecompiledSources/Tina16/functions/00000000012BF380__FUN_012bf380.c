/* Ghidra address: 012bf380 */
/* Ghidra symbol: FUN_012bf380 */


undefined1 FUN_012bf380(void)

{
  undefined1 uVar1;
  undefined1 auStack_358 [32];
  wchar_t *local_338;
  undefined1 local_321;
  undefined8 local_320;
  undefined8 local_318;
  
  local_320 = 0;
  local_318 = 0;
  uVar1 = *PTR_DAT_02002ce0;
  *PTR_DAT_02002ce0 = 0;
  local_338 = L"START.CFG";
  FUN_00416cd0(&local_320,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_012bf4c8);
  FUN_012bf1e0(auStack_358,local_320);
  *PTR_DAT_02002ce0 = DAT_01f2ff00;
  if (*PTR_DAT_02002ce0 == '\0') {
    if (*PTR_DAT_02003d20 == '\0') {
      if (*PTR_DAT_020023b0 == '\0') {
        *PTR_DAT_02002ce0 = DAT_01f2fefc == '\0';
      }
      else {
        *PTR_DAT_02002ce0 = DAT_01f2fefe == '\0';
      }
    }
    else {
      *PTR_DAT_02002ce0 = DAT_01f2fefd == '\0';
    }
  }
  local_321 = *PTR_DAT_02002ce0 == '\0';
  *PTR_DAT_02002ce0 = uVar1;
  FUN_00414560(&local_320,2);
  return local_321;
}

