/* Ghidra address: 0044f980 */
/* Ghidra symbol: FUN_0044f980 */


bool FUN_0044f980(undefined8 param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong local_res10 [3];
  bool local_19;
  undefined8 local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] == 0) {
    FUN_004423c0(local_res10);
  }
  while (local_res10[0] != 0) {
    cVar1 = FUN_00440b00(local_res10[0],1);
    if (cVar1 != '\0') break;
    FUN_0044f8b0(&local_18,local_res10[0]);
    FUN_00441640(&local_10,local_18);
    FUN_00414b50(local_res10,local_10);
  }
  if (local_res10[0] == 0) {
    local_19 = false;
  }
  else {
    uVar2 = FUN_00440380(local_res10[0]);
    local_19 = (uVar2 & 1) != 0;
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return local_19;
}

