/* Ghidra address: 00eadc00 */
/* Ghidra symbol: FUN_00eadc00 */


undefined8 FUN_00eadc00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_res8[0]);
  FUN_00414480(local_res8);
  return uVar1;
}

