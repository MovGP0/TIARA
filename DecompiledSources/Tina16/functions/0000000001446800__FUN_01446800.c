/* Ghidra address: 01446800 */
/* Ghidra symbol: FUN_01446800 */


void FUN_01446800(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  double dVar4;
  
  *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(param_2 + 0xb4);
  *(undefined1 *)(param_2 + 0xb4) = 1;
  lVar2 = param_2;
  FUN_00efdf60(100.0 / (double)*(int *)(param_2 + 0xb38),param_2);
  *(undefined1 *)(param_2 + 0xb4) = *(undefined1 *)(param_1 + 0xf6);
  if (DAT_0210e4e8 == '\0') {
    bVar1 = **(char **)(param_1 + 0xe8) - 8;
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)*(char **)(param_1 + 0xe8) >> 8),1) << (bVar1 & 0x1f)
              & 0x60U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      dVar4 = (double)FUN_019b9740(param_2);
      *(double *)(param_1 + 0xe0) =
           *(double *)(param_1 + 0xe0) + dVar4 * *(double *)(param_1 + 0x128);
    }
    else {
      dVar4 = (double)FUN_019b9740(param_2);
      *(double *)(param_1 + 0xe0) =
           *(double *)(param_1 + 0xe0) + dVar4 * *(double *)(param_1 + 0x120);
    }
  }
  else {
    bVar1 = **(char **)(param_1 + 0xe8) - 8;
    if (bVar1 < 0x10) {
      bVar3 = ((int)CONCAT62((int6)((ulonglong)lVar2 >> 0x10),1) << (bVar1 & 0x1f) & 0x180U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_01445120(param_1,0,&LAB_01446968,param_2);
    }
    else {
      FUN_01445120(param_1,0,0,param_2);
    }
  }
  return;
}

