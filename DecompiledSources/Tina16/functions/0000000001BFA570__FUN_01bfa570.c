/* Ghidra address: 01bfa570 */
/* Ghidra symbol: FUN_01bfa570 */


void FUN_01bfa570(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x30) != param_2) {
    *(char *)(param_1 + 0x30) = param_2;
    FUN_01bf9980(param_1,1);
  }
  return;
}

