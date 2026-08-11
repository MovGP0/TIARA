/* Ghidra address: 00ca5510 */
/* Ghidra symbol: FUN_00ca5510 */


undefined4 FUN_00ca5510(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00415dd0(&local_10,local_res10[0],0);
  uVar2 = FUN_00415ab0(local_10);
  uVar1 = (*DAT_01eaa068)(param_1,0x37,0,uVar2);
  FUN_004144d0(&local_10);
  FUN_00414480(local_res10);
  return uVar1;
}

