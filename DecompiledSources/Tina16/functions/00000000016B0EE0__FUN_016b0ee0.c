/* Ghidra address: 016b0ee0 */
/* Ghidra symbol: FUN_016b0ee0 */


undefined8 FUN_016b0ee0(undefined8 param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_004144d0(param_2);
  if (param_3 != (int *)0x0) {
    if (*(longlong *)(param_3 + 0x10) == 0) {
      if (param_3[0x21] == 1) {
        FUN_0043f750(&local_28,param_3[0x22]);
        FUN_00416ba0(&local_10,L"TinaTempNode",local_28);
        *param_4 = 1;
        param_4[1] = param_3[0x22];
        FUN_00415dd0(param_2,local_10,0);
      }
      else if (*param_3 == 0x17f) {
        iVar1 = FUN_0040c840(*(undefined8 *)(param_3 + 10));
        if (0 < iVar1) {
          *param_4 = 3;
          param_4[1] = 1;
        }
        else {
          *param_4 = 2;
          param_4[1] = 0;
        }
        FUN_0043f750(&local_38,0 < iVar1);
        FUN_00416ba0(&local_30,L"TinaPsgNode",local_38);
        FUN_00415dd0(param_2,local_30,0);
      }
    }
    else {
      FUN_00415430(local_20,*(longlong *)(param_3 + 0x10),0);
      FUN_016b0de0(param_1,local_20[0],param_4);
      FUN_00415430(param_2,*(undefined8 *)(param_3 + 0x10),0);
    }
  }
  FUN_00414560(&local_38,3);
  FUN_004144d0(local_20);
  FUN_00414480(&local_10);
  return param_2;
}

