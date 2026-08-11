/* Ghidra address: 017ff310 */
/* Ghidra symbol: FUN_017ff310 */


void FUN_017ff310(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_18 = 0;
  local_10 = 0;
  local_40 = 5;
  local_48 = param_1;
  FUN_00442f70(&local_38,&DAT_017ff468,&local_48,0);
  FUN_00416ba0(&local_10,&PTR_u_claFloralwhite_017ff454,local_38);
  FUN_00414480(&local_18);
  local_20 = FUN_00448ed0();
  FUN_0044a3a0(&local_18,L"yyyymmddhhnnss",local_20,PTR_DAT_02004830);
  FUN_00416ba0(param_1 + 0x58,local_10,local_18);
  FUN_00414480(&local_10);
  FUN_00414480(&local_18);
  FUN_00414480(&local_38);
  FUN_00414480(&local_18);
  return;
}

