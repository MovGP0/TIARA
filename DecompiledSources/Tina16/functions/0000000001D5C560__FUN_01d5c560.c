/* Ghidra address: 01d5c560 */
/* Ghidra symbol: FUN_01d5c560 */


void FUN_01d5c560(char *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  double dVar4;
  
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2c8) + 0x128);
    sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (sVar3 == 0x2c) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x60);
      dVar4 = (double)FUN_00b90650((*(double *)(param_1 + 0x2b8) * *(double *)(param_1 + 0x2c0) *
                                    0.1 * *(double *)(param_1 + 0x2b0)) / 100.0,
                                   ((*(double *)(lVar2 + 8) / *(double *)(lVar2 + 0x108)) *
                                    *(double *)(param_1 + 0x2b8) * *(double *)(param_1 + 0x2c0) *
                                    *(double *)(lVar2 + 0x110) * 100.0 *
                                   *(double *)(param_1 + 0x2b0)) / 100.0);
    }
    else {
      dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),1,2,
                                   *(undefined8 *)(param_1 + 0x2c8));
      dVar4 = ((((dVar4 * dVar4) / **(double **)(*(longlong *)(param_1 + 0x2c8) + 0x60)) /
               (*(double **)(*(longlong *)(param_1 + 0x2c8) + 0x60))[0xb]) *
               *(double *)(param_1 + 0x2b8) * *(double *)(param_1 + 0x2c0) * 0.1 *
              *(double *)(param_1 + 0x2b0)) / 100.0;
    }
    FUN_016ed5d0(param_2,*param_1 + '\x01',dVar4,0,0,0,0);
  }
  FUN_016873b0(param_1 + 8,param_2,param_3,param_4);
  return;
}

