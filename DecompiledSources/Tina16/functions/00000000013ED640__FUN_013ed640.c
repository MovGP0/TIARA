/* Ghidra address: 013ed640 */
/* Ghidra symbol: FUN_013ed640 */


void FUN_013ed640(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar2 = FUN_006d8150(*(undefined8 *)(param_1 + 0x6d0));
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_1 + 0x1098);
    if (cVar1 == '\0') {
      lVar3 = FUN_004095c0(0x23a);
      *(undefined8 *)(lVar3 + 0x10c) = *(undefined8 *)(param_1 + 0xc82);
      *(undefined8 *)(lVar3 + 0x114) = *(undefined8 *)(param_1 + 0xc8a);
      *(undefined2 *)(lVar3 + 0x11c) = *(undefined2 *)(param_1 + 0xc92);
      *(undefined1 *)(lVar3 + 0x11e) = *(undefined1 *)(param_1 + 0xc94);
      if ((*(char *)(param_1 + 0xc94) == '\x02') && (*(longlong *)(param_1 + 0xc95) == 0)) {
        *(undefined1 *)(lVar3 + 0x11e) = 0;
      }
      if (*(char *)(lVar3 + 0x11e) == '\x02') {
        *(undefined8 *)(lVar3 + 0x11f) = *(undefined8 *)(param_1 + 0xc95);
      }
      else {
        *(undefined8 *)(lVar3 + 0x11f) = 0;
      }
      *(undefined1 *)(lVar3 + 0xc) = 0;
      lVar4 = FUN_019a4600();
      FUN_004ae7e0(*(undefined8 *)(lVar4 + 0x470),lVar3);
    }
    else if (cVar1 == '\x01') {
      lVar3 = *(longlong *)(param_1 + 0x10a8);
      *(undefined8 *)(lVar3 + 0x10c) = *(undefined8 *)(param_1 + 0xc82);
      *(undefined8 *)(lVar3 + 0x114) = *(undefined8 *)(param_1 + 0xc8a);
      *(undefined2 *)(lVar3 + 0x11c) = *(undefined2 *)(param_1 + 0xc92);
      *(undefined1 *)(lVar3 + 0x11e) = *(undefined1 *)(param_1 + 0xc94);
      if ((*(char *)(param_1 + 0xc94) == '\x02') && (*(longlong *)(param_1 + 0xc95) == 0)) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x10a8) + 0x11e) = 0;
      }
      lVar3 = *(longlong *)(param_1 + 0x10a8);
      if (*(char *)(lVar3 + 0x11e) == '\x02') {
        *(undefined8 *)(lVar3 + 0x11f) = *(undefined8 *)(param_1 + 0xc95);
      }
      else {
        FUN_00410f20(*(undefined8 *)(lVar3 + 0x11f));
        *(undefined8 *)(*(longlong *)(param_1 + 0x10a8) + 0x11f) = 0;
      }
    }
    else if ((cVar1 == '\x02') && (*(longlong *)(param_1 + 0x10a8) != 0)) {
      FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x10a8) + 0x11f));
      FUN_004095f0(*(undefined8 *)(param_1 + 0x10a8));
      lVar3 = FUN_019a4600();
      FUN_004ae870(*(undefined8 *)(lVar3 + 0x470),*(undefined4 *)(param_1 + 0x109c));
    }
  }
  iVar2 = FUN_006d8150();
  if (iVar2 == 1) {
    if (*(int *)(param_1 + 0x1084) == 0) {
      cVar1 = *(char *)(param_1 + 0x1099);
      if (cVar1 == '\0') {
        lVar3 = FUN_004095c0(0x24);
        *(undefined8 *)(lVar3 + 0xc) = *(undefined8 *)(param_1 + 0xcd0);
        *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)(param_1 + 0xcd8);
        *(double *)(lVar3 + 0x1c) =
             (*(double *)(param_1 + 0xcd0) + *(double *)(param_1 + 0xcd8)) / 2.0;
        lVar4 = FUN_019a4600();
        FUN_004ae7e0(*(undefined8 *)(lVar4 + 0x468),lVar3);
      }
      else if (cVar1 == '\x01') {
        lVar3 = *(longlong *)(param_1 + 0x10b0);
        *(undefined8 *)(lVar3 + 0xc) = *(undefined8 *)(param_1 + 0xcd0);
        *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)(param_1 + 0xcd8);
        *(double *)(lVar3 + 0x1c) =
             (*(double *)(param_1 + 0xcd0) + *(double *)(param_1 + 0xcd8)) / 2.0;
      }
      else if ((cVar1 == '\x02') && (*(longlong *)(param_1 + 0x10b0) != 0)) {
        FUN_004095f0(*(longlong *)(param_1 + 0x10b0));
        lVar3 = FUN_019a4600();
        FUN_004ae870(*(undefined8 *)(lVar3 + 0x468),*(undefined4 *)(param_1 + 0x10a0));
      }
    }
    if (*(int *)(param_1 + 0x1084) == 1) {
      cVar1 = *(char *)(param_1 + 0x109a);
      if (cVar1 == '\0') {
        lVar3 = FUN_004095c0(0x37);
        *(undefined1 *)(lVar3 + 8) = *(undefined1 *)(param_1 + 0xcbb);
        *(undefined8 *)(lVar3 + 9) = *(undefined8 *)(param_1 + 0xcbc);
        *(undefined1 *)(lVar3 + 0x11) = *(undefined1 *)(param_1 + 0x10d8);
        *(undefined1 *)(lVar3 + 0x12) = 0;
        *(undefined8 *)(lVar3 + 0x13) = *(undefined8 *)(param_1 + 0x10c0);
        *(undefined8 *)(lVar3 + 0x1b) = *(undefined8 *)(param_1 + 0x10c8);
        *(undefined8 *)(lVar3 + 0x23) = *(undefined8 *)(param_1 + 0x10d0);
        lVar4 = FUN_019a4600();
        FUN_004ae7e0(*(undefined8 *)(lVar4 + 0x478),lVar3);
        *(undefined1 *)(param_1 + 0x742) = 1;
        if (((*(char *)(lVar3 + 8) != '\x01') && (*(char *)(lVar3 + 8) != '\x03')) &&
           (iVar2 = *(int *)(*(longlong *)(param_1 + 0x10c0) + 0x10) + -1, 0 < iVar2)) {
          do {
            uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10c0),1);
            FUN_004095f0(uVar5);
            FUN_004ae870(*(undefined8 *)(param_1 + 0x10c0),1);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        *(undefined1 *)(param_1 + 0x743) = 1;
        if (*(char *)(lVar3 + 8) != '\x02') {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x10c8) + 0x10);
          iVar6 = 0;
          if (-1 < iVar2 + -1) {
            do {
              uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10c8),iVar6);
              FUN_004095f0(uVar5);
              iVar6 = iVar6 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          (**(code **)(**(longlong **)(param_1 + 0x10c8) + 0x10))(*(longlong **)(param_1 + 0x10c8));
        }
        *(undefined1 *)(param_1 + 0x744) = 1;
        if (*(char *)(lVar3 + 8) != '\0') {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x10d0) + 0x10);
          iVar6 = 0;
          if (-1 < iVar2 + -1) {
            do {
              uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10d0),iVar6);
              FUN_004095f0(uVar5);
              iVar6 = iVar6 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          (**(code **)(**(longlong **)(param_1 + 0x10d0) + 0x10))(*(longlong **)(param_1 + 0x10d0));
        }
      }
      else if (cVar1 == '\x01') {
        lVar3 = *(longlong *)(param_1 + 0x10b8);
        *(undefined1 *)(lVar3 + 8) = *(undefined1 *)(param_1 + 0xcbb);
        *(undefined8 *)(lVar3 + 9) = *(undefined8 *)(param_1 + 0xcbc);
        *(undefined1 *)(lVar3 + 0x11) = *(undefined1 *)(param_1 + 0x10d8);
        *(undefined1 *)(lVar3 + 0x12) = 0;
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x13) + 0x10);
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x13),iVar6);
            FUN_004095f0(uVar5);
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x13));
        lVar3 = *(longlong *)(param_1 + 0x10b8);
        *(undefined8 *)(lVar3 + 0x13) = *(undefined8 *)(param_1 + 0x10c0);
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x1b) + 0x10);
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x1b),iVar6);
            FUN_004095f0(uVar5);
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x1b));
        lVar3 = *(longlong *)(param_1 + 0x10b8);
        *(undefined8 *)(lVar3 + 0x1b) = *(undefined8 *)(param_1 + 0x10c8);
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x23) + 0x10);
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x23),iVar6);
            FUN_004095f0(uVar5);
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x23));
        *(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x23) = *(undefined8 *)(param_1 + 0x10d0);
        *(undefined1 *)(param_1 + 0x742) = 1;
        cVar1 = *(char *)(*(longlong *)(param_1 + 0x10b8) + 8);
        if (((cVar1 != '\x01') && (cVar1 != '\x03')) &&
           (iVar2 = *(int *)(*(longlong *)(param_1 + 0x10c0) + 0x10) + -1, 0 < iVar2)) {
          do {
            uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10c0),1);
            FUN_004095f0(uVar5);
            FUN_004ae870(*(undefined8 *)(param_1 + 0x10c0),1);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        *(undefined1 *)(param_1 + 0x743) = 1;
        if (*(char *)(*(longlong *)(param_1 + 0x10b8) + 8) != '\x02') {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x10c8) + 0x10);
          iVar6 = 0;
          if (-1 < iVar2 + -1) {
            do {
              uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10c8),iVar6);
              FUN_004095f0(uVar5);
              iVar6 = iVar6 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          (**(code **)(**(longlong **)(param_1 + 0x10c8) + 0x10))(*(longlong **)(param_1 + 0x10c8));
        }
        *(undefined1 *)(param_1 + 0x744) = 1;
        if (*(char *)(*(longlong *)(param_1 + 0x10b8) + 8) != '\0') {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x10d0) + 0x10);
          iVar6 = 0;
          if (-1 < iVar2 + -1) {
            do {
              uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10d0),iVar6);
              FUN_004095f0(uVar5);
              iVar6 = iVar6 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          (**(code **)(**(longlong **)(param_1 + 0x10d0) + 0x10))(*(longlong **)(param_1 + 0x10d0));
        }
      }
      else if ((cVar1 == '\x02') && (*(longlong *)(param_1 + 0x10b8) != 0)) {
        iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10b8) + 0x13) + 0x10);
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x13),iVar6);
            FUN_004095f0(uVar5);
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x13));
        iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10b8) + 0x1b) + 0x10);
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x1b),iVar6);
            FUN_004095f0(uVar5);
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x1b));
        iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10b8) + 0x23) + 0x10);
        iVar6 = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x23),iVar6);
            FUN_004095f0(uVar5);
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x23));
        FUN_004095f0(*(undefined8 *)(param_1 + 0x10b8));
        lVar3 = FUN_019a4600();
        FUN_004ae870(*(undefined8 *)(lVar3 + 0x478),*(undefined4 *)(param_1 + 0x10a4));
      }
    }
  }
  return;
}

