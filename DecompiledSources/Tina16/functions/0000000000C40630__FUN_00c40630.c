/* Ghidra address: 00c40630 */
/* Ghidra symbol: FUN_00c40630 */


bool FUN_00c40630(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong local_res18 [2];
  bool local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (local_res18[0] == 0) {
    local_21 = true;
  }
  else {
    lVar2 = FUN_004aeac0(param_1,param_2);
    FUN_0043e130(local_20,local_res18[0]);
    iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x20),local_20[0]);
    local_21 = iVar1 == 0;
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return local_21;
}

