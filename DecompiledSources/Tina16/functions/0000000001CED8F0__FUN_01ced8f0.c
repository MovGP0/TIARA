/* Ghidra address: 01ced8f0 */
/* Ghidra symbol: FUN_01ced8f0 */


void FUN_01ced8f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int local_30;
  int local_2c;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28));
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(longlong **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  FUN_01ae6450(lVar3,param_1);
  iVar1 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x28))(*(longlong **)(lVar3 + 0xd8));
  local_30 = 1;
  if (0 < iVar1) {
    do {
      lVar4 = (**(code **)(**(longlong **)(lVar3 + 0xd8) + 0x30))
                        (*(longlong **)(lVar3 + 0xd8),local_30 + -1);
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x28))(*(longlong **)(lVar4 + 0x70));
      local_2c = 1;
      if (0 < iVar2) {
        do {
          lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                            (*(longlong **)(lVar4 + 0x70),local_2c + -1);
          if (*(char *)(lVar5 + 0x10) != '\0') {
            uVar6 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                              (*(longlong **)(lVar4 + 0x70),local_2c + -1);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar6);
          }
          local_2c = local_2c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x28))(*(longlong **)(lVar4 + 0x78));
      local_2c = 1;
      if (0 < iVar2) {
        do {
          lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                            (*(longlong **)(lVar4 + 0x78),local_2c + -1);
          if (*(char *)(lVar5 + 0x10) != '\0') {
            uVar6 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                              (*(longlong **)(lVar4 + 0x78),local_2c + -1);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar6);
          }
          local_2c = local_2c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))(*(longlong **)(lVar4 + 0x80));
      local_2c = 1;
      if (0 < iVar2) {
        do {
          lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x30))
                            (*(longlong **)(lVar4 + 0x80),local_2c + -1);
          if (*(char *)(lVar5 + 0x10) != '\0') {
            uVar6 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x30))
                              (*(longlong **)(lVar4 + 0x80),local_2c + -1);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar6);
          }
          local_2c = local_2c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x88) + 0x28))(*(longlong **)(lVar4 + 0x88));
      local_2c = 1;
      if (0 < iVar2) {
        do {
          lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x88) + 0x30))
                            (*(longlong **)(lVar4 + 0x88),local_2c + -1);
          if (*(char *)(lVar5 + 0x10) != '\0') {
            uVar6 = (**(code **)(**(longlong **)(lVar4 + 0x88) + 0x30))
                              (*(longlong **)(lVar4 + 0x88),local_2c + -1);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar6);
          }
          local_2c = local_2c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_30 = local_30 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(lVar3 + 0xe0) + 0x28))(*(longlong **)(lVar3 + 0xe0));
  local_30 = 1;
  if (0 < iVar1) {
    do {
      lVar4 = (**(code **)(**(longlong **)(lVar3 + 0xe0) + 0x30))
                        (*(longlong **)(lVar3 + 0xe0),local_30 + -1);
      if (*(char *)(lVar4 + 0x10) != '\0') {
        uVar6 = (**(code **)(**(longlong **)(lVar3 + 0xe0) + 0x30))
                          (*(longlong **)(lVar3 + 0xe0),local_30 + -1);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),uVar6);
      }
      local_30 = local_30 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((*(longlong *)(lVar3 + 0xf0) != 0) && (*(char *)(*(longlong *)(lVar3 + 0xf0) + 0x10) != '\0'))
  {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar3 + 0xf0));
  }
  if ((*(longlong *)(lVar3 + 0xf8) != 0) && (*(char *)(*(longlong *)(lVar3 + 0xf0) + 0x10) != '\0'))
  {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar3 + 0xf8));
  }
  return;
}

