/* Ghidra address: 00a74130 */
/* Ghidra symbol: FUN_00a74130 */


int FUN_00a74130(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < *param_2) {
    iVar1 = *param_2;
  }
  *param_2 = iVar1;
  iVar1 = FUN_00a73e00(param_1,*param_2);
  iVar2 = FUN_00a73ed0(param_1,*param_2);
  if (iVar2 < iVar1 + param_3) {
    iVar2 = *param_2;
    iVar8 = 0;
    local_34 = *param_2;
    local_38 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1;
    iVar7 = iVar1;
    if (-1 < local_38) {
      do {
        lVar6 = FUN_00a78410(*(undefined8 *)(param_1 + 0x18),local_38);
        if (*(longlong *)(lVar6 + 0x18) == *(longlong *)(param_1 + 0x28)) {
          iVar8 = *(int *)(lVar6 + 8);
          break;
        }
        if (((*(longlong *)(lVar6 + 0x18) == 0) && (*param_2 < *(int *)(lVar6 + 0x10))) &&
           ((*(int *)(lVar6 + 0x10) < local_34 || (local_34 == *param_2)))) {
          iVar3 = FUN_00a73e00(param_1,*(int *)(lVar6 + 0x10) + -1);
          if (*(int *)(lVar6 + 8) == iVar3) {
            iVar4 = FUN_00a73e00(param_1,*(undefined4 *)(lVar6 + 0x10));
            iVar5 = FUN_00a73ed0(param_1,*(undefined4 *)(lVar6 + 0x10));
            iVar3 = *(int *)(lVar6 + 0x10);
            if (iVar2 < iVar3) {
              iVar2 = iVar3;
            }
            if (iVar4 <= iVar5 - param_3) {
              local_34 = iVar3;
              iVar7 = iVar4;
            }
          }
        }
        local_38 = local_38 + -1;
      } while (local_38 != -1);
    }
    local_2c = *param_2;
    local_38 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) + -1;
    if (-1 < local_38) {
      do {
        lVar6 = FUN_00a78410(*(undefined8 *)(param_1 + 0x20),local_38);
        if (*(longlong *)(lVar6 + 0x18) == *(longlong *)(param_1 + 0x28)) break;
        if (((*(longlong *)(lVar6 + 0x18) == 0) && (*param_2 < *(int *)(lVar6 + 0x10))) &&
           ((*(int *)(lVar6 + 0x10) < local_2c || (local_2c == *param_2)))) {
          iVar3 = FUN_00a73ed0(param_1,*(int *)(lVar6 + 0x10) + -1);
          if (*(int *)(lVar6 + 8) == iVar3) {
            iVar4 = FUN_00a73e00(param_1,*(undefined4 *)(lVar6 + 0x10));
            iVar5 = FUN_00a73ed0(param_1,*(undefined4 *)(lVar6 + 0x10));
            iVar3 = *(int *)(lVar6 + 0x10);
            if (iVar2 < iVar3) {
              iVar2 = iVar3;
            }
            if (iVar4 <= iVar5 - param_3) {
              local_2c = iVar3;
              iVar1 = iVar4;
            }
          }
        }
        local_38 = local_38 + -1;
      } while (local_38 != -1);
    }
    if (local_34 == *param_2) {
      if (local_2c == *param_2) {
        *param_2 = iVar2;
        iVar1 = iVar8;
      }
      else {
        *param_2 = local_2c;
      }
    }
    else if (local_2c == *param_2) {
      *param_2 = local_34;
      iVar1 = iVar7;
    }
    else if (local_34 < local_2c) {
      *param_2 = local_34;
      iVar1 = iVar7;
    }
    else {
      *param_2 = local_2c;
    }
  }
  return iVar1 + *(int *)(param_1 + 8);
}

