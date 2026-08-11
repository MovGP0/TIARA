/* Ghidra address: 01c99b80 */
/* Ghidra symbol: FUN_01c99b80 */


void FUN_01c99b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar1 = FUN_019a4600();
  FUN_019af590(uVar1,local_res18[0]);
  uVar1 = FUN_007fc180(&PTR_FUN_01099c58,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02005738 = uVar1;
  *(undefined8 *)PTR_DAT_02004c68 = *(undefined8 *)PTR_DAT_02005738;
  uVar1 = FUN_0065b870(param_1);
  uVar2 = FUN_019a4600();
  FUN_0109cf80(*(undefined8 *)PTR_DAT_02005738,uVar1,param_2,uVar2,local_res18[0],param_4,param_5);
  FUN_008059a0(*(undefined8 *)PTR_DAT_02005738);
  *(undefined4 *)PTR_DAT_02003570 = 4;
  FUN_0109d230(*(undefined8 *)PTR_DAT_02005738);
  FUN_00414480(local_res18);
  return;
}

