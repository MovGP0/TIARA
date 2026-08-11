/* Ghidra address: 00ee2c30 */
/* Ghidra symbol: FUN_00ee2c30 */


undefined8 FUN_00ee2c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  undefined1 local_808 [2048];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar2 = FUN_00416740(local_res18[0]);
  sVar1 = thunk_FUN_041c08a4(uVar2,local_808,0x800);
  if (sVar1 == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00416830(param_2,local_808,0x400);
  }
  FUN_00414480(local_res18);
  return param_2;
}

