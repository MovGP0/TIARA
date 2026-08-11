/* Ghidra address: 019b9a90 */
/* Ghidra symbol: FUN_019b9a90 */


void FUN_019b9a90(double param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*PTR_DAT_020052b8 == '\0') && (*(char *)(param_2 + 0xb3c) != '\0')) {
    if (param_3 == '\0') {
      *(double *)(param_2 + 0xb28) = *(double *)(param_2 + 0xb28) + param_1;
    }
    else {
      *(double *)(param_2 + 0xb28) = param_1;
    }
    lVar1 = FUN_0040c770(*(undefined8 *)(param_2 + 0xb28));
    lVar2 = FUN_0040c770(*(double *)(param_2 + 0xb28) - param_1);
    if ((lVar2 < lVar1) && (*(longlong *)PTR_DAT_020052f8 != 0)) {
      FUN_01af2990(*(undefined8 *)PTR_DAT_020052f8,(double)lVar1);
    }
  }
  return;
}

