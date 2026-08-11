/* Ghidra address: 01430b90 */
/* Ghidra symbol: FUN_01430b90 */


undefined8 * FUN_01430b90(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043ea00(&local_10,local_res18[0]);
  FUN_0043e130(param_2,local_10);
  while( true ) {
    iVar2 = FUN_004170c0(&LAB_01430c74,*param_2,1);
    if (iVar2 == 0) break;
    uVar1 = FUN_004170c0(&LAB_01430c74,*param_2,1);
    FUN_00416e20(param_2,uVar1,1);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_2;
}

