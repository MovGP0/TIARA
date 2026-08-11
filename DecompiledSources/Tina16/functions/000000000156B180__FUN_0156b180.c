/* Ghidra address: 0156b180 */
/* Ghidra symbol: FUN_0156b180 */


undefined8
FUN_0156b180(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
            undefined4 param_5,char param_6)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_004169a0(&local_10,param_3 + 0x2d8);
  FUN_017ff4a0(param_3,&local_18);
  FUN_00415dd0(&local_28,local_10,0);
  FUN_015f1890(&local_20,local_28,param_4,param_5,0);
  FUN_00416880(&local_10,local_20);
  if (local_10 == 0) {
    FUN_01d43440(&local_10,param_5);
  }
  if (param_6 == '\0') {
    FUN_00416cd0(param_2,3,local_10,&DAT_0156b2cc,local_18);
  }
  else {
    FUN_00414ad0(param_2,local_10);
  }
  FUN_00414590(&local_28,2);
  FUN_00414560(&local_18,2);
  return param_2;
}

