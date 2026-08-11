/* Ghidra address: 01a5a450 */
/* Ghidra symbol: FUN_01a5a450 */


void FUN_01a5a450(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_res10[0]);
  FUN_01a47dd0(param_1,0,1);
  FUN_00414480(local_res10);
  return;
}

