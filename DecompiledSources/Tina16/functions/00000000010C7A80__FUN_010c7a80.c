/* Ghidra address: 010c7a80 */
/* Ghidra symbol: FUN_010c7a80 */


void FUN_010c7a80(undefined1 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  *param_1 = 1;
  param_1[0x18] = 1;
  uVar2 = FUN_0040c760(*(double *)(param_1 + 8) * *(double *)(param_1 + 8) +
                       *(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  cVar1 = FUN_010c7a10(*(undefined8 *)(param_1 + 0x10));
  if ((cVar1 == '\0') || (cVar1 = FUN_010c7a10(*(undefined8 *)(param_1 + 8)), cVar1 == '\0')) {
    if (*(double *)(param_1 + 8) == 0.0) {
      if (*(double *)(param_1 + 0x10) <= 0.0) {
        *(undefined8 *)(param_1 + 0x28) = 0xbff921fb54442d18;
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = 0x3ff921fb54442d18;
      }
    }
    else {
      dVar3 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x10));
      dVar4 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 8));
      dVar3 = (double)FUN_0040c660(dVar3 / dVar4);
      if ((*(double *)(param_1 + 8) <= 0.0 && *(double *)(param_1 + 8) != 0.0) &&
         (0.0 <= *(double *)(param_1 + 0x10))) {
        dVar3 = 3.141592653589793 - dVar3;
      }
      if ((*(double *)(param_1 + 8) <= 0.0 && *(double *)(param_1 + 8) != 0.0) &&
         (*(double *)(param_1 + 0x10) <= 0.0 && *(double *)(param_1 + 0x10) != 0.0)) {
        dVar3 = dVar3 + 3.141592653589793;
      }
      if ((0.0 < *(double *)(param_1 + 8)) &&
         (*(double *)(param_1 + 0x10) <= 0.0 && *(double *)(param_1 + 0x10) != 0.0)) {
        dVar3 = -dVar3;
      }
      *(double *)(param_1 + 0x28) = dVar3;
      dVar3 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
      if (dVar3 < 1e-30) {
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      dVar3 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x28));
      if (dVar3 < 1e-30) {
        *(undefined8 *)(param_1 + 0x28) = 0;
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *param_1 = 0;
    param_1[0x18] = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

