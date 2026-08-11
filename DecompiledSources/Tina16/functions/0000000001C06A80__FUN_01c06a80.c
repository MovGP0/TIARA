/* Ghidra address: 01c06a80 */
/* Ghidra symbol: FUN_01c06a80 */


void FUN_01c06a80(longlong param_1,longlong param_2,int param_3,int param_4,byte param_5,
                 char *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  FUN_0064eb60(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(longlong *)(param_1 + 800) != 0) {
    lVar2 = FUN_01c07120(param_1);
    if (*(char *)(lVar2 + 0x4c0) != '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2778);
      if (cVar1 == '\0') {
        cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2d50);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2b08);
          if (cVar1 == '\0') goto LAB_01c06b14;
        }
      }
      cVar1 = '\x01';
      goto LAB_01c06b1a;
    }
  }
LAB_01c06b14:
  cVar1 = '\0';
LAB_01c06b1a:
  *param_6 = cVar1;
  if (*param_6 != '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2d50);
    if (((cVar1 != '\0') && (*param_6 = *(longlong *)(param_2 + 0x58) == 0, *param_6 == '\0')) &&
       (*(longlong *)(param_2 + 0x58) != *(longlong *)(param_1 + 800))) {
      cVar1 = FUN_01bfac70(*(undefined8 *)(param_1 + 800),*(undefined8 *)(param_2 + 0x58));
      *param_6 = cVar1 == '\0';
    }
  }
  if (*param_6 != '\0') {
    if (param_5 < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)param_6 >> 8),1) << (param_5 & 0x1f) & 5U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      lVar2 = 0;
      lVar3 = FUN_01c07120(param_1);
      cVar1 = *(char *)(lVar3 + 0x4c3);
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + 0x98) / 2 < param_3) {
          uVar4 = FUN_01c07120(param_1,(longlong)*(int *)(param_1 + 0x98) % 2 & 0xffffffff);
          lVar2 = FUN_01c01690(uVar4,*(undefined8 *)(param_1 + 800));
        }
      }
      else if (cVar1 == '\x01') {
        if (param_3 < *(int *)(param_1 + 0x98) / 2) {
          uVar4 = FUN_01c07120(param_1,(longlong)*(int *)(param_1 + 0x98) % 2 & 0xffffffff);
          lVar2 = FUN_01c02450(uVar4,*(undefined8 *)(param_1 + 800));
        }
      }
      else if (cVar1 == '\x02') {
        if (*(int *)(param_1 + 0x9c) / 2 < param_4) {
          uVar4 = FUN_01c07120(param_1,(longlong)*(int *)(param_1 + 0x9c) % 2 & 0xffffffff);
          lVar2 = FUN_01c01690(uVar4,*(undefined8 *)(param_1 + 800));
        }
      }
      else {
        lVar2 = 0;
        if ((cVar1 == '\x03') && (param_4 < *(int *)(param_1 + 0x9c) / 2)) {
          uVar4 = FUN_01c07120(param_1,(longlong)*(int *)(param_1 + 0x9c) % 2 & 0xffffffff);
          lVar2 = FUN_01c02450(uVar4,*(undefined8 *)(param_1 + 800));
        }
      }
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 800);
      }
      FUN_01c07a10(*(undefined8 *)(lVar2 + 0x80),1);
    }
  }
  return;
}

