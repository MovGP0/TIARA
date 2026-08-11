/* Ghidra address: 01cd3cd0 */
/* Ghidra symbol: FUN_01cd3cd0 */


ulonglong FUN_01cd3cd0(longlong param_1)

{
  byte bVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  bVar1 = *(byte *)(param_1 + 0x70);
  if (1 < bVar1) {
    if (bVar1 == 2) {
      dVar6 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
      dVar3 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      dVar6 = (double)FUN_00c43d20(dVar6 - (dVar7 - dVar3) / (double)*(int *)(param_1 + 0x74));
      dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
      dVar3 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
      dVar4 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      uVar5 = FUN_00c43d20(dVar7 - (dVar3 - dVar4) / (double)*(int *)(param_1 + 0x74));
      if (*(double *)(param_1 + 200) <= dVar6) {
        *(double *)(param_1 + 0xb8) = dVar6;
        *(undefined8 *)(param_1 + 0xc0) = uVar5;
      }
      else {
        dVar6 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 200));
        dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
        dVar3 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
        uVar5 = FUN_00c43d20(dVar6 + (dVar7 - dVar3));
        *(undefined8 *)(param_1 + 0xc0) = uVar5;
        *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 200);
      }
      goto LAB_01cd3ec8;
    }
    if (bVar1 != 3) goto LAB_01cd3ec8;
  }
  dVar6 = (*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) /
          (double)*(int *)(param_1 + 0x74);
  if (*(double *)(param_1 + 200) <= *(double *)(param_1 + 0xb8) - dVar6) {
    dVar7 = 0.0;
  }
  else {
    dVar7 = *(double *)(param_1 + 200) - (*(double *)(param_1 + 0xb8) - dVar6);
  }
  *(double *)(param_1 + 0xb8) = (*(double *)(param_1 + 0xb8) - dVar6) + dVar7;
  *(double *)(param_1 + 0xc0) = (*(double *)(param_1 + 0xc0) - dVar6) + dVar7;
  if (dVar7 - dVar6 == 0.0) {
    uVar2 = 0;
  }
LAB_01cd3ec8:
  return uVar2 & 0xffffffff;
}

