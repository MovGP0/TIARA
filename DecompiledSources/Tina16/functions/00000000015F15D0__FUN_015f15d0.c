/* Ghidra address: 015f15d0 */
/* Ghidra symbol: FUN_015f15d0 */


undefined8 FUN_015f15d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_015f11a0(&local_10,local_res10[0],"sKeywordStart","sKeywordEnd","sSymAsc");
  FUN_00414c70(local_res10,local_10);
  FUN_0043e1a0(&local_20,L"sKeywordStart");
  FUN_00415dd0(&local_28,local_20,0);
  FUN_0043e1a0(&local_30,L"sKeywordEnd");
  FUN_00415dd0(&local_38,local_30,0);
  FUN_0043e1a0(&local_40,L"sSymAsc");
  FUN_00415dd0(&local_48,local_40,0);
  FUN_015f11a0(&local_18,local_res10[0],local_28,local_38,local_48);
  FUN_00414c70(local_res10,local_18);
  FUN_00414bf0(param_1,local_res10[0]);
  FUN_004144d0(&local_48);
  FUN_00414480(&local_40);
  FUN_004144d0(&local_38);
  FUN_00414480(&local_30);
  FUN_004144d0(&local_28);
  FUN_00414480(&local_20);
  FUN_00414590(&local_18,2);
  FUN_004144d0(local_res10);
  return param_1;
}

