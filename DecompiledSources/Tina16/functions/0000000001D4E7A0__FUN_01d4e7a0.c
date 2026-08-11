/* Ghidra address: 01d4e7a0 */
/* Ghidra symbol: FUN_01d4e7a0 */


void FUN_01d4e7a0(double *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),1,0,0);
  dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),2,0,0);
  dVar1 = param_1[2];
  if (((param_4 == '\x01') || (param_4 == '\x06')) || (param_4 == '\b')) {
    FUN_016ed320(param_2,3,-dVar2 * dVar3 * dVar1,0,0);
    FUN_016ed220(param_2,4,dVar3 * dVar1,0);
    FUN_016ed220(param_2,5,dVar2 * dVar1,0);
  }
  *param_1 = dVar2;
  param_1[1] = dVar3;
  return;
}

