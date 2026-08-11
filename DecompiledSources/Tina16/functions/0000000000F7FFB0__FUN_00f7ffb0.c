/* Ghidra address: 00f7ffb0 */
/* Ghidra symbol: FUN_00f7ffb0 */


double FUN_00f7ffb0(longlong param_1,undefined8 param_2,double *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  undefined8 local_20;
  
  local_20 = 0;
  *param_3 = 1e+30;
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x340) + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_00f81cc0(*(undefined8 *)(*(longlong *)(param_1 + 0x340) + 8),iVar3);
      *(undefined8 *)(param_1 + 0x2d8) = uVar2;
      FUN_0043f750(&local_20,*(undefined4 *)(*(longlong *)(param_1 + 0x2d8) + 0x28));
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x2d0) + 0xb0))
                        (*(longlong **)(param_1 + 0x2d0),local_20);
      if ((-1 < iVar1) &&
         (dVar5 = (double)FUN_00f81680(*(undefined8 *)(param_1 + 0x2d8),param_2), dVar5 < *param_3))
      {
        *param_3 = dVar5;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  dVar5 = *param_3;
  FUN_00414480(&local_20);
  return dVar5;
}

