/* Ghidra address: 0137c6e0 */
/* Ghidra symbol: FUN_0137c6e0 */


void FUN_0137c6e0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x104) != param_2) &&
     ((*(char *)(param_1 + 0x98) == '\x04' || (*(char *)(param_1 + 0x98) == '\x0f')))) {
    if ((char)param_2 == '\0') {
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xc4);
    }
    else {
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 200);
    }
  }
  *(int *)(param_1 + 0x104) = param_2;
  if (*(char *)(param_1 + 0x98) == '\b') {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
    iVar6 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                          (*(longlong **)(param_1 + 8),iVar6);
        lVar3 = FUN_004113f0(uVar2,&PTR_FUN_011051a8);
        iVar5 = *(int *)(param_1 + 0x104);
        if ((((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) || (iVar5 == 3)) {
          lVar4 = FUN_00414de0();
          iVar5 = 0;
          if (*(longlong *)(lVar3 + 8) != 0) {
            iVar5 = *(int *)(*(longlong *)(lVar3 + 8) + -4);
          }
          *(undefined2 *)(lVar4 + -2 + (longlong)(iVar5 + -2) * 2) = 0x53;
        }
        else if (iVar5 == 4) {
          lVar4 = FUN_00414de0();
          iVar5 = 0;
          if (*(longlong *)(lVar3 + 8) != 0) {
            iVar5 = *(int *)(*(longlong *)(lVar3 + 8) + -4);
          }
          *(undefined2 *)(lVar4 + -2 + (longlong)(iVar5 + -2) * 2) = 0x5a;
        }
        else if (iVar5 == 5) {
          lVar4 = FUN_00414de0();
          iVar5 = 0;
          if (*(longlong *)(lVar3 + 8) != 0) {
            iVar5 = *(int *)(*(longlong *)(lVar3 + 8) + -4);
          }
          *(undefined2 *)(lVar4 + -2 + (longlong)(iVar5 + -2) * 2) = 0x59;
        }
        else if (iVar5 == 6) {
          lVar4 = FUN_00414de0();
          iVar5 = 0;
          if (*(longlong *)(lVar3 + 8) != 0) {
            iVar5 = *(int *)(*(longlong *)(lVar3 + 8) + -4);
          }
          *(undefined2 *)(lVar4 + -2 + (longlong)(iVar5 + -2) * 2) = 0x48;
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

