/* Ghidra address: 013a5020 */
/* Ghidra symbol: FUN_013a5020 */


void FUN_013a5020(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  FUN_0043f750(local_20,param_2);
  FUN_0043f750(&local_28,param_3);
  FUN_0043f750(&local_30,param_4);
  FUN_00416cd0(&local_10,7,L"[UserIntervention(",local_20[0],&DAT_013a5180,local_28,&DAT_013a5180,
               local_30,&LAB_013a5190);
  FUN_013a40d0(param_1,&local_10);
  FUN_00414560(&local_30,3);
  FUN_00414480(&local_10);
  return;
}

