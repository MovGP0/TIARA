/* Ghidra address: 00a27270 */
/* Ghidra symbol: FUN_00a27270 */


void FUN_00a27270(void)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  DAT_020133b0 = DAT_020133b0 + -1;
  if (DAT_020133b0 == -1) {
    FUN_00a0be40();
    FUN_0041ddd0(&local_10,PTR_PTR_020014e0);
    FUN_00604dd0(&DAT_005f7500,L"jpeg",local_10,&PTR_FUN_00a09250);
    FUN_0041ddd0(&local_18,PTR_PTR_020014e0);
    FUN_00604dd0(&DAT_005f7500,&DAT_00a27350,local_18,&PTR_FUN_00a09250);
  }
  FUN_00414560(&local_18,2);
  return;
}

