/* Ghidra address: 01ce2ca0 */
/* Ghidra symbol: FUN_01ce2ca0 */


void FUN_01ce2ca0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int local_2c;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if ((byte)(cVar1 - 1U) == 0xff) {
LAB_01ce2ce8:
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    local_2c = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),local_2c + -1);
        lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01aae560);
        if (*(char *)(lVar4 + 0x10) != '\0') {
          (**(code **)(**(longlong **)(lVar4 + 0xf8) + 0x98))(*(longlong **)(lVar4 + 0xf8),param_2);
          (**(code **)(**(longlong **)(lVar4 + 0x100) + 0x98))
                    (*(longlong **)(lVar4 + 0x100),param_2);
        }
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    local_2c = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),local_2c + -1);
        lVar4 = FUN_004113f0(uVar3,&DAT_01ccbf00);
        if (*(char *)(lVar4 + 0x10) != '\0') {
          iVar7 = *(int *)(*(longlong *)(lVar4 + 0xf8) + 0x10);
          iVar6 = 1;
          if (0 < iVar7) {
            do {
              plVar5 = (longlong *)FUN_004aeac0(*(undefined8 *)(lVar4 + 0xf8),iVar6 + -1);
              (**(code **)(*plVar5 + 0x98))(plVar5,param_2);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    local_2c = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),local_2c + -1);
        lVar4 = FUN_004113f0(uVar3,&DAT_01ccbf00);
        if (*(char *)(lVar4 + 0x10) != '\0') {
          iVar7 = *(int *)(*(longlong *)(lVar4 + 0xf8) + 0x10);
          iVar6 = 1;
          if (0 < iVar7) {
            do {
              plVar5 = (longlong *)FUN_004aeac0(*(undefined8 *)(lVar4 + 0xf8),iVar6 + -1);
              (**(code **)(*plVar5 + 0x98))(plVar5,param_2);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    if (3 < (byte)(cVar1 - 1U)) {
      if ((byte)(cVar1 - 5U) < 2) goto LAB_01ce2ce8;
      if (cVar1 != '\a') {
        return;
      }
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    local_2c = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),local_2c + -1);
        lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01aaff18);
        if (*(char *)(lVar4 + 0x10) != '\0') {
          (**(code **)(**(longlong **)(lVar4 + 0xe8) + 0x98))(*(longlong **)(lVar4 + 0xe8),param_2);
        }
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    local_2c = 1;
    if (0 < iVar2) {
      do {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                          (*(longlong **)(param_1 + 0x70),local_2c + -1);
        lVar4 = FUN_004113f0(uVar3,&DAT_01ccbf00);
        if (*(char *)(lVar4 + 0x10) != '\0') {
          iVar7 = *(int *)(*(longlong *)(lVar4 + 0xf8) + 0x10);
          iVar6 = 1;
          if (0 < iVar7) {
            do {
              plVar5 = (longlong *)FUN_004aeac0(*(undefined8 *)(lVar4 + 0xf8),iVar6 + -1);
              (**(code **)(*plVar5 + 0x98))(plVar5,param_2);
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
        local_2c = local_2c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

