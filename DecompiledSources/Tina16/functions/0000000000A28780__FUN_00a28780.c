/* Ghidra address: 00a28780 */
/* Ghidra symbol: FUN_00a28780 */


void FUN_00a28780(longlong *param_1,undefined2 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  *param_3 = 0;
  FUN_00416780(local_20,param_2);
  iVar1 = FUN_004170c0(local_20[0],*param_1,1);
  iVar3 = iVar1 + -1;
  if (iVar3 < 0) {
    FUN_00414480(param_3);
  }
  else {
    iVar2 = 0;
    if (*param_1 != 0) {
      iVar2 = *(int *)(*param_1 + -4);
    }
    FUN_00416dc0(param_3,*param_1,iVar1,iVar2 - iVar3);
    FUN_004169f0(param_1,iVar3);
  }
  FUN_00414480(local_20);
  return;
}

