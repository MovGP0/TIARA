/* Ghidra address: 01b08810 */
/* Ghidra symbol: FUN_01b08810 */


void FUN_01b08810(longlong param_1,double param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(double *)(param_1 + 0x90)) {
    uVar1 = FUN_00b90620(DAT_01fd1d88);
    *(undefined8 *)(param_1 + 0x90) = uVar1;
  }
  return;
}

