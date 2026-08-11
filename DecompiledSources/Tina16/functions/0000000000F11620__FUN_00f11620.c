/* Ghidra address: 00f11620 */
/* Ghidra symbol: FUN_00f11620 */


void FUN_00f11620(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_30;
  undefined4 local_2c;
  
  lVar6 = *(longlong *)(param_1 + 0x78);
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (iVar2 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x28))(*(longlong **)(lVar6 + 0xd8)),
     iVar2 == 1)) {
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))(*(longlong **)(lVar6 + 0xd8),0);
    cVar1 = FUN_004113d0(uVar4,&DAT_01cdd500);
    if (cVar1 != '\0') {
      lVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))(*(longlong **)(lVar6 + 0xd8),0);
      iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x28))(*(longlong **)(lVar5 + 0x70));
      if (iVar2 == 1) {
        lVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))(*(longlong **)(lVar6 + 0xd8),0);
        iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x28))(*(longlong **)(lVar5 + 0x78));
        if (iVar2 == 1) {
          iVar2 = *(int *)(param_1 + 0x48);
          iVar7 = 1;
          if (iVar2 < 1) {
            return;
          }
          do {
            lVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))
                              (*(longlong **)(lVar6 + 0xd8),0);
            uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x30))
                              (*(longlong **)(lVar5 + 0x70),0);
            lVar8 = (longlong)iVar7;
            uVar3 = FUN_01cd60f0(uVar4,*(undefined8 *)
                                        (*(longlong *)(param_1 + 0x68) + -0x10 + lVar8 * 0x10));
            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + lVar8 * 8) = uVar3;
            lVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))
                              (*(longlong **)(lVar6 + 0xd8),0);
            uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                              (*(longlong **)(lVar5 + 0x78),0);
            uVar3 = FUN_01cd60f0(uVar4,*(undefined8 *)
                                        (*(longlong *)(param_1 + 0x68) + -8 + lVar8 * 0x10));
            *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + lVar8 * 8) = uVar3;
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          return;
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar7 = 1;
    if (0 < iVar2) {
      do {
        lVar5 = (longlong)iVar7;
        uVar3 = FUN_0040c770((double)*(int *)(lVar6 + 0x14) +
                             *(double *)(*(longlong *)(param_1 + 0x68) + -0x10 + lVar5 * 0x10) *
                             (double)(*(int *)(lVar6 + 0x1c) - *(int *)(lVar6 + 0x14)));
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + lVar5 * 8) = uVar3;
        uVar3 = FUN_0040c770((double)*(int *)(lVar6 + 0x18) +
                             *(double *)(*(longlong *)(param_1 + 0x68) + -8 + lVar5 * 0x10) *
                             (double)(*(int *)(lVar6 + 0x20) - *(int *)(lVar6 + 0x18)));
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + lVar5 * 8) = uVar3;
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar7 = 1;
    if (0 < iVar2) {
      do {
        lVar6 = (longlong)iVar7;
        (**(code **)(**(longlong **)(param_1 + 0x80) + 0xf0))
                  (*(longlong **)(param_1 + 0x80),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -0x10 + lVar6 * 0x10),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x68) + -8 + lVar6 * 0x10),&local_2c,
                   &local_30);
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + lVar6 * 8) = local_2c;
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + lVar6 * 8) = local_30;
        iVar7 = iVar7 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

