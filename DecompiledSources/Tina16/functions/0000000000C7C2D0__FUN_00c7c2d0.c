/* Ghidra address: 00c7c2d0 */
/* Ghidra symbol: FUN_00c7c2d0 */


undefined4 FUN_00c7c2d0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 local_res8 [4];
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_00c7c1d0(local_res8[0],&local_c);
  if (cVar1 == '\0') {
    local_c = param_2;
  }
  FUN_00414480(local_res8);
  return local_c;
}

