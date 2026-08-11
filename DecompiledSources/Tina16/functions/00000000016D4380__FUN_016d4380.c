/* Ghidra address: 016d4380 */
/* Ghidra symbol: FUN_016d4380 */


void FUN_016d4380(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x4a4) = param_2;
  if (*(char *)(param_1 + 0x578) != '\0') {
    if (param_2 == '\0') {
      thunk_FUN_041d02dd(*(undefined8 *)(param_1 + 0x5a0));
    }
    else {
      thunk_FUN_041ae70b(*(undefined8 *)(param_1 + 0x5a0));
    }
  }
  return;
}

