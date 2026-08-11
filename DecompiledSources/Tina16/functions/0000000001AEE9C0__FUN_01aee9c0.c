/* Ghidra address: 01aee9c0 */
/* Ghidra symbol: FUN_01aee9c0 */


undefined8 FUN_01aee9c0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_128 [264];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_0040e780(local_128,param_2,0);
  FUN_004169a0(&local_10,local_128);
  FUN_0040e780(local_128,param_3,0);
  FUN_004169a0(&local_18,local_128);
  FUN_0040e780(local_128,param_4,0);
  FUN_004169a0(&local_20,local_128);
  FUN_00416cd0(param_1,5,local_10,&DAT_01aeeaec,local_18,&DAT_01aeeaec,local_20);
  FUN_00414560(&local_20,3);
  return param_1;
}

