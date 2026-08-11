/* Ghidra address: 01d03590 */
/* Ghidra symbol: FUN_01d03590 */


bool FUN_01d03590(undefined8 param_1)

{
  undefined1 local_190 [256];
  undefined8 local_90;
  undefined1 local_81;
  byte local_80;
  
  local_90 = 0;
  FUN_01d03060(param_1,&local_90,*(undefined8 *)PTR_DAT_02001f18);
  FUN_00416910(local_190,local_90,0xff);
  FUN_00415020(&local_81,local_190,0x78);
  FUN_00414480(&local_90);
  return 0x40 < local_80;
}

