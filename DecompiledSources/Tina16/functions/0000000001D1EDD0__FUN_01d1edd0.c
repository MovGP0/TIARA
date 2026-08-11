/* Ghidra address: 01d1edd0 */
/* Ghidra symbol: FUN_01d1edd0 */


undefined8 * FUN_01d1edd0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414ad0(param_2,local_res18[0]);
  while( true ) {
    iVar2 = FUN_004170c0(&LAB_01d1eeb4,*param_2,1);
    if (iVar2 < 1) break;
    uVar1 = FUN_004170c0(&LAB_01d1eeb4,*param_2,1);
    FUN_00416ea0(&DAT_01d1eea4,param_2,uVar1);
    uVar1 = FUN_004170c0(&LAB_01d1eeb4,*param_2,1);
    FUN_00416e20(param_2,uVar1,1);
  }
  FUN_00414480(local_res18);
  return param_2;
}

