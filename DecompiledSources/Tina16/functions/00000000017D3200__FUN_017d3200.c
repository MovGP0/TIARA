/* Ghidra address: 017d3200 */
/* Ghidra symbol: FUN_017d3200 */


void FUN_017d3200(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x5b0) != 0) {
      FUN_016d6890(*(undefined8 *)(param_1 + 0x1358),0,0);
    }
    *(undefined8 *)(param_1 + 0x5a0) = 0;
    *(undefined8 *)(param_1 + 0x5a8) = 0;
    *(undefined8 *)(param_1 + 0x5b0) = 0;
  }
  return;
}

