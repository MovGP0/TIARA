/* Ghidra address: 01cc5cc0 */
/* Ghidra symbol: FUN_01cc5cc0 */


void FUN_01cc5cc0(void)

{
  longlong lVar1;
  undefined1 auStack_28 [32];
  
  do {
    lVar1 = FUN_01cc5c70(auStack_28);
    if (lVar1 == 0) {
      return;
    }
  } while (*(char *)(lVar1 + 0x18) == '\0');
  return;
}

