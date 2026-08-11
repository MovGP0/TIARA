/* Ghidra address: 0180ff80 */
/* Ghidra symbol: FUN_0180ff80 */


longlong * FUN_0180ff80(longlong *param_1,undefined8 param_2,short param_3,undefined2 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_00414ad0(param_1);
  iVar1 = FUN_00414cb0(*param_1);
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      if (*(short *)(*param_1 + -2 + (longlong)iVar3 * 2) == param_3) {
        lVar2 = FUN_00414de0(param_1);
        *(undefined2 *)(lVar2 + -2 + (longlong)iVar3 * 2) = param_4;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return param_1;
}

