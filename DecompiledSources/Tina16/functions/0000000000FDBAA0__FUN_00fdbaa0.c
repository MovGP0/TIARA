/* Ghidra address: 00fdbaa0 */
/* Ghidra symbol: FUN_00fdbaa0 */


bool FUN_00fdbaa0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_00ff1970(*(undefined8 *)(param_1 + 0x1f10),local_res18[0]);
  if (iVar1 == 1) {
    FUN_00fd9a10(*(undefined8 *)(param_1 + 0x1f10),param_2,1);
  }
  FUN_00414480(local_res18);
  return iVar1 == 1;
}

