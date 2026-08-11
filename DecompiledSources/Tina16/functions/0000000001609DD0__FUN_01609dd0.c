/* Ghidra address: 01609dd0 */
/* Ghidra symbol: FUN_01609dd0 */


undefined8 FUN_01609dd0(undefined8 param_1,undefined4 *param_2,char param_3)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  if (param_3 == '\0') {
    FUN_0043f750(&local_30,*param_2);
    FUN_0043f750(&local_38,param_2[1]);
    FUN_0043f750(&local_40,param_2[2]);
    FUN_0043fbc0(&local_48,param_2[3],8);
    FUN_00416cd0(param_1,7,local_30,&LAB_01609fd8,local_38,&LAB_01609fd8,local_40,&LAB_01609fd8,
                 local_48);
  }
  else {
    FUN_0043f750(&local_10,*param_2);
    FUN_0043f750(&local_18,param_2[1]);
    FUN_0043f750(&local_20,param_2[4]);
    FUN_0043f750(&local_28,param_2[5]);
    FUN_00416cd0(param_1,7,local_10,&LAB_01609fd8,local_18,&LAB_01609fd8,local_20,&LAB_01609fd8,
                 local_28);
  }
  FUN_00414560(&local_48,8);
  return param_1;
}

