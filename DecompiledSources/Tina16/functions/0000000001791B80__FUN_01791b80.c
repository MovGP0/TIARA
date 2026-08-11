/* Ghidra address: 01791b80 */
/* Ghidra symbol: FUN_01791b80 */


void FUN_01791b80(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined1 local_88 [24];
  undefined1 local_70 [16];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [16];
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  FUN_00498370(&local_38,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x948) + 0x98),
               *(undefined4 *)(*(longlong *)(param_1 + 0x948) + 0x9c));
  FUN_00429ca0(&local_38,
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x940) + 0x498) + 0x14),
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x940) + 0x4b0) + 0x14));
  FUN_017954b0(param_1,local_38,local_34,&local_38,&local_34);
  puVar8 = &local_2c;
  FUN_017954b0(param_1,local_30,local_2c,&local_30,puVar8);
  if (*(char *)(*(longlong *)(param_1 + 0x6c0) + 0x328) != '\0') {
    FUN_005fd670(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x948) + 0x310) + 0x78),0);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x948) + 0x310) + 0x78),
                 0xffff);
    FUN_005fd6d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x948) + 0x310) + 0x78),0);
    FUN_005fd640(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x948) + 0x310) + 0x78),4);
    iVar6 = local_38 / 8 + -1;
    iVar7 = local_30 / 8 + 1;
    if (iVar6 <= iVar7) {
      iVar7 = (iVar7 - iVar6) + 1;
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x948) + 0x310);
        (**(code **)(*plVar4 + 200))
                  (plVar4,*(int *)PTR_DAT_020033a8 * iVar6 * 8,*(int *)PTR_DAT_02002d48 * local_34);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x948) + 0x310);
        (**(code **)(*plVar4 + 0xc0))
                  (plVar4,*(int *)PTR_DAT_020033a8 * iVar6 * 8,*(int *)PTR_DAT_02002d48 * local_2c);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    iVar6 = local_34 / 8 + -1;
    iVar7 = (int)local_2c / 8 + 1;
    if (iVar6 <= iVar7) {
      iVar7 = (iVar7 - iVar6) + 1;
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x948) + 0x310);
        (**(code **)(*plVar4 + 200))
                  (plVar4,*(int *)PTR_DAT_020033a8 * local_38,*(int *)PTR_DAT_02002d48 * iVar6 * 8);
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x948) + 0x310);
        (**(code **)(*plVar4 + 0xc0))
                  (plVar4,*(int *)PTR_DAT_020033a8 * local_30,*(int *)PTR_DAT_02002d48 * iVar6 * 8);
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  iVar7 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017aad48);
      if ((cVar1 == '\0') &&
         (lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7),
         *(char *)(lVar3 + 0x20) == '\0')) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017a79c0);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_38);
          if (cVar1 != '\0') {
            (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),4);
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar7 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017aad48);
      if ((cVar1 == '\0') &&
         (lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7),
         *(char *)(lVar3 + 0x20) == '\0')) {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017a79c0);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_38);
          if (cVar1 != '\0') {
            (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),4);
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar7 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xd28) + 0x10);
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd28),iVar7);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017aad48);
      if (cVar1 == '\0') {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd28),iVar7);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017a79c0);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd28),iVar7);
          cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_38);
          if (cVar1 != '\0') {
            (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),4);
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xd28) + 0x10);
  iVar7 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd28),iVar7);
      cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017aad48);
      if (cVar1 == '\0') {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd28),iVar7);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017a79c0);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd28),iVar7);
          cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_38);
          if (cVar1 != '\0') {
            (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),4);
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x9a8) + 0x328) != '\0') {
    local_40 = FUN_00498310(0x50,0x38);
    iVar7 = 0;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017aaf70);
        if (cVar1 != '\0') {
          lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          local_40 = *(undefined8 *)(lVar3 + 0x18);
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_38);
          if (cVar1 != '\0') {
            (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),4);
          }
          break;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar7 = 0;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017ab260);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_38);
          if (cVar1 != '\0') {
            (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),4);
          }
          break;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    iVar7 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017ab548);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_38);
          if (cVar1 != '\0') {
            (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),4);
          }
          break;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (*(char *)(*(longlong *)(param_1 + 0xba0) + 0x80) != '\0') {
      FUN_0179d630(param_1);
    }
    iVar7 = 0;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    if (-1 < iVar6 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017ab8b8);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_38);
          if (cVar1 != '\0') {
            (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),4);
          }
          break;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    iVar7 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
        cVar1 = FUN_004113d0(uVar2,&PTR_FUN_017ad080);
        uVar9 = (undefined4)((ulonglong)puVar8 >> 0x20);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,&local_38);
          if (cVar1 != '\0') {
            (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310),4);
          }
          break;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar2 = CONCAT44(uVar9,0x80000001);
    FUN_00498350(&local_60,0x7fffffff,0x7fffffff,0x80000001,uVar2);
    uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    iVar7 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
        cVar1 = FUN_004113d0(uVar5,&PTR_FUN_017aad48);
        if (cVar1 == '\0') {
          plVar4 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          (**(code **)(*plVar4 + 0x40))(plVar4,local_88);
          FUN_017ad620(local_50,local_88);
          thunk_FUN_0408d40e(&local_60,&local_60,local_50);
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar7);
          cVar1 = FUN_004113d0(uVar5,&PTR_FUN_017a79c0);
          if (cVar1 == '\0') {
            thunk_FUN_0408d40e(local_70,local_70,local_50);
          }
        }
        uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_005fd670(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x948) + 0x310) + 0x78),0);
    FUN_005fd6d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x948) + 0x310) + 0x78),0);
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x948) + 0x310) + 0x78),
                 0x8000);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x948) + 0x310) + 0x80),1);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x948) + 0x310);
    (**(code **)(*plVar4 + 0xf8))
              (plVar4,*(int *)PTR_DAT_020033a8 * local_60,*(int *)PTR_DAT_02002d48 * local_5c,
               *(int *)PTR_DAT_020033a8 * local_58,
               CONCAT44(uVar9,*(int *)PTR_DAT_02002d48 * local_54));
    FUN_005fd4e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x948) + 0x310) + 0x78),
                 0xff0000);
  }
  plVar4 = *(longlong **)(param_1 + 0xd20);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  return;
}

