/* Ghidra address: 019b9b80 */
/* Ghidra symbol: FUN_019b9b80 */


undefined8 FUN_019b9b80(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_004170c0(&DAT_019b9c64,local_res10[0],1);
  FUN_00416e20(local_res10,1,uVar1);
  uVar1 = FUN_004170c0(&LAB_019b9c74,local_res10[0],1);
  iVar3 = 0;
  if (local_res10[0] != 0) {
    iVar3 = *(int *)(local_res10[0] + -4);
  }
  iVar2 = FUN_004170c0(&LAB_019b9c74,local_res10[0],1);
  FUN_00416e20(local_res10,uVar1,(iVar3 - iVar2) + 1);
  FUN_00414ad0(param_1,local_res10[0]);
  FUN_00414480(local_res10);
  return param_1;
}

