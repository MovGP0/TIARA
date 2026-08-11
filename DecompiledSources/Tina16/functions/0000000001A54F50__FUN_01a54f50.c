/* Ghidra address: 01a54f50 */
/* Ghidra symbol: FUN_01a54f50 */


void FUN_01a54f50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  if (*(longlong *)PTR_DAT_02005498 == 0) {
    uVar1 = FUN_007fc180(&PTR_FUN_014906e8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02005498 = uVar1;
  }
  FUN_008059a0(*(undefined8 *)PTR_DAT_02005498);
  uVar1 = FUN_0065b870(*(undefined8 *)PTR_DAT_02005498);
  thunk_FUN_041775c2(uVar1);
  FUN_00414560(&local_res10,2);
  return;
}

