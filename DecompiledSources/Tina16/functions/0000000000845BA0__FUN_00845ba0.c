/* Ghidra address: 00845ba0 */
/* Ghidra symbol: FUN_00845ba0 */


void FUN_00845ba0(longlong param_1)

{
  char cVar1;
  
  FUN_00655080(param_1);
  *(undefined1 *)(param_1 + 0x55c) = *(undefined1 *)(param_1 + 0x4b8);
  if (*(char *)(param_1 + 0x4b8) == '\x01') {
    cVar1 = FUN_00777ce0(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x55c) = 0;
    }
  }
  return;
}

