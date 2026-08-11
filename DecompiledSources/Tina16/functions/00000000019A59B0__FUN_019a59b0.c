/* Ghidra address: 019a59b0 */
/* Ghidra symbol: FUN_019a59b0 */


void FUN_019a59b0(undefined8 param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res20;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  iVar2 = 0;
  iVar4 = 1;
  bVar1 = true;
  while( true ) {
    iVar3 = 0;
    if (*param_2 != 0) {
      iVar3 = *(int *)(*param_2 + -4);
    }
    if (!(bool)(bVar1 & iVar4 <= iVar3)) break;
    if (*(short *)(*param_2 + -2 + (longlong)iVar4 * 2) == 9) {
      iVar2 = iVar2 + 1;
      bVar1 = iVar2 <= param_3;
    }
    if (bVar1) {
      iVar4 = iVar4 + 1;
    }
  }
  FUN_00416ba0(local_20,&LAB_019a5a94,local_res20);
  FUN_00416ea0(local_20[0],param_2,iVar4);
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return;
}

