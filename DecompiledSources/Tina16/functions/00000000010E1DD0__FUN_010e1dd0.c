/* Ghidra address: 010e1dd0 */
/* Ghidra symbol: FUN_010e1dd0 */


void FUN_010e1dd0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  FUN_01aebf00(param_1);
  FUN_0065b830(param_1);
  iVar2 = FUN_004d3e30(param_1);
  if (iVar2 < 1) {
    *(longlong *)(param_1 + 0x7f0) = param_1;
  }
  else {
    lVar6 = FUN_004d3de0(param_1,0);
    uVar7 = FUN_004113f0(*(undefined8 *)(lVar6 + 8),&PTR_FUN_010dee68);
    *(undefined8 *)(param_1 + 0x7f0) = uVar7;
  }
  FUN_010e4580(param_1,2);
  *(undefined1 *)(param_1 + 0x7ec) = 0;
  *(undefined1 *)(param_1 + 0x8d1) = 0;
  *(undefined1 *)(param_1 + 0x7ed) = 0;
  *(undefined2 *)(param_1 + 0x7ee) = 0;
  *(undefined1 *)(param_1 + 0x826) = 1;
  *(undefined1 *)(param_1 + 0x825) = 0;
  *(undefined1 *)(param_1 + 0x83a) = 0;
  *(undefined1 *)(param_1 + 0x839) = 0;
  *(undefined1 *)(param_1 + 0x838) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0;
  *(undefined1 *)(param_1 + 0x808) = 0;
  *(undefined8 *)(param_1 + 0x8b8) = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x80c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_1 + 0x98);
  uVar3 = FUN_0064d120(param_1);
  *(undefined4 *)(param_1 + 0x814) = uVar3;
  uVar3 = FUN_0064d0b0(param_1);
  *(undefined4 *)(param_1 + 0x818) = uVar3;
  *(undefined4 *)(param_1 + 0x820) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0x9c);
  FUN_007fa8a0(*(undefined8 *)(param_1 + 0x498),0);
  FUN_007fa8a0(*(undefined8 *)(param_1 + 0x4b0),0);
  FUN_007ff680(param_1,2);
  iVar4 = FUN_0064d120(param_1);
  iVar2 = *(int *)(param_1 + 0x9c);
  uVar8 = (ulonglong)*(byte *)(param_1 + 0x7fa);
  if (uVar8 < 4) {
    if (uVar8 != 2) {
      if (uVar8 == 3) {
        iVar5 = FUN_0064d0b0(param_1);
        uVar3 = FUN_0040c770((double)iVar5 / 3.32515);
        *(undefined4 *)(param_1 + 0x814) = uVar3;
      }
      goto LAB_010e1fc2;
    }
  }
  else if (4 < uVar8 - 4) {
    if (uVar8 - 9 < 6) {
      iVar5 = FUN_0064d0b0(param_1);
      uVar3 = FUN_0040c770((double)(iVar5 * 0x6e) / 265.0);
      *(undefined4 *)(param_1 + 0x814) = uVar3;
      goto LAB_010e1fc2;
    }
    if (uVar8 - 9 != 6) goto LAB_010e1fc2;
  }
  iVar5 = FUN_0064d0b0(param_1);
  uVar3 = FUN_0040c770((double)iVar5 / 1.5848);
  *(undefined4 *)(param_1 + 0x814) = uVar3;
