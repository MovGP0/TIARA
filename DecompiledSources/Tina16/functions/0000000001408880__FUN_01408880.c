/* Ghidra address: 01408880 */
/* Ghidra symbol: FUN_01408880 */


undefined4 FUN_01408880(undefined8 param_1,int param_2)

{
  undefined8 local_res8 [4];
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (param_2 == 0) {
    local_c = FUN_01aa10d0(local_res8[0]);
  }
  else if (param_2 == 1) {
    local_c = FUN_01aa1170(local_res8[0]);
  }
  else if (param_2 == 2) {
    local_c = FUN_0043fc00(local_res8[0]);
  }
  FUN_00414480(local_res8);
  return local_c;
}

