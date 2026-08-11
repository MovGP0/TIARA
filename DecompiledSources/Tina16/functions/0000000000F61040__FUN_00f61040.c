/* Ghidra address: 00f61040 */
/* Ghidra symbol: FUN_00f61040 */


undefined8 FUN_00f61040(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined8 local_20 [2];
  undefined2 *local_10;
  
  local_20[0] = 0;
  local_10 = (undefined2 *)0x0;
  if (param_2 < 10) {
    FUN_0043f750(param_1,param_2);
  }
  else {
    FUN_0043fba0(local_20,param_2,2);
    FUN_00416ba0(&local_10,local_20[0],&DAT_00f61124);
    cVar1 = FUN_01b215c0(*local_10,1);
    if (cVar1 == '\0') {
      FUN_00414ad0(param_1,local_10);
    }
    else {
      FUN_00416ba0(param_1,&LAB_00f61134,local_10);
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_1;
}

