/* Ghidra address: 007873c0 */
/* Ghidra symbol: FUN_007873c0 */


void FUN_007873c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined8 local_10;
  
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
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return;
}

