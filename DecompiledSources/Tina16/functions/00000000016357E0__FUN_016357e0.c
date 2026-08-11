/* Ghidra address: 016357e0 */
/* Ghidra symbol: FUN_016357e0 */


void FUN_016357e0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043f750(&local_20,param_2);
  FUN_00416cd0(&local_18,5,&DAT_0163591c,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x638),
               &LAB_0163592c,local_res18[0],local_20);
  if (9999 < param_2) {
    FUN_01613110(0);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x98) < param_2) {
    *(int *)(*(longlong *)(param_1 + 0x98) + 0x98) = param_2;
  }
  FUN_01635560(param_1,param_2,local_18);
  FUN_00414560(&local_20,3);
  FUN_00414480(local_res18);
  return;
}

