/* Ghidra address: 00c0a9a0 */
/* Ghidra symbol: FUN_00c0a9a0 */


longlong * FUN_00c0a9a0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong local_30 [2];
  
  local_30[0] = 0;
  FUN_00bd16b0(param_2,param_3);
  FUN_00bd1700(local_30,param_3);
  iVar4 = 0;
  if (param_3 != 0) {
    iVar4 = *(int *)(param_3 + -4);
  }
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      lVar3 = (longlong)iVar2;
      if (*(short *)(*param_2 + -2 + lVar3 * 2) == *(short *)(param_3 + -2 + lVar3 * 2)) {
        lVar1 = FUN_00414de0(param_2);
        *(undefined2 *)(lVar1 + -2 + lVar3 * 2) = *(undefined2 *)(local_30[0] + -2 + lVar3 * 2);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_30);
  return param_2;
}

