/* Ghidra address: 014bf040 */
/* Ghidra symbol: FUN_014bf040 */


void FUN_014bf040(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6d8));
  if (lVar1 != 0) {
    if (*(char *)(*(longlong *)(lVar1 + 0x18) + 0x30) == '\0') {
      FUN_014bdf00(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10));
      *(undefined1 *)(*(longlong *)(lVar1 + 0x18) + 0x30) = 1;
    }
    FUN_014be5c0(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10));
  }
  return;
}

