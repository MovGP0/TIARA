/* Ghidra address: 00cd7970 */
/* Ghidra symbol: FUN_00cd7970 */


void FUN_00cd7970(undefined8 param_1,longlong param_2,int param_3)

{
  if (((param_2 != 0) && (param_3 != 0)) && (param_3 - 1U < 0x80000000)) {
    do {
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

