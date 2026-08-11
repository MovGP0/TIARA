/* Ghidra address: 00afc770 */
/* Ghidra symbol: FUN_00afc770 */


void FUN_00afc770(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[0x116];
  if ((0 < *(int *)(lVar1 + 0x10)) && (*(char *)((longlong)param_1 + 0x4dc) == '\0')) {
    *(undefined4 *)(lVar1 + 0x9c) = 0;
    lVar2 = FUN_00ac3910(lVar1,*(int *)(lVar1 + 0x10) + -1);
    *(int *)(lVar1 + 0xa0) = *(int *)(lVar2 + 0x68) + *(int *)(lVar2 + 0x6c);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

