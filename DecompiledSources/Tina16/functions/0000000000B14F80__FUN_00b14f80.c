/* Ghidra address: 00b14f80 */
/* Ghidra symbol: FUN_00b14f80 */


undefined8 FUN_00b14f80(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*param_1 != 0) {
    iVar2 = *(int *)(*param_1 + -4);
  }
  iVar1 = 2;
  if (2 < iVar2) {
    do {
      if (*(char *)(*param_1 + -1 + (longlong)iVar1) != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 2;
    } while (iVar1 < iVar2);
  }
  return 1;
}

