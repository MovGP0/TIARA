/* Ghidra address: 01ba2fb0 */
/* Ghidra symbol: FUN_01ba2fb0 */


void FUN_01ba2fb0(longlong param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((param_2 & *(byte *)(param_1 + 0x9b0)) != 0) {
    FUN_01ba29c0(param_1,param_3,param_4,&local_10);
    FUN_01ba1140(&local_20,&local_10);
    FUN_00414ad0(param_1 + 0x988,local_20);
    FUN_01ba2180(param_1,0);
    if (*(int *)(param_1 + 0x9ac) == 1) {
      *(undefined8 *)(param_1 + 0x99c) = local_10;
      *(undefined4 *)(param_1 + 0x9ac) = 2;
    }
    else if (*(int *)(param_1 + 0x9ac) == 2) {
      *(undefined8 *)(param_1 + 0x9a4) = local_10;
      if ((*(int *)(param_1 + 0x99c) == *(int *)(param_1 + 0x9a4)) &&
         (*(int *)(param_1 + 0x9a0) == *(int *)(param_1 + 0x9a8))) {
        *(undefined4 *)(param_1 + 0x9ac) = 1;
      }
      else {
        FUN_01ba1140(&local_28,param_1 + 0x99c);
        FUN_01ba1140(&local_30,param_1 + 0x9a4);
        FUN_00416ad0(&local_28,local_30);
        FUN_00415dd0(&local_18,local_28,0);
        FUN_01ba2ef0(param_1,local_18);
      }
    }
  }
  FUN_00414560(&local_30,3);
  FUN_004144d0(&local_18);
  return;
}

