/* Ghidra address: 01aeeaf0 */
/* Ghidra symbol: FUN_01aeeaf0 */


undefined8
FUN_01aeeaf0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 local_138 [256];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_0040e780(local_138,param_2,0);
  FUN_004169a0(&local_10,local_138);
  FUN_0040e780(local_138,param_3,0);
  FUN_004169a0(&local_18,local_138);
  FUN_0040e780(local_138,param_4,0);
  FUN_004169a0(&local_20,local_138);
  FUN_0040e780(local_138,param_5,0);
  FUN_004169a0(&local_28,local_138);
  FUN_0040e780(local_138,param_6,0);
  FUN_004169a0(&local_30,local_138);
  FUN_0040e780(local_138,param_7,0);
  FUN_004169a0(&local_38,local_138);
  FUN_00416cd0(param_1,0xb,local_10,&DAT_01aeed1c,local_18,&DAT_01aeed1c,local_20,&DAT_01aeed1c,
               local_28,&DAT_01aeed1c,local_30,&DAT_01aeed1c,local_38);
  FUN_00414560(&local_38,6);
  return param_1;
}

