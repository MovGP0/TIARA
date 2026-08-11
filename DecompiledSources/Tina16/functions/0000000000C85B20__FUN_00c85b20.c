/* Ghidra address: 00c85b20 */
/* Ghidra symbol: FUN_00c85b20 */


undefined4 FUN_00c85b20(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 local_res18 [2];
  undefined4 local_c;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_4 == '\0') {
    local_c = FUN_00c84eb0(*(undefined8 *)(param_1 + 0x30),param_2,local_res18[0]);
  }
  else {
    local_c = FUN_00c84eb0(*(undefined8 *)(param_1 + 8),param_2,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return local_c;
}

