/* Ghidra address: 015fca00 */
/* Ghidra symbol: FUN_015fca00 */


undefined8 FUN_015fca00(undefined8 param_1,char param_2,longlong param_3)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if ((param_2 == '\x03') && (param_3 != 0)) {
    FUN_015fc650(&local_10);
    FUN_015fc7e0(&local_18,0);
    FUN_01b22d80(&local_20,param_3);
    FUN_00416cd0(param_1,5,local_10,&LAB_015fcb28,local_18,&LAB_015fcb28,local_20);
  }
  else {
    FUN_015fc650(&local_28);
    FUN_015fc7e0(&local_30,0);
    FUN_00416cd0(param_1,3,local_28,&LAB_015fcb28,local_30);
  }
  FUN_00414560(&local_30,5);
  return param_1;
}

