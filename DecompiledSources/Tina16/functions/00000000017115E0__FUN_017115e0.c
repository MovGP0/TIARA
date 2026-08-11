/* Ghidra address: 017115e0 */
/* Ghidra symbol: FUN_017115e0 */


void FUN_017115e0(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_488 [40];
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined1 *local_440;
  undefined1 local_425;
  undefined1 local_424 [522];
  undefined1 local_21a [522];
  undefined8 local_10;
  
  local_440 = auStack_488;
  local_460 = 0;
  local_458 = 0;
  local_450 = 0;
  local_448 = 0;
  local_425 = 1;
  FUN_00416ba0(&local_448,*(undefined8 *)(param_1 + 0xd8),&DAT_01711778);
  local_10 = FUN_0170a000(&DAT_017094c8,1,local_448,param_2);
  FUN_00410f20(local_10);
  local_425 = 0;
  FUN_00416ba0(&local_450,*(undefined8 *)(param_1 + 0xd8),L"\\SPMACROS.IND");
  FUN_00442620(local_21a,local_450);
  FUN_00416ba0(&local_458,*(undefined8 *)(param_1 + 0xd0),L"\\SPMACROS.IND");
  FUN_00442620(local_424,local_458);
  FUN_00427810(local_21a,local_424,0);
  FUN_00416ba0(&local_460,*(undefined8 *)(param_1 + 0xd8),L"\\SPMACROS.IND");
  FUN_004412f0(local_460);
  FUN_01711430(param_1);
  FUN_00414560(&local_460,4);
  return;
}

