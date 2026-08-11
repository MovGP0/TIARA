/* Ghidra address: 01323220 */
/* Ghidra symbol: FUN_01323220 */


void FUN_01323220(longlong param_1,char param_2)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x1420) != 0 && param_2 == '\0') {
    if (*(char *)(param_1 + 0x13b3) == '\0') {
      *(double *)(param_1 + 0x13d8) = *(double *)(param_1 + 0x13d8) / 8.0;
      *(undefined1 *)(param_1 + 0x13b5) = 1;
    }
    else {
      *(undefined8 *)(param_1 + 0x13e0) = *(undefined8 *)(param_1 + 0x13d8);
      dVar5 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x13d8));
      dVar2 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x13c0));
      if (dVar5 < dVar2) {
        if (*(char *)(param_1 + 0x13b5) == '\0') {
          *(double *)(param_1 + 0x13d8) = *(double *)(param_1 + 0x13d8) * 2.0;
          *(undefined1 *)(param_1 + 0x13b5) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x13b5) = 0;
        }
      }
    }
    iVar1 = FUN_00c42630(*(undefined8 *)(param_1 + 0x13c0));
    uVar3 = FUN_0040c850(*(undefined8 *)(param_1 + 0x13c0));
    uVar4 = FUN_0040c850(*(undefined8 *)(param_1 + 0x13d8));
    dVar5 = (double)FUN_00b90650(uVar3,uVar4);
    *(double *)(param_1 + 0x13d8) = (double)iVar1 * dVar5;
    iVar1 = FUN_00c42630(*(undefined8 *)(param_1 + 0x13c0));
    uVar3 = FUN_0040c850(*(undefined8 *)(param_1 + 0x13c8));
    uVar4 = FUN_0040c850(*(undefined8 *)(param_1 + 0x13d8));
    dVar5 = (double)FUN_00b90620(uVar3,uVar4);
    *(double *)(param_1 + 0x13d8) = (double)iVar1 * dVar5;
    iVar1 = FUN_00c42630(*(undefined8 *)(param_1 + 0x13c0));
    uVar3 = FUN_0040c850(*(undefined8 *)(param_1 + 0x13d8));
    uVar4 = FUN_0040c850(*(double *)(param_1 + 0x13f8) - **(double **)(param_1 + 5000));
    dVar5 = (double)FUN_00b90650(uVar3,uVar4);
    *(double *)(param_1 + 0x13d8) = (double)iVar1 * dVar5;
  }
  return;
}

