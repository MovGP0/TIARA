/* Ghidra address: 00f1d350 */
/* Ghidra symbol: FUN_00f1d350 */


void FUN_00f1d350(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int unaff_ESI;
  bool bVar9;
  int local_2c;
  
  bVar2 = false;
  bVar1 = false;
  if (*(byte *)(param_1 + 0x58) < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0x58) & 0x1f)
            & 0x61U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    local_2c = 1;
    if (0 < iVar3) {
      do {
        bVar1 = bVar2;
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),local_2c + -1);
        if (*(longlong *)(lVar5 + 0xe0) == param_2) {
          bVar1 = true;
          unaff_ESI = local_2c + -1;
        }
        local_2c = local_2c + 1;
        iVar3 = iVar3 + -1;
        bVar2 = bVar1;
      } while (iVar3 != 0);
    }
    if (bVar1) {
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                         (*(longlong **)(param_1 + 0x80),unaff_ESI);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x98))
                (*(longlong **)(param_1 + 0x80),unaff_ESI);
      FUN_004aee30(*(undefined8 *)(plVar6[0x1f] + 0xf8),plVar6);
      FUN_004aee80(*(undefined8 *)(plVar6[0x1f] + 0xf8));
      FUN_004aee30(*(undefined8 *)(plVar6[0x20] + 0xf8),plVar6);
      FUN_004aee80(*(undefined8 *)(plVar6[0x20] + 0xf8));
      *(undefined1 *)((longlong)plVar6 + 0x11) = 0;
      (**(code **)(*plVar6 + -0x20))(plVar6,1);
    }
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    local_2c = 1;
    if (0 < iVar3) {
      do {
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),local_2c + -1);
        if (*(longlong *)(lVar5 + 0x98) == param_2) {
          bVar2 = true;
          unaff_ESI = local_2c + -1;
        }
        local_2c = local_2c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (bVar2) {
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),unaff_ESI);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x98))
                (*(longlong **)(param_1 + 0x80),unaff_ESI);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0xc0))
                        (*(longlong **)(param_1 + 0x78),*(undefined8 *)(lVar5 + 0xf0));
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),uVar4);
      lVar8 = FUN_004113f0(uVar7,&DAT_01ccbf00);
      FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar5 + 0xe8) + 0xf8),lVar5);
      FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar5 + 0xe8) + 0xf8));
      FUN_004aee30(*(undefined8 *)(*(longlong *)(lVar5 + 0xf0) + 0xf8),lVar5);
      FUN_004aee80(*(undefined8 *)(*(longlong *)(lVar5 + 0xf0) + 0xf8));
      *(undefined1 *)(lVar5 + 0x11) = 0;
      FUN_00410f20(lVar5);
      if (*(int *)(*(longlong *)(lVar8 + 0xf8) + 0x10) == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x78) + 0x98))(*(longlong **)(param_1 + 0x78),uVar4);
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))();
        local_2c = 0;
        if (-1 < iVar3 + -1) {
          do {
            uVar7 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                              (*(longlong **)(param_1 + 0x88),local_2c);
            lVar5 = FUN_004113f0(uVar7,&PTR_FUN_01cd9128);
            if (*(longlong *)(lVar5 + 0x60) == lVar8) {
              FUN_00410f20(lVar5);
              unaff_ESI = local_2c;
            }
            local_2c = local_2c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x98))
                  (*(longlong **)(param_1 + 0x88),unaff_ESI);
        FUN_00410f20(lVar8);
      }
    }
  }
  return;
}

