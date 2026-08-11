/* Ghidra address: 01ce2320 */
/* Ghidra symbol: FUN_01ce2320 */


int * FUN_01ce2320(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_2c;
  
  cVar1 = FUN_01ce33d0(param_1);
  if (cVar1 == '\0') {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))(*(longlong **)(param_1 + 0x80),0);
    *(undefined8 *)param_2 = *(undefined8 *)(lVar5 + 0x14);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(lVar5 + 0x1c);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    local_30 = 2;
    if (1 < iVar2) {
      iVar2 = iVar2 + -1;
      do {
        iVar7 = local_30 + -1;
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar7);
        iVar3 = *(int *)(lVar5 + 0x14);
        if (*param_2 < iVar3) {
          iVar3 = *param_2;
        }
        *param_2 = iVar3;
        iVar3 = param_2[1];
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar7);
        iVar8 = *(int *)(lVar5 + 0x18);
        if (iVar3 < *(int *)(lVar5 + 0x18)) {
          iVar8 = iVar3;
        }
        param_2[1] = iVar8;
        iVar3 = param_2[2];
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar7);
        iVar8 = *(int *)(lVar5 + 0x1c);
        if (*(int *)(lVar5 + 0x1c) < iVar3) {
          iVar8 = iVar3;
        }
        param_2[2] = iVar8;
        iVar3 = param_2[3];
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar7);
        iVar7 = *(int *)(lVar5 + 0x20);
        if (*(int *)(lVar5 + 0x20) < iVar3) {
          iVar7 = iVar3;
        }
        param_2[3] = iVar7;
        local_30 = local_30 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                      (*(longlong **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x94));
    *(undefined8 *)param_2 = *(undefined8 *)(lVar5 + 0x14);
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(lVar5 + 0x1c);
    local_30 = *(int *)(param_1 + 0x94) + 1;
    iVar7 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x98) + -1;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    iVar2 = iVar3 + -1;
    if (iVar7 < iVar3 + -1) {
      iVar2 = iVar7;
    }
    if (local_30 <= iVar2) {
      iVar2 = (iVar2 - local_30) + 1;
      do {
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),local_30);
        lVar5 = *(longlong *)(lVar5 + 0xf8);
        iVar3 = *(int *)(lVar5 + 0x10);
        local_2c = 1;
        if (0 < iVar3) {
          do {
            iVar8 = local_2c + -1;
            lVar6 = FUN_004aeac0(lVar5,iVar8);
            iVar7 = *(int *)(lVar6 + 0x14);
            if (*param_2 < *(int *)(lVar6 + 0x14)) {
              iVar7 = *param_2;
            }
            *param_2 = iVar7;
            iVar7 = param_2[1];
            lVar6 = FUN_004aeac0(lVar5,iVar8);
            iVar4 = *(int *)(lVar6 + 0x18);
            if (iVar7 < *(int *)(lVar6 + 0x18)) {
              iVar4 = iVar7;
            }
            param_2[1] = iVar4;
            iVar7 = param_2[2];
            lVar6 = FUN_004aeac0(lVar5,iVar8);
            iVar4 = *(int *)(lVar6 + 0x1c);
            if (*(int *)(lVar6 + 0x1c) < iVar7) {
              iVar4 = iVar7;
            }
            param_2[2] = iVar4;
            iVar7 = param_2[3];
            lVar6 = FUN_004aeac0(lVar5,iVar8);
            iVar8 = *(int *)(lVar6 + 0x20);
            if (*(int *)(lVar6 + 0x20) < iVar7) {
              iVar8 = iVar7;
            }
            param_2[3] = iVar8;
            local_2c = local_2c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_30 = local_30 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return param_2;
}

