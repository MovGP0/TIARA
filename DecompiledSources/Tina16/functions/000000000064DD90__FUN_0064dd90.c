/* Ghidra address: 0064dd90 */
/* Ghidra symbol: FUN_0064dd90 */


longlong * FUN_0064dd90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_0064dc90(param_1);
  FUN_00414740(param_2,0,iVar1);
  if (iVar1 != 0) {
    uVar4 = FUN_00416740(*param_2);
    iVar2 = FUN_0064dcb0(param_1,uVar4,iVar1 + 1);
    if (0 < iVar1 - iVar2) {
      iVar3 = 0;
      if (*param_2 != 0) {
        iVar3 = *(int *)(*param_2 + -4);
      }
      FUN_004169f0(param_2,iVar3 - (iVar1 - iVar2));
    }
  }
  return param_2;
}

