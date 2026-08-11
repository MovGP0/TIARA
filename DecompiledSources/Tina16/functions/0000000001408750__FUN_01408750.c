/* Ghidra address: 01408750 */
/* Ghidra symbol: FUN_01408750 */


undefined8
FUN_01408750(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  undefined8 local_78;
  undefined1 local_70 [96];
  undefined8 local_10;
  
  local_78 = 0;
  local_10 = 0;
  if (param_4 == 0) {
    FUN_01aa0f40(local_70,param_2,param_3);
    FUN_004169a0(param_1,local_70);
  }
  else if (param_4 == 1) {
    FUN_01aa0d10(local_70,param_2,param_3,0);
    FUN_004169a0(&local_10,local_70);
    if ((param_5 & 1) != 0) {
      FUN_014086c0(&local_78,local_10);
      FUN_00414b50(&local_10,local_78);
    }
    FUN_00414ad0(param_1,local_10);
  }
  else if (param_4 == 2) {
    FUN_0043f780(param_1,param_2);
  }
  FUN_00414480(&local_78);
  FUN_00414480(&local_10);
  return param_1;
}

