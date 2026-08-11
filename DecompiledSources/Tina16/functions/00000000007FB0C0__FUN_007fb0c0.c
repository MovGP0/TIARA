/* Ghidra address: 007fb0c0 */
/* Ghidra symbol: FUN_007fb0c0 */


void FUN_007fb0c0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x494) != param_2) {
    *(char *)(param_1 + 0x494) = param_2;
    if (param_2 == '\0') {
      FUN_007fa870(*(undefined8 *)(param_1 + 0x498),0);
      FUN_007fa870(*(undefined8 *)(param_1 + 0x4b0),0);
    }
    else {
      FUN_007fb090(param_1);
    }
  }
  return;
}

