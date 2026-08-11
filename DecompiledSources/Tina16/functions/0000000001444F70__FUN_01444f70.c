/* Ghidra address: 01444f70 */
/* Ghidra symbol: FUN_01444f70 */


void FUN_01444f70(longlong param_1,double param_2,longlong param_3)

{
  double dVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  if (*(char *)(param_3 + 0x92) == '\0') {
    dVar4 = (double)FUN_019b9700(*(undefined8 *)(param_3 + 0x18),*(undefined1 *)(param_3 + 0x45),
                                 param_3);
    *(double *)(param_1 + 0x208) = *(double *)(param_3 + 0xa0) * dVar4;
    *(undefined8 *)(param_1 + 0x210) = 0;
    uVar3 = (ulonglong)*(byte *)(param_3 + 0x45);
    if (*(byte *)(param_3 + 0x45) != 0) {
      do {
        dVar5 = (double)FUN_019b9700(*(undefined8 *)(param_3 + 0x18),
                                     CONCAT71((int7)(uVar3 >> 8),(char)uVar3 + -1),param_3);
        dVar4 = *(double *)(param_1 + 0x210);
        dVar1 = *(double *)(param_3 + 0xa0);
        *(double *)(param_1 + 0x210) = *(double *)(param_1 + 0x208) * param_2;
        *(double *)(param_1 + 0x208) = -dVar4 * param_2 + dVar1 * dVar5;
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 != 0);
    }
  }
  return;
}

