/* Ghidra address: 015f9d10 */
/* Ghidra symbol: FUN_015f9d10 */


undefined8 FUN_015f9d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420 [2];
  undefined1 local_40a [513];
  undefined1 local_209 [513];
  
  local_438 = 0;
  local_448 = 0;
  local_440 = 0;
  local_420[0] = 0;
  local_430 = 0;
  local_428 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_3);
  FUN_00414630(local_res20);
  FUN_00416880(&local_428,local_res18);
  FUN_0043e1a0(local_420,local_428);
  FUN_00415dd0(&local_430,local_420[0],0);
  FUN_004425e0(local_209,local_430);
  FUN_00416880(&local_440,local_res20);
  FUN_0043e1a0(&local_438,local_440);
  FUN_00415dd0(&local_448,local_438,0);
  FUN_004425e0(local_40a,local_448);
  uVar1 = _E_SearchEntity(param_1,local_209,local_40a);
  FUN_004144d0(&local_448);
  FUN_00414560(&local_440,2);
  FUN_004144d0(&local_430);
  FUN_00414560(&local_428,2);
  FUN_00414590(&local_res18,2);
  return uVar1;
}

