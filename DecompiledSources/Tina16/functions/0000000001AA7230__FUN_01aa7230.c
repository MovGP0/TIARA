/* Ghidra address: 01aa7230 */
/* Ghidra symbol: FUN_01aa7230 */


void FUN_01aa7230(longlong param_1)

{
  undefined1 *puVar1;
  
  if (*(char *)(param_1 + 0x56b) == '\0') {
    *(undefined1 *)(param_1 + 0x5a8) = 1;
  }
  if (*(char *)(param_1 + 0x56a) == '\0') {
    *(undefined1 *)(param_1 + 0x5a8) = 0;
  }
  *(undefined *)(param_1 + 0xd30) = (&DAT_01fce3e8)[*(byte *)(param_1 + 0x5a8)];
  puVar1 = *(undefined1 **)(param_1 + 0x41e8);
  *puVar1 = *(undefined1 *)(param_1 + 0x568);
  puVar1[1] = *(undefined1 *)(param_1 + 0x569);
  return;
}

