/* Ghidra address: 0189a020 */
/* Ghidra symbol: FUN_0189a020 */


longlong FUN_0189a020(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                     undefined1 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_0189a0e0(param_1,0);
  lVar2 = FUN_004113f0(uVar1,&PTR_FUN_018965d0);
  *(undefined8 *)(lVar2 + 0x18) = param_4;
  *(undefined4 *)(lVar2 + 0x31c) = param_2;
  FUN_01899fd0(lVar2,param_5);
  *(undefined4 *)(lVar2 + 0x324) = param_6;
  FUN_00414ad0(lVar2 + 0xf0,local_res18[0]);
  if (local_res18[0] != 0) {
    FUN_0064dfb0(lVar2,1);
  }
  FUN_00414480(local_res18);
  return lVar2;
}

