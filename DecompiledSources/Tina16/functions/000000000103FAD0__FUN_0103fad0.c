/* Ghidra address: 0103fad0 */
/* Ghidra symbol: FUN_0103fad0 */


bool FUN_0103fad0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_01049b30(*(undefined8 *)(param_1 + 0x1150),local_res18[0]);
  FUN_00414480(local_res18);
  return iVar1 == 1;
}

