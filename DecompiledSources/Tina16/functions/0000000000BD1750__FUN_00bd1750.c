/* Ghidra address: 00bd1750 */
/* Ghidra symbol: FUN_00bd1750 */


undefined8 FUN_00bd1750(undefined8 param_1,undefined2 param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  FUN_004169f0(param_1,param_3);
  iVar2 = 1;
  if (0 < param_3) {
    do {
      lVar1 = FUN_00414de0(param_1);
      *(undefined2 *)(lVar1 + -2 + (longlong)iVar2 * 2) = param_2;
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return param_1;
}

