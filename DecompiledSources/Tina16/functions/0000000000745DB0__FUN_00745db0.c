/* Ghidra address: 00745db0 */
/* Ghidra symbol: FUN_00745db0 */


void FUN_00745db0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x4b0) + 0x10) + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      lVar2 = FUN_00746290(*(undefined8 *)(param_1 + 0x4b0),iVar3);
      if (*(char *)(lVar2 + 0x2c) == '\0') {
        return;
      }
      cVar1 = FUN_00745440(param_1,iVar3);
      if (cVar1 == '\0') {
        return;
      }
      FUN_004b25e0(*(undefined8 *)(param_1 + 0x4b0),iVar3);
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

