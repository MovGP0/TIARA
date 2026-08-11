/* Ghidra address: 00f64f70 */
/* Ghidra symbol: FUN_00f64f70 */


undefined1
FUN_00f64f70(longlong param_1,ulonglong *param_2,longlong param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  uVar2 = *param_2;
  iVar1 = *(int *)(PTR_DAT_02002068 + 0x40);
  uVar5 = FUN_015fd610(0,0);
  *param_4 = uVar5;
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  iVar10 = 0;
  if (-1 < iVar12 + -1) {
    do {
      lVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar10);
      if ((*(char *)(lVar6 + 0x30) == '\n') && (lVar6 != param_3)) {
        uVar5 = FUN_004113f0(lVar6,&PTR_FUN_00f6a950);
        *param_5 = uVar5;
        iVar4 = FUN_00f70570();
        iVar11 = 0;
        if (-1 < iVar4 + -1) {
          do {
            uVar5 = FUN_00f70580(*param_5,iVar11);
            uVar7 = FUN_00f6e240();
            uVar8 = FUN_00f6e270(uVar5);
            cVar3 = FUN_00f6e2e0(uVar5);
            local_40 = (int)uVar2;
            iStack_3c = (int)(uVar2 >> 0x20);
            local_48 = (int)uVar7;
            iStack_44 = (int)(uVar7 >> 0x20);
            if (cVar3 == '\0') {
              cVar3 = FUN_00f6e2c0(uVar5);
              if ((((cVar3 != '\0') && (local_48 < local_40)) &&
                  (local_50 = (int)uVar8, local_40 < local_50)) &&
                 (uVar9 = iStack_3c - iStack_44 >> 0x1f,
                 (int)((iStack_3c - iStack_44 ^ uVar9) - uVar9) < iVar1)) {
                uVar5 = FUN_015fd610(uVar2 & 0xffffffff,iStack_44);
                *param_4 = uVar5;
                return 1;
              }
            }
            else if (((iStack_44 < iStack_3c) &&
                     (iStack_4c = (int)((ulonglong)uVar8 >> 0x20), iStack_3c < iStack_4c)) &&
                    (uVar9 = local_40 - local_48 >> 0x1f,
                    (int)((local_40 - local_48 ^ uVar9) - uVar9) < iVar1)) {
              uVar5 = FUN_015fd610(uVar7 & 0xffffffff,iStack_3c);
              *param_4 = uVar5;
              return 1;
            }
            iVar11 = iVar11 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar10 = iVar10 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return 0;
}

