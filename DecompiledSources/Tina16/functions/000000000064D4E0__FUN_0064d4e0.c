/* Ghidra address: 0064d4e0 */
/* Ghidra symbol: FUN_0064d4e0 */


ulonglong FUN_0064d4e0(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x168))(param_1);
  if (((lVar1 == 0) || (*(int *)PTR_DAT_02001bd8 < 10)) || (*(int *)PTR_DAT_02002b20 < 0x3839)) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x2cc);
  }
  else {
    uVar2 = GetDpiForWindow(lVar1);
  }
  return uVar2;
}

