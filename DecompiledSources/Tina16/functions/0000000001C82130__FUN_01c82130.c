/* Ghidra address: 01c82130 */
/* Ghidra symbol: FUN_01c82130 */


int FUN_01c82130(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  int local_1c;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar1 = FUN_00416740(local_res18[0]);
  lVar2 = FUN_004429a0(lVar1,param_2);
  if (lVar2 == 0) {
    local_1c = 0;
  }
  else {
    local_1c = (int)((lVar2 - lVar1) / 2) + 1;
  }
  FUN_00414480(local_res18);
  return local_1c;
}

