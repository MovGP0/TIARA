/* Ghidra address: 01cd3740 */
/* Ghidra symbol: FUN_01cd3740 */


void FUN_01cd3740(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double local_38;
  double local_30 [3];
  
  FUN_01cd3400(param_1,local_30,&local_38);
  if ((*(double *)(param_1 + 0xb8) <= local_30[0]) && (local_38 <= *(double *)(param_1 + 0xc0))) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x70);
  if (1 < bVar1) {
    if (bVar1 == 2) {
      dVar8 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
      dVar7 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      dVar7 = (dVar8 - dVar7) / 4.0;
      dVar8 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xb8));
      uVar6 = FUN_00c43d20(dVar8 - dVar7);
      uVar6 = FUN_00b90620(local_30[0],uVar6);
      *(undefined8 *)(param_1 + 0xb8) = uVar6;
      dVar8 = (double)FUN_00c43d10(*(undefined8 *)(param_1 + 0xc0));
      uVar6 = FUN_00c43d20(dVar8 + dVar7);
      uVar6 = FUN_00b90650(local_38,uVar6);
      *(undefined8 *)(param_1 + 0xc0) = uVar6;
      goto LAB_01cd388b;
    }
    if (bVar1 != 3) goto LAB_01cd388b;
  }
  dVar8 = (*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8)) / 4.0;
  uVar6 = FUN_00b90620(local_30[0],*(double *)(param_1 + 0xb8) - dVar8);
  *(undefined8 *)(param_1 + 0xb8) = uVar6;
  uVar6 = FUN_00b90650(local_38,*(double *)(param_1 + 0xc0) + dVar8);
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
LAB_01cd388b:
  cVar2 = FUN_01cd6670(param_1);
  if ((byte)(cVar2 - 1U) == 0xff) {
    lVar5 = FUN_004113f0(*(undefined8 *)(param_1 + 0x60),&PTR_FUN_01ac9770);
    if (*(char *)(lVar5 + 0x10b) == '\0') {
      FUN_01cd4340(param_1);
    }
    else {
      uVar3 = FUN_01ccddc0(param_1);
      uVar4 = FUN_01ccddd0(param_1);
      FUN_01cd43b0(param_1,uVar3,uVar4);
    }
  }
  else if ((byte)(cVar2 - 1U) < 2) {
    lVar5 = FUN_004113f0(*(undefined8 *)(param_1 + 0x60),&PTR_FUN_01ac9770);
    if (*(char *)(lVar5 + 0x10c) == '\0') {
      FUN_01cd4340(param_1);
    }
    else {
      uVar3 = FUN_01ccddc0(param_1);
      uVar4 = FUN_01ccddd0(param_1);
      FUN_01cd43b0(param_1,uVar3,uVar4);
    }
  }
  return;
}

