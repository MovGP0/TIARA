/* Ghidra address: 01373a10 */
/* Ghidra symbol: FUN_01373a10 */


void FUN_01373a10(longlong param_1)

{
  if (*(char *)(param_1 + 0xdec) != '\0') {
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10) + 0x180))
              (*(longlong **)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  }
  return;
}

