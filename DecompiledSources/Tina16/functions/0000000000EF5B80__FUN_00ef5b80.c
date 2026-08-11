/* Ghidra address: 00ef5b80 */
/* Ghidra symbol: FUN_00ef5b80 */


void FUN_00ef5b80(undefined8 param_1,longlong param_2)

{
  if (*(short *)(param_2 + 2) == 5) {
    *(undefined2 *)(param_2 + 2) = 6;
  }
  else if (*(short *)(param_2 + 2) == 6) {
    *(undefined2 *)(param_2 + 2) = 5;
  }
  return;
}

