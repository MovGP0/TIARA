/* Ghidra address: 00de8a20 */
/* Ghidra symbol: FUN_00de8a20 */


undefined8
FUN_00de8a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  uVar1 = FUN_00b89270();
  FUN_00416cd0(&local_28,3,local_res10,&DAT_00de8b4c,local_res18);
  FUN_00b8e650(uVar1,local_20,local_28,param_5);
  FUN_004168e0(param_1,local_20[0]);
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res10,4);
  return param_1;
}

