/* Ghidra address: 013415b0 */
/* Ghidra symbol: FUN_013415b0 */


void FUN_013415b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(longlong *)(param_2 + 8) + 0x10) + -1;
  if (-1 < iVar2) {
    do {
      lVar1 = FUN_01d347d0(*(undefined8 *)(param_2 + 8),iVar2);
      if (*(char *)(lVar1 + 8) == '\x01') {
        FUN_01d34800(*(undefined8 *)(param_2 + 8),iVar2);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}

