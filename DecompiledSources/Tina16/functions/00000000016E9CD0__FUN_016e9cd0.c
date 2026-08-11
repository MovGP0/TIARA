/* Ghidra address: 016e9cd0 */
/* Ghidra symbol: FUN_016e9cd0 */


void FUN_016e9cd0(longlong param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = param_2;
  }
  else {
    FUN_01b04d70(0x21b,&LAB_016e9d04,0);
  }
  return;
}

