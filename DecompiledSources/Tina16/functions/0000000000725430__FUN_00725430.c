/* Ghidra address: 00725430 */
/* Ghidra symbol: FUN_00725430 */


void FUN_00725430(longlong param_1,int *param_2)

{
  if ((*param_2 == 0x111) && (*(short *)((longlong)param_2 + 10) == 9)) {
    if ((short)param_2[2] == 0x473) {
      *(undefined1 *)(param_1 + 0xf9) = 1;
    }
    else if ((short)param_2[2] == 0x474) {
      *(undefined1 *)(param_1 + 0xf8) = 1;
    }
  }
  FUN_00722630();
  return;
}

