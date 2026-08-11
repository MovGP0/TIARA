/* Ghidra address: 00db18c0 */
/* Ghidra symbol: FUN_00db18c0 */


void FUN_00db18c0(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  if ((*(char *)(param_1 + 0x40) == '\0') || ((*(byte *)(param_3 + 0x88) & 8) != 0)) {
    dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3),0);
    dVar6 = *(double *)(param_1 + 8) +
            *(double *)(param_1 + 0x10) * (dVar2 - *(double *)(param_1 + 0x20));
    uVar3 = FUN_0040c850(dVar6);
    uVar4 = FUN_0040c850(*(undefined8 *)(param_1 + 8));
    dVar5 = (double)FUN_00b90620(uVar3,uVar4);
    dVar2 = *(double *)(param_3 + 0x6c0);
    dVar1 = *(double *)(param_3 + 0x6a8);
    dVar6 = (double)FUN_0040c850(dVar6 - *(double *)(param_1 + 8));
    if (dVar2 * dVar5 + dVar1 < dVar6) {
      FUN_016e9f80(param_2,param_3,1,10);
    }
  }
  return;
}

