/* Ghidra address: 010dba60 */
/* Ghidra symbol: FUN_010dba60 */


undefined8 FUN_010dba60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_004170c0(&LAB_010dbb14,local_res10[0],1);
  while (cVar1 != '\0') {
    FUN_00416e20(local_res10,cVar1,1);
    cVar1 = FUN_004170c0(&LAB_010dbb14,local_res10[0],1);
  }
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

