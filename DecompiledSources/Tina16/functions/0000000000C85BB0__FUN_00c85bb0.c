/* Ghidra address: 00c85bb0 */
/* Ghidra symbol: FUN_00c85bb0 */


undefined8 FUN_00c85bb0(longlong param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_4 == '\0') {
    local_10 = FUN_00c84f90(*(undefined8 *)(param_1 + 0x30),param_2,local_res18[0]);
  }
  else {
    local_10 = FUN_00c84f90(*(undefined8 *)(param_1 + 8),param_2,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return local_10;
}

