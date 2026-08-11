/* Ghidra address: 00c0aa70 */
/* Ghidra symbol: FUN_00c0aa70 */


longlong * FUN_00c0aa70(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_38;
  undefined2 *local_30 [2];
  
  local_30[0] = (undefined2 *)0x0;
  local_38 = 0;
  FUN_00bd1700(param_2,param_3);
  iVar4 = 0;
  if (*param_2 != 0) {
    iVar4 = *(int *)(*param_2 + -4);
  }
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      if ((iVar3 == 1) ||
         (cVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x370))
                            (*(longlong **)(param_1 + 0xe0),
                             *(undefined2 *)(*param_2 + -2 + (longlong)(iVar3 + -1) * 2)),
         cVar1 != '\0')) {
        FUN_00416780(&local_38,*(undefined2 *)(*param_2 + -2 + (longlong)iVar3 * 2));
        FUN_00bd16b0(local_30,local_38);
        lVar2 = FUN_00414de0(param_2);
        *(undefined2 *)(lVar2 + -2 + (longlong)iVar3 * 2) = *local_30[0];
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_38,2);
  return param_2;
}

