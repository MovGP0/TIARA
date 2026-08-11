/* Ghidra address: 005ea280 */
/* Ghidra symbol: FUN_005ea280 */


undefined8 * FUN_005ea280(undefined8 *param_1,undefined1 *param_2,int param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined2 *local_40 [2];
  
  local_40[0] = (undefined2 *)0x0;
  iVar4 = 0;
  if (param_4 != 0) {
    FUN_00414ad0(param_1,param_4);
    iVar4 = 0;
    if (param_4 != 0) {
      iVar4 = *(int *)(param_4 + -4);
    }
  }
  iVar1 = param_3 + 1;
  FUN_004169f0(param_1,iVar4 + iVar1 * 3 + -1);
  lVar2 = FUN_00416740(*param_1);
  iVar3 = 0;
  if (-1 < param_3) {
    do {
      FUN_0043fba0(local_40,*param_2,2);
      *(undefined2 *)(lVar2 + (longlong)iVar4 * 2) = *local_40[0];
      *(undefined2 *)(lVar2 + (longlong)(iVar4 + 1) * 2) = local_40[0][1];
      if (iVar3 < param_3) {
        *(undefined2 *)(lVar2 + (longlong)(iVar4 + 2) * 2) = 0x2c;
      }
      iVar4 = iVar4 + 3;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_40);
  return param_1;
}

