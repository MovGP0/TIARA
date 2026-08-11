/* Ghidra address: 00651610 */
/* Ghidra symbol: FUN_00651610 */


void FUN_00651610(longlong param_1)

{
  if (*(char *)(param_1 + 0xa8) != '\0') {
    FUN_0064df10(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x108));
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  return;
}

