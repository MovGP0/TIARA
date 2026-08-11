/* Ghidra address: 01c9ae90 */
/* Ghidra symbol: FUN_01c9ae90 */


void FUN_01c9ae90(longlong param_1)

{
  if (*(char *)(param_1 + 0x2798) != '\0') {
    FUN_01c99750(param_1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined1 *)(param_1 + 0x2798) = 0;
  }
  return;
}

