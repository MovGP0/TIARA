/* Ghidra address: 013d4b80 */
/* Ghidra symbol: FUN_013d4b80 */


undefined8 FUN_013d4b80(undefined8 param_1)

{
  longlong lVar1;
  
  FUN_01cc5c60(param_1);
  while ((lVar1 = FUN_01cc5cc0(param_1), lVar1 == 0 || (*(char *)(lVar1 + 0x3a) != '\x04'))) {
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

