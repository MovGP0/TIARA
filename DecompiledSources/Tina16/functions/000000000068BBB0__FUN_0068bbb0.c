/* Ghidra address: 0068bbb0 */
/* Ghidra symbol: FUN_0068bbb0 */


int FUN_0068bbb0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_28 [4];
  int local_24;
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 0x4c4);
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x4cc) == '\0')) {
    FUN_0068bc00(param_1,local_28,0);
    iVar2 = local_1c - local_24;
  }
  return iVar2;
}

