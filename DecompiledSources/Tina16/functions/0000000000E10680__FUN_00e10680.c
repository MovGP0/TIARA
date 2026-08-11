/* Ghidra address: 00e10680 */
/* Ghidra symbol: FUN_00e10680 */


undefined8 FUN_00e10680(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00e0e5d0(*(undefined8 *)(param_1 + 0x828),param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

