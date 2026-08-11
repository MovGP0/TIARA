/* Ghidra address: 00c99940 */
/* Ghidra symbol: FUN_00c99940 */


longlong FUN_00c99940(void)

{
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00416ba0(&local_10,DAT_01eaac78,L"ssleay32.dll");
  local_20 = FUN_00452dc0(local_10,0x8000);
  if (local_20 == 0) {
    FUN_00416ba0(&local_18,DAT_01eaac78,L"libssl32.dll");
    local_20 = FUN_00452dc0(local_18,0x8000);
  }
  FUN_00414560(&local_18,2);
  return local_20;
}

