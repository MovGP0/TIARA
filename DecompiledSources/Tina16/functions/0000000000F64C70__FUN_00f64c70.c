/* Ghidra address: 00f64c70 */
/* Ghidra symbol: FUN_00f64c70 */


undefined1 FUN_00f64c70(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_5c;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  uVar2 = *param_2;
  iVar1 = *(int *)(PTR_DAT_02002068 + 0x40);
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  local_5c = 0;
  if (-1 < iVar10 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),local_5c);
      if (*(char *)(lVar4 + 0x30) == '\n') {
        uVar5 = FUN_004113f0(lVar4,&PTR_FUN_00f6a950);
        iVar3 = FUN_00f70570();
        iVar9 = 0;
        if (-1 < iVar3 + -1) {
          do {
            uVar6 = FUN_00f70580(uVar5,iVar9);
            uVar7 = FUN_00f6e240();
            uVar6 = FUN_00f6e270(uVar6);
            local_40 = (int)uVar2;
            local_48 = (int)uVar7;
            uVar8 = local_40 - local_48 >> 0x1f;
            iStack_3c = (int)((ulonglong)uVar2 >> 0x20);
            if ((((int)((local_40 - local_48 ^ uVar8) - uVar8) < iVar1) &&
                (iStack_44 = (int)((ulonglong)uVar7 >> 0x20), uVar8 = iStack_3c - iStack_44 >> 0x1f,
                (int)((iStack_3c - iStack_44 ^ uVar8) - uVar8) < iVar1)) ||
               ((local_50 = (int)uVar6, uVar8 = local_40 - local_50 >> 0x1f,
                (int)((local_40 - local_50 ^ uVar8) - uVar8) < iVar1 &&
                (iStack_4c = (int)((ulonglong)uVar6 >> 0x20), uVar8 = iStack_3c - iStack_4c >> 0x1f,
                (int)((iStack_3c - iStack_4c ^ uVar8) - uVar8) < iVar1)))) {
              return 1;
            }
            iVar9 = iVar9 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_5c = local_5c + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return 0;
}

