/* Ghidra address: 01cc1400 */
/* Ghidra symbol: FUN_01cc1400 */


undefined8 FUN_01cc1400(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  bVar1 = *(byte *)(param_1 + 0x3a);
  if (bVar1 < 4) {
    if (bVar1 == 3) {
      FUN_00de8980(param_2,0x118,local_res18[0]);
    }
    else if (bVar1 == 0) {
      FUN_0041ddd0(param_2,&PTR_PTR_01cbf660);
    }
    else if (bVar1 == 1) {
      FUN_00de8980(param_2,0x116,local_res18[0]);
    }
    else if (bVar1 == 2) {
      FUN_00de8980(param_2,0x117,local_res18[0]);
    }
  }
  else if (bVar1 == 4) {
    FUN_00de8980(param_2,0x119,local_res18[0]);
  }
  else if (bVar1 == 9) {
    FUN_0041ddd0(param_2,&PTR_PTR_01cbf650);
  }
  FUN_00414480(local_res18);
  return param_2;
}

