/* Ghidra address: 016b0c70 */
/* Ghidra symbol: FUN_016b0c70 */


void FUN_016b0c70(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  if (param_2 == 0) {
    FUN_004144d0(&local_10);
  }
  else {
    FUN_00415430(&local_10,param_2,0);
  }
  if (local_10 != 0) {
    FUN_00416880(local_20,local_10);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xb0))
                      (*(longlong **)(param_1 + 0x58),local_20[0]);
    if (iVar1 < 0) {
      FUN_00416880(&local_28,local_10);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0xb0))
                        (*(longlong **)(param_1 + 0x50),local_28);
      if (iVar1 < 0) {
        FUN_00416880(&local_30,local_10);
        (**(code **)(**(longlong **)(param_1 + 0x50) + 0x78))
                  (*(longlong **)(param_1 + 0x50),local_30);
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
    }
  }
  FUN_00414560(&local_30,3);
  FUN_004144d0(&local_10);
  return;
}

