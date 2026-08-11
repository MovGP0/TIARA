/* Ghidra address: 015653d0 */
/* Ghidra symbol: FUN_015653d0 */


undefined8 FUN_015653d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_004414c0(param_2,*(undefined8 *)(param_1 + 0x768),local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

