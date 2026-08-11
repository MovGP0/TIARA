/* Ghidra address: 00469560 */
/* Ghidra symbol: FUN_00469560 */


void FUN_00469560(ushort *param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_00464710(param_1);
  dVar2 = (double)FUN_00464710(param_2);
  if (param_3 == 0) {
    dVar1 = dVar1 + dVar2;
  }
  else if (param_3 == 1) {
    dVar1 = dVar1 - dVar2;
  }
  else if (param_3 == 2) {
    dVar1 = dVar1 * dVar2;
  }
  else if (param_3 == 3) {
    dVar1 = dVar1 / dVar2;
  }
  else {
    FUN_00460210();
  }
  if ((*param_1 & 0xbfe8) != 0) {
    FUN_00460ac0(param_1);
  }
  *(double *)(param_1 + 4) = dVar1;
  *param_1 = 5;
  return;
}

