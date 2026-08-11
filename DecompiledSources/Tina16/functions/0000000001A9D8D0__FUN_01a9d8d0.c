/* Ghidra address: 01a9d8d0 */
/* Ghidra symbol: FUN_01a9d8d0 */


void FUN_01a9d8d0(undefined2 *param_1,double *param_2,double *param_3,double *param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  byte local_7c;
  byte local_7b;
  
  dVar5 = (double)*(byte *)(param_1 + 1) / 255.0;
  local_7b = (byte)((ushort)*param_1 >> 8);
  dVar6 = (double)local_7b / 255.0;
  local_7c = (byte)*param_1;
  dVar7 = (double)local_7c / 255.0;
  uVar1 = FUN_00b90620(dVar6,dVar7);
  dVar2 = (double)FUN_00b90620(dVar5,uVar1);
  uVar1 = FUN_00b90650(dVar6,dVar7);
  dVar3 = (double)FUN_00b90650(dVar5,uVar1);
  *param_4 = (dVar2 + dVar3) / 2.0;
  if (dVar2 == dVar3) {
    *param_2 = 0.0;
    *param_3 = 0.0;
  }
  else {
    dVar4 = dVar2 - dVar3;
    if (0.5 < *param_4 || *param_4 == 0.5) {
      *param_3 = dVar4 / (2.0 - (dVar2 + dVar3));
    }
    else {
      *param_3 = dVar4 / (dVar2 + dVar3);
    }
    if (dVar5 == dVar2) {
      *param_2 = (dVar6 - dVar7) / dVar4;
    }
    else if (dVar6 == dVar2) {
      *param_2 = (dVar7 - dVar5) / dVar4 + 2.0;
    }
    else {
      *param_2 = (dVar5 - dVar6) / dVar4 + 4.0;
    }
    *param_2 = *param_2 / 6.0;
    if (*param_2 <= 0.0 && *param_2 != 0.0) {
      *param_2 = *param_2 + 1.0;
    }
  }
  return;
}

