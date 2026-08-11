/* Ghidra address: 0123be30 */
/* Ghidra symbol: FUN_0123be30 */


void FUN_0123be30(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_18 = 0;
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 0x40),L"filter_log.txt");
  FUN_00416ba0(&local_18,*(undefined8 *)(param_1 + 0x40),L"filterw.cir");
  FUN_0123bf30(param_1);
  FUN_00414560(&local_18,2);
  return;
}

