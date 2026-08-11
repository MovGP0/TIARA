/* Ghidra address: 01cd4100 */
/* Ghidra symbol: FUN_01cd4100 */


void FUN_01cd4100(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  if ((*(double *)(param_1 + 0xb8) == *(double *)(param_1 + 200)) &&
     (*(double *)(param_1 + 0xc0) == *(double *)(param_1 + 0xd0))) {
    uVar4 = FUN_0040c850(*(undefined8 *)(param_1 + 0xb8));
    uVar5 = FUN_0040c850(*(undefined8 *)(param_1 + 0xc0));
    dVar6 = (double)FUN_00b90620(uVar4,uVar5);
    dVar6 = dVar6 * 1e-06;
    dVar7 = (double)FUN_0040c850(*(double *)(param_1 + 0xb8) - *(double *)(param_1 + 0xc0));
    if (dVar7 < dVar6) {
      *(double *)(param_1 + 0xb8) = *(double *)(param_1 + 0xb8) - dVar6;
      *(double *)(param_1 + 0xc0) = *(double *)(param_1 + 0xc0) + dVar6;
    }
  }
  else {
    dVar6 = (double)FUN_0040c850(*(double *)(param_1 + 0xb8) - *(double *)(param_1 + 0xc0));
    if (dVar6 < 1e-14) {
      *(double *)(param_1 + 0xc0) = *(double *)(param_1 + 0xc0) + 1e-14;
    }
  }
  lVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0x60),&PTR_FUN_01ac9770);
  if ((*(char *)(lVar2 + 0x10b) == '\0') && (cVar1 = FUN_01cd6670(param_1), cVar1 == '\0')) {
    if ((*(char *)(param_1 + 0x70) == '\x02') &&
       (dVar6 = (double)FUN_00c43d10(*(double *)(param_1 + 0xc0) / *(double *)(param_1 + 0xb8)),
       dVar6 < (double)*(int *)(param_1 + 0x74))) {
      *(undefined4 *)(param_1 + 0x90) = 2;
    }
  }
  else {
    lVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0x60),&PTR_FUN_01ac9770);
    if (*(char *)(lVar2 + 0x10c) == '\0') {
      uVar4 = FUN_01cd6670(param_1);
      if ((byte)uVar4 < 8) {
        bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 6U) != 0;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        if (*(char *)(param_1 + 0x70) != '\x02') {
          return;
        }
        dVar6 = (double)FUN_00c43d10(*(double *)(param_1 + 0xc0) / *(double *)(param_1 + 0xb8));
        if ((double)*(int *)(param_1 + 0x74) <= dVar6) {
          return;
        }
        *(undefined4 *)(param_1 + 0x90) = 2;
        return;
      }
    }
    uVar4 = FUN_01cd6670(param_1);
    if ((byte)uVar4 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << ((byte)uVar4 & 0x1f) & 0xf0U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      *(undefined8 *)(param_1 + 0xb8) = 0xbff0000000000000;
      *(undefined8 *)(param_1 + 0xc0) = 0x3ff0000000000000;
    }
  }
  return;
}

