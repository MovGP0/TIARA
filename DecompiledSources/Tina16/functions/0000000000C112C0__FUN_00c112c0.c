/* Ghidra address: 00c112c0 */
/* Ghidra symbol: FUN_00c112c0 */


void FUN_00c112c0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x21) = param_2;
  if ((*(char *)(param_1 + 0x20) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    FUN_00bf37c0(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 8));
  }
  return;
}

