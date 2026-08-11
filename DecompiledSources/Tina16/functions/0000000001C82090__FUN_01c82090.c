/* Ghidra address: 01c82090 */
/* Ghidra symbol: FUN_01c82090 */


longlong * FUN_01c82090(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_01c81f40(param_1,param_2);
  iVar2 = FUN_004170c0(&DAT_01c8212c,*param_2,1);
  if (iVar2 == 1) {
    FUN_00416e20(param_2,1,1);
  }
  iVar3 = FUN_004170c0(&DAT_01c8212c,*param_2,1);
  iVar2 = 0;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + -4);
  }
  if (iVar3 == iVar2) {
    uVar4 = 0;
    if (lVar1 != 0) {
      uVar4 = *(undefined4 *)(lVar1 + -4);
    }
    FUN_00416e20(param_2,uVar4,1);
  }
  return param_2;
}

