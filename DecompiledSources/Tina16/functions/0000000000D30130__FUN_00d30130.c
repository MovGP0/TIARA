/* Ghidra address: 00d30130 */
/* Ghidra symbol: FUN_00d30130 */


undefined8 FUN_00d30130(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_10 = 0;
  uVar2 = thunk_FUN_0417695f();
  FUN_00d300c0(&local_10,uVar2,0);
  FUN_00d2fc90(local_20,local_10);
  FUN_00414c70(&local_10,local_20[0]);
  FUN_00416880(&local_30,local_10);
  iVar1 = FUN_004170c0(&LAB_00d30240,local_30,1);
  FUN_00415ad0(&local_28,local_10,iVar1 + 1,0xff);
  FUN_00d2fc90(param_1,local_28);
  FUN_00414480(&local_30);
  FUN_00414590(&local_28,2);
  FUN_004144d0(&local_10);
  return param_1;
}

