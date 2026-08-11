/* Ghidra address: 012ea640 */
/* Ghidra symbol: FUN_012ea640 */


void FUN_012ea640(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_2 == 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_res18[0]);
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_res18[0]);
  }
  FUN_00414480(local_res18);
  return;
}

