/* Ghidra address: 00449190 */
/* Ghidra symbol: FUN_00449190 */


void FUN_00449190(longlong param_1)

{
  if (*(char *)(param_1 + 0x3a) == '\0') {
    FUN_00448ad0(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x290),param_1 + 0x48,
                 param_1 + 0x46,param_1 + 0x44,param_1 + 0x42);
    *(undefined1 *)(param_1 + 0x3a) = 1;
  }
  return;
}

