/* Ghidra address: 00c11290 */
/* Ghidra symbol: FUN_00c11290 */


void FUN_00c11290(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if ((*(char *)(param_1 + 0x20) != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    FUN_00bf37c0(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 8));
  }
  return;
}

