/* Ghidra address: 0132c080 */
/* Ghidra symbol: FUN_0132c080 */


undefined4 FUN_0132c080(undefined8 param_1,undefined4 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0132bfd0(local_res8[0],param_2);
  FUN_00414480(local_res8);
  return param_2;
}

