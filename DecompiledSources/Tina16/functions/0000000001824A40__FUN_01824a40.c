/* Ghidra address: 01824a40 */
/* Ghidra symbol: FUN_01824a40 */


int FUN_01824a40(undefined8 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)((longlong)&UNWIND_INFO_01faaab0 + (longlong)param_2 * 4 + 4);
  if (param_2 == 2) {
    cVar1 = FUN_00448b30();
    if (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

