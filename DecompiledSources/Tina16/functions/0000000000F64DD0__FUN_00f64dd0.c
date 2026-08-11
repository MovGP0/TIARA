/* Ghidra address: 00f64dd0 */
/* Ghidra symbol: FUN_00f64dd0 */


longlong FUN_00f64dd0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  uVar2 = *param_2;
  iVar1 = *(int *)(PTR_DAT_02002068 + 0x40);
  iVar13 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  iVar11 = 0;
  if (-1 < iVar13 + -1) {
    do {
      lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar11);
      if (*(char *)(lVar6 + 0x30) == '\n') {
        uVar7 = FUN_004113f0(lVar6,&PTR_FUN_00f6a950);
        *param_3 = uVar7;
        iVar4 = FUN_00f70570();
        iVar12 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar7 = FUN_00f70580(*param_3,iVar12);
            uVar8 = FUN_00f6e240();
            uVar9 = FUN_00f6e270(uVar7);
            cVar3 = FUN_00f6e2e0(uVar7);
            local_40 = (int)uVar2;
            iStack_3c = (int)((ulonglong)uVar2 >> 0x20);
            local_48 = (int)uVar8;
            iStack_44 = (int)((ulonglong)uVar8 >> 0x20);
            if (cVar3 == '\0') {
              cVar3 = FUN_00f6e2c0(uVar7);
              if ((cVar3 != '\0') &&
                 (((local_50 = (int)uVar9, local_48 < local_40 && (local_40 < local_50)) ||
                  ((local_50 < local_40 && (local_40 < local_48)))))) {
                uVar10 = iStack_3c - iStack_44 >> 0x1f;
                iVar5 = (iStack_3c - iStack_44 ^ uVar10) - uVar10;
                goto joined_r0x00f64f28;
              }
            }
            else {
              iStack_4c = (int)((ulonglong)uVar9 >> 0x20);
              if (((iStack_44 < iStack_3c) && (iStack_3c < iStack_4c)) ||
                 ((iStack_4c < iStack_3c && (iStack_3c < iStack_44)))) {
                uVar10 = local_40 - local_48 >> 0x1f;
                iVar5 = (local_40 - local_48 ^ uVar10) - uVar10;
joined_r0x00f64f28:
                if (iVar5 < iVar1) {
                  return lVar6;
                }
              }
            }
            iVar12 = iVar12 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  return 0;
}

