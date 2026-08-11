/* Ghidra address: 019c1cb0 */
/* Ghidra symbol: FUN_019c1cb0 */


undefined8 FUN_019c1cb0(undefined8 param_1,undefined8 *param_2,int param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  if (param_3 == 3) {
    FUN_019c1af0(local_20,param_2[1]);
    FUN_019c1af0(&local_28,*param_2);
    FUN_00416cd0(param_1,4,L"Simplified:",local_20[0],L"  Raw :",local_28);
  }
  else if (param_3 == 1) {
    FUN_019c1af0(&local_30,param_2[1]);
    FUN_00416ba0(param_1,L"Simplified:",local_30);
  }
  else if (param_3 == 2) {
    FUN_019c1af0(&local_38,*param_2);
    FUN_00416ba0(param_1,L"Simplified:",local_38);
  }
  else {
    FUN_00414480(param_1);
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(&local_10);
  return param_1;
}

