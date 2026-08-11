/* Ghidra address: 00cf0d70 */
/* Ghidra symbol: FUN_00cf0d70 */


undefined8 FUN_00cf0d70(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  FUN_00414480(&local_10);
  local_18 = FUN_00448ed0();
  FUN_0044a3a0(&local_10,L"mmddyyhhnnsszzz",local_18,PTR_DAT_02004830);
  FUN_00416ba0(param_2,L"--------",local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_2;
}

