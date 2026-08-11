/* Ghidra address: 00f7fc60 */
/* Ghidra symbol: FUN_00f7fc60 */


longlong FUN_00f7fc60(int param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_00409570((longlong)param_1);
  iVar2 = 0;
  if (-1 < param_1 + -1) {
    do {
      *(undefined1 *)(lVar1 + -1 + (longlong)(iVar2 + 1)) = *(undefined1 *)*param_2;
      FUN_00b909d0(param_2,1);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return lVar1;
}

