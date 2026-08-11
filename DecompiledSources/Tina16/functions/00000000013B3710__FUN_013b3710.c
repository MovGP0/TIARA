/* Ghidra address: 013b3710 */
/* Ghidra symbol: FUN_013b3710 */


void FUN_013b3710(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  undefined1 local_3a8 [256];
  undefined1 local_2a8 [640];
  undefined4 local_28;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00416910(local_3a8,local_res18[0],0xff);
  lVar1 = FUN_013b3e30(param_1,local_3a8,3);
  if (lVar1 != 0) {
    FUN_013b49d0(param_1,lVar1,local_2a8);
    local_28 = param_2;
    FUN_013b4b10(param_1,lVar1,local_2a8);
  }
  FUN_00414480(local_res18);
  return;
}

