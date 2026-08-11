/* Ghidra address: 016a48c0 */
/* Ghidra symbol: FUN_016a48c0 */


longlong * FUN_016a48c0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414480(param_2);
  iVar3 = 2;
  if (1 < *(int *)(param_1 + 0x10) + -1) {
    iVar4 = *(int *)(param_1 + 0x10) + -2;
    do {
      lVar2 = FUN_01d347d0(param_1,iVar3);
      FUN_004169a0(&local_20,*(undefined8 *)(lVar2 + 8));
      FUN_00416cd0(param_2,3,*param_2,local_20,&LAB_016a49a4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = *(undefined4 *)(*param_2 + -4);
  }
  FUN_00416e20(param_2,uVar1,1);
  FUN_00414480(&local_20);
  return param_2;
}

