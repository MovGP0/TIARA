/* Ghidra address: 019b8f70 */
/* Ghidra symbol: FUN_019b8f70 */


undefined8
FUN_019b8f70(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414480(&local_20);
  if (param_3 <= param_4) {
    iVar2 = (param_4 - param_3) + 1;
    do {
      uVar1 = FUN_019b60b0(param_2,param_3,param_5);
      FUN_00416780(local_30,uVar1);
      FUN_00416ad0(&local_20,local_30[0]);
      param_3 = param_3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414ad0(param_1,local_20);
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return param_1;
}

