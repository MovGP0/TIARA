/* Ghidra address: 014d5bf0 */
/* Ghidra symbol: FUN_014d5bf0 */


void FUN_014d5bf0(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1)
                               ,*(undefined1 *)(param_1 + 2),0);
  dVar6 = *(double *)(param_1 + 0x60) -
          *(double *)(param_1 + 0x68) * (dVar2 - *(double *)(param_1 + 0x58));
  uVar3 = FUN_0040c850(dVar6);
  uVar4 = FUN_0040c850(*(undefined8 *)(param_1 + 0x60));
  dVar5 = (double)FUN_00b90620(uVar3,uVar4);
  dVar2 = *(double *)(param_3 + 0x6c0);
  dVar1 = *(double *)(param_3 + 0x6a8);
  dVar6 = (double)FUN_0040c850(dVar6 - *(double *)(param_1 + 0x60));
  if (dVar2 * dVar5 + dVar1 < dVar6) {
    FUN_016e9f80(param_2,param_3,1,0x11);
  }
  return;
}

