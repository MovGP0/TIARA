/* Ghidra address: 007fb770 */
/* Ghidra symbol: FUN_007fb770 */


void FUN_007fb770(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x10) == 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x4b0) + 0x24) != '\0')) {
    FUN_007fa260(*(undefined8 *)(param_1 + 0x4b0));
  }
  else {
    FUN_00658310();
  }
  return;
}

