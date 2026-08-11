/* Ghidra address: 016ed9e0 */
/* Ghidra symbol: FUN_016ed9e0 */


void FUN_016ed9e0(undefined8 param_1,longlong param_2,double param_3,double param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = -1.0;
  if (1e-30 < param_3) {
    dVar3 = (param_4 * 0.75 * *(double *)(param_2 + 0x10)) / param_3;
  }
  if (1e-30 < dVar3) {
    dVar1 = (double)FUN_01b08a30(param_2,0);
    uVar2 = FUN_00b90630(dVar3,dVar1 * 0.0625,*(undefined8 *)(param_2 + 0x370));
    FUN_016ed960(param_1,param_2,uVar2,0);
  }
  return;
}

