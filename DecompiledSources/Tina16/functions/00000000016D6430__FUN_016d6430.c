/* Ghidra address: 016d6430 */
/* Ghidra symbol: FUN_016d6430 */


int FUN_016d6430(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar4 = 0;
  iVar5 = -1;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar4);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 8),local_res10[0]);
      iVar5 = iVar4;
      if (iVar1 == 0) break;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
      iVar5 = -1;
    } while (iVar6 != 0);
  }
  if (iVar5 == -1) {
    lVar2 = *(longlong *)(param_1 + 8);
    iVar5 = *(int *)(lVar2 + 0x10);
    uVar3 = FUN_016d5ce0(&DAT_016d5a60,1,local_res10[0],param_3,param_1 + 0x10);
    FUN_004ae7e0(lVar2,uVar3);
  }
  FUN_00414480(local_res10);
  return iVar5 * 0x100 + param_4;
}

