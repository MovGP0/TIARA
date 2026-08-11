/* Ghidra address: 00c7c270 */
/* Ghidra symbol: FUN_00c7c270 */


undefined4 FUN_00c7c270(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_0043fc00(local_res8[0]);
  FUN_00414480(local_res8);
  return uVar1;
}

