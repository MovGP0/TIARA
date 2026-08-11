/* Ghidra address: 01aee850 */
/* Ghidra symbol: FUN_01aee850 */


undefined8
FUN_01aee850(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_0040e780(local_128,param_2,0);
  FUN_004169a0(&local_10,local_128);
  FUN_0040e780(local_128,param_3,0);
  FUN_004169a0(&local_18,local_128);
  FUN_0040e780(local_128,param_4,0);
  FUN_004169a0(&local_20,local_128);
  FUN_0040e780(local_128,param_5,0);
  FUN_004169a0(&local_28,local_128);
  FUN_00416cd0(param_1,7,local_10,&DAT_01aee9bc,local_18,&DAT_01aee9bc,local_20,&DAT_01aee9bc,
               local_28);
  FUN_00414560(&local_28,4);
  return param_1;
}

