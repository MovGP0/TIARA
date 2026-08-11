/* Ghidra address: 01b04ef0 */
/* Ghidra symbol: FUN_01b04ef0 */


void FUN_01b04ef0(undefined2 param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  longlong local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00de8980(&local_10,param_1,local_res18);
  if (local_res20 != 0) {
    FUN_00416cd0(&local_10,4,local_10,&DAT_01b04fe8,local_res20,&DAT_01b04ffc);
  }
  uVar1 = FUN_0044d9f0(&PTR_FUN_01af2c90,1,local_10,param_2);
  FUN_004134c0(uVar1);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res18,2);
  return;
}

