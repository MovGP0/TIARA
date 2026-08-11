/* Ghidra address: 01d030e0 */
/* Ghidra symbol: FUN_01d030e0 */


undefined8 FUN_01d030e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01d3a8c0(*(undefined8 *)PTR_DAT_020036c8,param_2,*(undefined2 *)(param_1 + 0xba),
               local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

