/* Ghidra address: 00e078a0 */
/* Ghidra symbol: FUN_00e078a0 */


void FUN_00e078a0(undefined8 param_1)

{
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00416ba0(&local_10,L"LexLib: ",local_res8[0]);
  FUN_00e07840(local_10);
  FUN_00414140(1);
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return;
}

