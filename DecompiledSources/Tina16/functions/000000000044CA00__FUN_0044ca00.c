/* Ghidra address: 0044ca00 */
/* Ghidra symbol: FUN_0044ca00 */


void FUN_0044ca00(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  short *psVar2;
  
  bVar1 = false;
  psVar2 = (short *)FUN_00416740(*param_2);
  if (psVar2 != (short *)0x0) {
    for (; *psVar2 != 0; psVar2 = psVar2 + 1) {
      if (*psVar2 == 0x27) {
        bVar1 = !bVar1;
      }
      if ((*psVar2 == *(short *)(param_1 + 0xc0)) && (!bVar1)) {
        *psVar2 = 0x2f;
      }
    }
  }
  return;
}

