/* Ghidra address: 01c28860 */
/* Ghidra symbol: FUN_01c28860 */


undefined8 FUN_01c28860(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&LAB_01c28934,local_res10[0],1);
  if (iVar1 < 1) {
    FUN_00414ad0(param_1,local_res10[0]);
  }
  else {
    iVar2 = FUN_004170c0(&LAB_01c28934,local_res10[0],1);
    iVar1 = 0;
    if (local_res10[0] != 0) {
      iVar1 = *(int *)(local_res10[0] + -4);
    }
    iVar3 = FUN_004170c0(&LAB_01c28934,local_res10[0],1);
    FUN_00416dc0(param_1,local_res10[0],iVar2 + 1,iVar1 - iVar3);
  }
  FUN_00414480(local_res10);
  return param_1;
}

