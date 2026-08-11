/* Ghidra address: 0198aa40 */
/* Ghidra symbol: FUN_0198aa40 */


undefined8 FUN_0198aa40(undefined8 *param_1,undefined8 param_2)

{
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
  FUN_00415980(&local_18,4,*param_1,&DAT_0198ab90,param_1[1],&DAT_0198ab90);
  FUN_00416880(&local_20,local_18);
  FUN_0043f750(&local_28,*(undefined4 *)(param_1 + 2));
  FUN_00b8fd60(&local_30,param_1[3],6,0,1);
  FUN_00416cd0(&local_10,4,local_20,local_28,&LAB_0198aba0,local_30);
  FUN_00415dd0(param_2,local_10,0);
  FUN_00414560(&local_30,3);
  FUN_004144d0(&local_18);
  FUN_00414480(&local_10);
  return param_2;
}

