/* Ghidra address: 01cd3950 */
/* Ghidra symbol: FUN_01cd3950 */


ulonglong FUN_01cd3950(longlong param_1)

{
  byte bVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  bVar1 = *(byte *)(param_1 + 0x70);
  if (1 < bVar1) {
    if (bVar1 == 2) {
      dVar3 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      dVar6 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
      dVar4 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      uVar5 = FUN_00c43d20(dVar3 + (dVar6 - dVar4) / (double)*(int *)(param_1 + 0x74));
      dVar3 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
      dVar6 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
      dVar4 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      dVar3 = (double)FUN_00c43d20(dVar3 + (dVar6 - dVar4) / (double)*(int *)(param_1 + 0x74));
      if (dVar3 < *(double *)(param_1 + 0xd0) || dVar3 == *(double *)(param_1 + 0xd0)) {
        *(undefined8 *)(param_1 + 0xb8) = uVar5;
        *(double *)(param_1 + 0xc0) = dVar3;
      }
      else {
        dVar3 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xd0));
        dVar6 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
        dVar4 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
        uVar5 = FUN_00c43d20(dVar3 - (dVar6 - dVar4));
        *(undefined8 *)(param_1 + 0xb8) = uVar5;
        *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0xd0);
      }
      goto LAB_01cd3b40;
    }
    if (bVar1 != 3) goto LAB_01cd3b40;
  }
  dVar6 = (*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) /
          (double)*(int *)(param_1 + 0x74);
  dVar3 = *(double *)(param_1 + 0xc0) + dVar6;
  if (dVar3 < *(double *)(param_1 + 0xd0) || dVar3 == *(double *)(param_1 + 0xd0)) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = *(double *)(param_1 + 0xd0) - (*(double *)(param_1 + 0xc0) + dVar6);
  }
  *(double *)(param_1 + 0xb8) = *(double *)(param_1 + 0xb8) + dVar6 + dVar3;
  *(double *)(param_1 + 0xc0) = *(double *)(param_1 + 0xc0) + dVar6 + dVar3;
  if (dVar6 + dVar3 == 0.0) {
    uVar2 = 0;
  }
LAB_01cd3b40:
  return uVar2 & 0xffffffff;
}

