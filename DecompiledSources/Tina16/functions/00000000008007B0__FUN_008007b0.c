/* Ghidra address: 008007b0 */
/* Ghidra symbol: FUN_008007b0 */


void FUN_008007b0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_58;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (((char)param_1[0x9b] != '\0') && (*(longlong *)(DAT_02012668 + 0xa8) != 0)) {
    local_58 = 0;
    if ((char)param_1[0x9b] == '\x02') {
      lVar6 = FUN_007ffaf0(*(undefined8 *)(DAT_02012668 + 0xa8));
      local_58 = *(longlong *)(lVar6 + 8);
    }
    else if (((char)param_1[0x9b] == '\x03') && (*(longlong *)(DAT_02012670 + 0xd0) != 0)) {
      lVar6 = FUN_007ffaf0(*(undefined8 *)(DAT_02012670 + 0xd0));
      local_58 = *(longlong *)(lVar6 + 8);
    }
    else if ((char)param_1[0x9b] == '\x01') {
      lVar6 = FUN_00809cf0(DAT_02012670);
      local_58 = *(longlong *)(lVar6 + 8);
    }
    lVar6 = FUN_007ffaf0(param_1);
    lVar6 = *(longlong *)(lVar6 + 8);
    local_3c = FUN_00808040();
    local_44 = 0;
    if (-1 < local_3c + -1) {
      do {
        lVar7 = FUN_00808020(DAT_02012670,local_44);
        if (*(longlong *)(lVar7 + 8) == local_58) {
          if (local_58 == lVar6) {
            if (*(char *)((longlong)param_1 + 0x4d7) == '\x04') {
              uVar8 = FUN_00808020(DAT_02012670,local_44);
              FUN_00807850(uVar8,&local_38);
              (**(code **)(*param_1 + 400))
                        (param_1,local_38 + ((local_30 - local_38) - (int)param_1[0x13]) / 2,
                         local_34 + ((local_2c - local_34) - *(int *)((longlong)param_1 + 0x9c)) / 2
                         ,(int)param_1[0x13],*(int *)((longlong)param_1 + 0x9c));
            }
          }
          else {
            iVar1 = FUN_00808040();
            local_40 = 0;
            if (-1 < iVar1 + -1) {
              do {
                lVar7 = FUN_00808020(DAT_02012670,local_40);
                if (*(longlong *)(lVar7 + 8) == lVar6) {
                  if (*(char *)((longlong)param_1 + 0x4d7) == '\x04') {
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    FUN_00807850(uVar8,&local_38);
                    (**(code **)(*param_1 + 400))
                              (param_1,local_38 + ((local_30 - local_38) - (int)param_1[0x13]) / 2,
                               local_34 +
                               ((local_2c - local_34) - *(int *)((longlong)param_1 + 0x9c)) / 2,
                               (int)param_1[0x13],*(int *)((longlong)param_1 + 0x9c));
                  }
                  else if (*(char *)((longlong)param_1 + 0x4d7) == '\x06') {
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar2 = FUN_00807790(uVar8);
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar3 = FUN_008077f0(uVar8);
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar4 = FUN_008077d0(uVar8);
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar5 = FUN_008077b0(uVar8);
                    (**(code **)(*param_1 + 400))
                              (param_1,iVar2 + (iVar3 - (int)param_1[0x13]) / 2,
                               iVar4 + (iVar5 - *(int *)((longlong)param_1 + 0x9c)) / 2,
                               (int)param_1[0x13],*(int *)((longlong)param_1 + 0x9c));
                  }
                  else {
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar2 = FUN_00807790(uVar8);
                    iVar3 = FUN_007fd7d0(param_1);
                    uVar8 = FUN_00808020(DAT_02012670,local_40);
                    iVar4 = FUN_00807790(uVar8);
                    iVar4 = (iVar2 + iVar3) - iVar4;
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar2 = FUN_00807790(uVar8);
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar3 = FUN_008077f0(uVar8);
                    if (iVar2 + iVar3 < iVar4 + (int)param_1[0x13]) {
                      uVar8 = FUN_00808020(DAT_02012670,local_44);
                      iVar2 = FUN_00807790(uVar8);
                      uVar8 = FUN_00808020(DAT_02012670,local_44);
                      iVar3 = FUN_008077f0(uVar8);
                      iVar4 = (iVar2 + iVar3) - (int)param_1[0x13];
                    }
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar2 = FUN_008077d0(uVar8);
                    iVar3 = FUN_007fd800(param_1);
                    uVar8 = FUN_00808020(DAT_02012670,local_40);
                    iVar5 = FUN_008077d0(uVar8);
                    iVar5 = (iVar2 + iVar3) - iVar5;
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar2 = FUN_008077d0(uVar8);
                    uVar8 = FUN_00808020(DAT_02012670,local_44);
                    iVar3 = FUN_008077b0(uVar8);
                    if (iVar2 + iVar3 < iVar5 + *(int *)((longlong)param_1 + 0x9c)) {
                      uVar8 = FUN_00808020(DAT_02012670,local_44);
                      iVar2 = FUN_008077d0(uVar8);
                      uVar8 = FUN_00808020(DAT_02012670,local_44);
                      iVar3 = FUN_008077b0(uVar8);
                      iVar5 = (iVar2 + iVar3) - *(int *)((longlong)param_1 + 0x9c);
                    }
                    (**(code **)(*param_1 + 400))
                              (param_1,iVar4,iVar5,(int)param_1[0x13],
                               *(undefined4 *)((longlong)param_1 + 0x9c));
                  }
                }
                local_40 = local_40 + 1;
                iVar1 = iVar1 + -1;
              } while (iVar1 != 0);
            }
          }
        }
        local_44 = local_44 + 1;
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
  }
  return;
}

