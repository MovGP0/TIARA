/* Ghidra address: 01cc9010 */
/* Ghidra symbol: FUN_01cc9010 */


undefined8 FUN_01cc9010(longlong param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0;
  dVar2 = (double)FUN_00b90650(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38));
  if (dVar2 <= *(double *)(param_1 + 0x98)) {
    dVar2 = (double)FUN_00b90620(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38));
    if (*(double *)(param_1 + 0x98) <= dVar2) {
      dVar2 = (double)FUN_00b90650(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30));
      if (dVar2 <= *(double *)(param_1 + 0xa0)) {
        dVar2 = (double)FUN_00b90620(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x30)
                                    );
        uVar1 = 0;
        if (*(double *)(param_1 + 0xa0) <= dVar2) {
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

