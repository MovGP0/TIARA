/* Ghidra address: 01d4ead0 */
/* Ghidra symbol: FUN_01d4ead0 */


void FUN_01d4ead0(double *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),1,0,0);
  dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),2,0,0);
  dVar3 = (double)FUN_0040c850(dVar1);
  if (dVar3 < 1e-30) {
    if (0.0 <= dVar1) {
      dVar1 = 1e-30;
    }
    else {
      dVar1 = -1e-30;
    }
  }
  dVar3 = (double)FUN_0040c850(dVar2);
  dVar4 = (double)FUN_0040c850(dVar1);
  if (dVar3 < dVar4 * 1e-05) {
    if (0.0 <= dVar2) {
      dVar2 = (double)FUN_0040c850(dVar1);
      dVar2 = dVar2 * 1e-05;
    }
    else {
      dVar2 = (double)FUN_0040c850(dVar1);
      dVar2 = -dVar2 * 1e-05;
    }
  }
  dVar3 = param_1[2];
  if (((param_4 == '\x01') || (param_4 == '\x06')) || (param_4 == '\b')) {
    FUN_016ed320(param_2,3,(dVar1 / dVar2) * dVar3,0,0);
    FUN_016ed220(param_2,8,dVar3 / dVar2,0);
    FUN_016ed220(param_2,9,(-dVar1 * dVar3) / (dVar2 * dVar2),0);
  }
  *param_1 = dVar1;
  param_1[1] = dVar2;
  return;
}

