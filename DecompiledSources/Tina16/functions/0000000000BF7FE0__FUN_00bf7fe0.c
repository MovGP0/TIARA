/* Ghidra address: 00bf7fe0 */
/* Ghidra symbol: FUN_00bf7fe0 */


undefined1 FUN_00bf7fe0(longlong param_1)

{
  short *psVar1;
  
  if (*(char *)(param_1 + 0x2f) == '\0') {
    *(undefined1 *)(param_1 + 0x2f) = 1;
    for (psVar1 = (short *)FUN_00416740(*(undefined8 *)(param_1 + 0x78));
        (*psVar1 != 0 && (*psVar1 == 0x20)); psVar1 = psVar1 + 1) {
    }
    *(bool *)(param_1 + 0x2e) = *psVar1 == 0;
  }
  return *(undefined1 *)(param_1 + 0x2e);
}