LAB_010e1fc2:
  *(int *)(param_1 + 0x80c) = *(int *)(param_1 + 0x814) + (iVar2 - iVar4);
  uVar7 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x828) = uVar7;
  iVar2 = FUN_004d3e30();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar6 = FUN_010e0f80(&PTR_FUN_010de568,1);
      uVar7 = FUN_004d3de0(param_1,iVar4);
      lVar9 = FUN_004113f0(uVar7,&PTR_FUN_0063d930);
      FUN_008003b0(param_1);
      *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(lVar9 + 0x90);
      *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(lVar9 + 0x94);
      *(int *)(lVar6 + 0x18) = *(int *)(lVar9 + 0x90) + *(int *)(lVar9 + 0x98);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar9 + 0x94) + *(int *)(lVar9 + 0x9c);
      uVar7 = FUN_004d3de0(param_1,iVar4);
      cVar1 = FUN_004113d0(uVar7,&PTR_FUN_0066b990);
      if (cVar1 == '\0') {
        uVar7 = FUN_004d3de0(param_1,iVar4);
        cVar1 = FUN_004113d0(uVar7,&PTR_FUN_00669e80);
        if (cVar1 == '\0') {
          uVar7 = FUN_004d3de0(param_1,iVar4);
          cVar1 = FUN_004113d0(uVar7,&PTR_FUN_006686f0);
          if (cVar1 == '\0') {
            uVar7 = FUN_004d3de0(param_1,iVar4);
            cVar1 = FUN_004113d0(uVar7,&PTR_FUN_00670158);
            if (cVar1 == '\0') {
              uVar7 = FUN_004d3de0(param_1,iVar4);
              cVar1 = FUN_004113d0(uVar7,&PTR_FUN_008228b0);
              if (cVar1 == '\0') {
                (**(code **)(**(longlong **)(lVar6 + 8) + 0x10))
                          (*(longlong **)(lVar6 + 8),*(undefined8 *)(param_1 + 0xb8));
              }
              else {
                uVar7 = FUN_004d3de0(param_1,iVar4);
                lVar9 = FUN_004113f0(uVar7,&PTR_FUN_008228b0);
                if (*(char *)(lVar9 + 0xab) == '\0') {
                  (**(code **)(**(longlong **)(lVar6 + 8) + 0x10))
                            (*(longlong **)(lVar6 + 8),*(undefined8 *)(lVar9 + 0xb8));
                }
              }
            }
            else {
              uVar7 = FUN_004d3de0(param_1,iVar4);
              lVar9 = FUN_004113f0(uVar7,&PTR_FUN_00670158);
              if (*(char *)(lVar9 + 0xab) == '\0') {
                (**(code **)(**(longlong **)(lVar6 + 8) + 0x10))
                          (*(longlong **)(lVar6 + 8),*(undefined8 *)(lVar9 + 0xb8));
              }
            }
          }
          else {
            uVar7 = FUN_004d3de0(param_1,iVar4);
            lVar9 = FUN_004113f0(uVar7,&PTR_FUN_006686f0);
            if (*(char *)(lVar9 + 0xab) == '\0') {
              (**(code **)(**(longlong **)(lVar6 + 8) + 0x10))
                        (*(longlong **)(lVar6 + 8),*(undefined8 *)(lVar9 + 0xb8));
            }
          }
        }
        else {
          uVar7 = FUN_004d3de0(param_1,iVar4);
          lVar9 = FUN_004113f0(uVar7,&PTR_FUN_00669e80);
          if (*(char *)(lVar9 + 0xab) == '\0') {
            (**(code **)(**(longlong **)(lVar6 + 8) + 0x10))
                      (*(longlong **)(lVar6 + 8),*(undefined8 *)(lVar9 + 0xb8));
          }
        }
      }
      else {
        uVar7 = FUN_004d3de0(param_1,iVar4);
        lVar9 = FUN_004113f0(uVar7,&PTR_FUN_0066b990);
        if (*(char *)(lVar9 + 0xab) == '\0') {
          (**(code **)(**(longlong **)(lVar6 + 8) + 0x10))
                    (*(longlong **)(lVar6 + 8),*(undefined8 *)(lVar9 + 0xb8));
        }
      }
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x828),lVar6);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  lVar6 = FUN_010e0f80(&PTR_FUN_010de568,1);
  uVar3 = FUN_007fd7d0(param_1);
  *(undefined4 *)(lVar6 + 0x10) = uVar3;
  uVar3 = FUN_007fd800(param_1);
  *(undefined4 *)(lVar6 + 0x14) = uVar3;
  iVar2 = FUN_007fd7d0(param_1);
  *(int *)(lVar6 + 0x18) = iVar2 + *(int *)(param_1 + 0x98);
  iVar2 = FUN_007fd800(param_1);
  *(int *)(lVar6 + 0x1c) = iVar2 + *(int *)(param_1 + 0x9c);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x828),lVar6);
  *(undefined1 *)(param_1 + 0x8d0) = 0;
  if (*(char *)(param_1 + 0x860) == '\0') {
    FUN_010e1950(param_1);
  }
  else {
    FUN_010e19d0(param_1);
    if (*(char *)(param_1 + 0x7fa) == '\x03') {
      *(longlong *)(param_1 + 0x8d8) = param_1;
    }
  }
  return;
}

