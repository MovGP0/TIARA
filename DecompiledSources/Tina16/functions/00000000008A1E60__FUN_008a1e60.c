/* Ghidra address: 008a1e60 */
/* Ghidra symbol: FUN_008a1e60 */


double FUN_008a1e60(undefined8 param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  undefined8 local_res8 [4];
  double local_20 [3];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  cVar1 = FUN_0089f510(local_res8,local_20);
  if (cVar1 != '\0') {
    dVar2 = (double)FUN_008a1b70(local_res8[0]);
    dVar3 = (double)FUN_008779a0();
    local_20[0] = (local_20[0] - dVar2) + dVar3;
  }
  FUN_00414480(local_res8);
  return local_20[0];
}

