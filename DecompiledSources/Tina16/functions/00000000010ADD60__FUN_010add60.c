/* Ghidra address: 010add60 */
/* Ghidra symbol: FUN_010add60 */


undefined1 FUN_010add60(void)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = 0;
  local_10 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  FUN_005ea670(local_10,0xffffffff80000002);
  FUN_015fecc0(&local_20,L"\\Software",L"\\WinAVR",local_10);
  local_11 = FUN_005ea880(local_10,local_20,0);
  FUN_00410f20(local_10);
  FUN_00414480(&local_20);
  return local_11;
}

