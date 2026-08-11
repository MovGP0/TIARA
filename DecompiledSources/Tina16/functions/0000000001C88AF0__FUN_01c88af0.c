/* Ghidra address: 01c88af0 */
/* Ghidra symbol: FUN_01c88af0 */


void FUN_01c88af0(longlong param_1)

{
  while ((*(char *)(param_1 + 0x182c) == '\0' && (*(char *)(param_1 + 0x182e) != '\0'))) {
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  }
  *(undefined1 *)(param_1 + 0x182c) = 0;
  return;
}

