/* Ghidra address: 0064de80 */
/* Ghidra symbol: FUN_0064de80 */


void FUN_0064de80(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0xb1) != param_2) {
    *(char *)(param_1 + 0xb1) = param_2;
    *(undefined1 *)(param_1 + 0xb2) = 0;
    FUN_0064fca0(param_1,0xb03c,0,0);
  }
  return;
}

