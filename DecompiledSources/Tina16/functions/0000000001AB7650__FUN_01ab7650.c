/* Ghidra address: 01ab7650 */
/* Ghidra symbol: FUN_01ab7650 */


undefined8 FUN_01ab7650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00f07010(param_2,local_res18[0],*(undefined1 *)(param_1 + 0xd8));
  FUN_00414480(local_res18);
  return param_2;
}

