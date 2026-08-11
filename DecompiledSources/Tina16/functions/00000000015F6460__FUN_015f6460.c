/* Ghidra address: 015f6460 */
/* Ghidra symbol: FUN_015f6460 */


bool FUN_015f6460(undefined8 param_1)

{
  char cVar1;
  undefined8 local_res8 [4];
  bool local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_00440a20(local_res8[0],1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_10,L"File not found: ",local_res8[0]);
    FUN_016fd940(local_10);
  }
  local_11 = cVar1 != '\0';
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return local_11;
}

