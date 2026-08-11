/* Ghidra address: 010b9520 */
/* Ghidra symbol: FUN_010b9520 */


void FUN_010b9520(longlong param_1)

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
  FUN_00442f70(&local_38,&DAT_010b9680,&local_48,0);
  FUN_00416ba0(&local_10,L"Image_",local_38);
  FUN_00414480(&local_18);
  local_20 = FUN_00448ed0();
  FUN_0044a3a0(&local_18,L"yyyymmddhhnnss",local_20,PTR_DAT_02004830);
  FUN_00416ba0(param_1 + 0x188,local_10,local_18);
  FUN_00414480(&local_10);
  FUN_00414480(&local_18);
  FUN_00414480(&local_38);
  FUN_00414480(&local_18);
  return;
}

