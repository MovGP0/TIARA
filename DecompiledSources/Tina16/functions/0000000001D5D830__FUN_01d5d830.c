/* Ghidra address: 01d5d830 */
/* Ghidra symbol: FUN_01d5d830 */


void FUN_01d5d830(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  undefined1 uVar4;
  double dVar5;
  char *local_30 [2];
  
  uVar4 = 0;
  FUN_016ee260(param_1,local_30,0x28,0);
  if (*(longlong *)(local_30[0] + 0x20) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(local_30[0] + 0x20) + 0x128);
    sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (sVar3 == 0x2c) {
      lVar2 = *(longlong *)(*(longlong *)(local_30[0] + 0x20) + 0x60);
      dVar5 = (double)FUN_00b90650((*(double *)(local_30[0] + 0x10) * 0.1 *
                                   *(double *)(local_30[0] + 8)) / 100.0,
                                   ((*(double *)(lVar2 + 8) / *(double *)(lVar2 + 0x108)) *
                                    *(double *)(local_30[0] + 0x10) *
                                    *(double *)(lVar2 + 0x110) * 100.0 *
                                   *(double *)(local_30[0] + 8)) / 100.0);
      dVar5 = *(double *)(local_30[0] + 0x18) + dVar5;
    }
    else {
      dVar5 = (double)FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),CONCAT11(uVar4,1),2,
                                   *(undefined8 *)(local_30[0] + 0x20));
      dVar5 = *(double *)(local_30[0] + 0x18) +
              ((((dVar5 * dVar5) / **(double **)(*(longlong *)(local_30[0] + 0x20) + 0x60)) /
               (*(double **)(*(longlong *)(local_30[0] + 0x20) + 0x60))[0xb]) *
               *(double *)(local_30[0] + 0x10) * 0.1 * *(double *)(local_30[0] + 8)) / 100.0;
    }
    FUN_016ed320(param_1,*local_30[0] + '\x01',0,dVar5,0);
  }
  return;
}

