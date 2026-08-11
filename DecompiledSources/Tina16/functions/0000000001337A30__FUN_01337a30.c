/* Ghidra address: 01337a30 */
/* Ghidra symbol: FUN_01337a30 */


void FUN_01337a30(void)

{
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  DAT_02107860 = DAT_02107860 + -1;
  if (DAT_02107860 == -1) {
    FUN_00413900(&DAT_01337970);
    DAT_02107868 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*DAT_02107868 + 0x78))(DAT_02107868,0);
    FUN_0041ddd0(&local_10,&PTR_PTR_013354a8);
    (**(code **)(*DAT_02107868 + 0x78))(DAT_02107868,local_10);
    FUN_0041ddd0(&local_18,&PTR_PTR_013354b8);
    (**(code **)(*DAT_02107868 + 0x78))(DAT_02107868,local_18);
    FUN_0041ddd0(&local_20,&LAB_013354c8);
    (**(code **)(*DAT_02107868 + 0x78))(DAT_02107868,local_20);
  }
  FUN_00414560(&local_20,3);
  return;
}

