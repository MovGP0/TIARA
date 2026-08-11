/* Ghidra address: 01445050 */
/* Ghidra symbol: FUN_01445050 */


void FUN_01445050(longlong param_1,double param_2,longlong param_3)

{
  double dVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (*(char *)(param_3 + 0x92) == '\0') {
    uVar4 = FUN_019b9700(*(undefined8 *)(param_3 + 0x20),*(undefined1 *)(param_3 + 0x44),param_3);
    *(undefined8 *)(param_1 + 0x1f8) = uVar4;
    *(undefined8 *)(param_1 + 0x200) = 0;
    uVar3 = (ulonglong)*(byte *)(param_3 + 0x44);
    if (*(byte *)(param_3 + 0x44) != 0) {
      do {
        dVar5 = (double)FUN_019b9700(*(undefined8 *)(param_3 + 0x20),
                                     CONCAT71((int7)(uVar3 >> 8),(char)uVar3 + -1),param_3);
        dVar1 = *(double *)(param_1 + 0x200);
        *(double *)(param_1 + 0x200) = *(double *)(param_1 + 0x1f8) * param_2;
        *(double *)(param_1 + 0x1f8) = -dVar1 * param_2 + dVar5;
        uVar2 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 != 0);
    }
  }
  return;
}

