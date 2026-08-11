/* Ghidra address: 016edc70 */
/* Ghidra symbol: FUN_016edc70 */


ulonglong FUN_016edc70(undefined8 param_1,longlong param_2,double param_3,undefined8 param_4,
                      double param_5,double param_6)

{
  undefined8 unaff_RDI;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = *(double *)(param_2 + 0x730);
  if (param_6 < 0.0) {
    param_6 = *(double *)(param_2 + 0x720);
  }
  if (*(double *)(param_2 + 0x3c0) <= 1e-06) {
    uVar1 = FUN_0040c850(param_3);
    uVar2 = FUN_0040c850(param_5);
    dVar4 = (double)FUN_00b90620(uVar1,uVar2);
  }
  else {
    uVar1 = FUN_0040c850(param_3);
    uVar2 = FUN_0040c850(param_4);
    uVar3 = FUN_0040c850(param_5);
    dVar4 = (double)FUN_00b90630(uVar1,uVar2,uVar3);
  }
  dVar4 = (dVar5 * 0.01 * dVar4 + param_6) * *(double *)(param_2 + 0x3f8);
  uVar1 = FUN_0040c850(param_5 - param_3);
  dVar5 = (double)FUN_00b90620(uVar1,param_6 * 0.01);
  FUN_016ed9e0(param_1,param_2,dVar5,dVar4);
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),dVar4 < dVar5) & 0xffffffff;
}

