/* Ghidra address: 00aa6e10 */
/* Ghidra symbol: FUN_00aa6e10 */


void FUN_00aa6e10(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  
  if ((*(char *)(param_1 + 700) == '\0') && (*(int *)(*(longlong *)(param_1 + 0x230) + 0x10) != 0))
  {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    do {
      pcVar1 = (char *)(lVar2 + 0xa9);
      lVar2 = *(longlong *)(lVar2 + 0x78);
      if (*pcVar1 == '\0') break;
    } while (lVar2 != 0);
    if (*pcVar1 != '\0') {
      FUN_00ac1990(*(undefined8 *)(param_1 + 0x230));
    }
  }
  return;
}

