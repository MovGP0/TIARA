/* Ghidra address: 00d8d7c0 */
/* Ghidra symbol: FUN_00d8d7c0 */


undefined8 FUN_00d8d7c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar1 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),local_res18[0]);
  if (lVar1 == 0) {
    FUN_00d82fc0(param_1,param_2,local_res18[0]);
  }
  else {
    lVar1 = FUN_00d77610(lVar1,L"Bounds");
    if (lVar1 == 0) {
      FUN_00d82fc0(param_1,param_2,local_res18[0]);
    }
    else {
      FUN_00d77cb0(lVar1,param_2);
    }
  }
  FUN_00414480(local_res18);
  return param_2;
}

