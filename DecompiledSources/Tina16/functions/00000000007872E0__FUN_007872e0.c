/* Ghidra address: 007872e0 */
/* Ghidra symbol: FUN_007872e0 */


void FUN_007872e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e1a0(&local_10,local_res10[0]);
  cVar1 = FUN_00790560(DAT_02012538,local_10);
  if (cVar1 != '\0') {
    FUN_0043e1a0(&local_18,local_res10[0]);
    FUN_00790200(DAT_02012538,local_18);
  }
  FUN_0043e1a0(&local_20,local_res10[0]);
  FUN_00790170(DAT_02012538,local_20,param_3);
  FUN_00414560(&local_20,3);
  FUN_00414480(local_res10);
  return;
}

