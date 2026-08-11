/* Ghidra address: 015bfa50 */
/* Ghidra symbol: FUN_015bfa50 */


char FUN_015bfa50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414630(param_1);
  cVar1 = FUN_00711830(local_res8);
  if (cVar1 == '\0') {
    FUN_00415f40(local_res10,local_res8);
  }
  else {
    FUN_0041d9e0(local_res10,local_res8);
  }
  FUN_004144d0(&local_res8);
  return cVar1;
}

