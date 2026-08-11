/* Ghidra address: 01b21480 */
/* Ghidra symbol: FUN_01b21480 */


undefined8 FUN_01b21480(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(uVar1,local_res8[0]);
  FUN_00414480(local_res8);
  return uVar1;
}

