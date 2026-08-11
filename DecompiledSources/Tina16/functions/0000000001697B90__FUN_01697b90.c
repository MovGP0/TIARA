/* Ghidra address: 01697b90 */
/* Ghidra symbol: FUN_01697b90 */


undefined4 FUN_01697b90(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *(char *)(param_1 + 0x338);
  FUN_01696d00(param_1);
  while (*(int *)(param_1 + 0xa0) == 0x10b) {
    iVar2 = iVar2 + 1;
    FUN_01696d00(param_1);
  }
  if (((*(int *)(param_1 + 0x318) == 0) && (cVar1 != '\0')) && (0 < iVar2)) {
    cVar1 = FUN_01695e20(param_1);
    if (cVar1 == '\0') {
      FUN_01697b50(param_1);
    }
  }
  FUN_01697b10(param_1,param_1 + 0xa0);
  return *(undefined4 *)(param_1 + 0xa0);
}

