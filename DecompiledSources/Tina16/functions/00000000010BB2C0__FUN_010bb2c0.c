/* Ghidra address: 010bb2c0 */
/* Ghidra symbol: FUN_010bb2c0 */


longlong FUN_010bb2c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     longlong param_5)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  longlong local_30;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  local_30 = param_1;
  if (lVar1 != -1) {
    FUN_01cf04c0(lVar1,0);
    if (param_5 == 0) {
      FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_02005010,L"\\TitleBlk_WB.tbt");
      FUN_010bb830(lVar1,local_20[0]);
    }
    else {
      (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x10))(*(longlong **)(lVar1 + 0x30),param_5);
    }
    *(undefined4 *)(lVar1 + 0xc) = param_3;
    *(undefined4 *)(lVar1 + 0x10) = param_4;
    FUN_00414480(local_20);
    local_30 = lVar1;
  }
  return local_30;
}

