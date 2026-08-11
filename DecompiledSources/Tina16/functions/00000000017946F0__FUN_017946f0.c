/* Ghidra address: 017946f0 */
/* Ghidra symbol: FUN_017946f0 */


void FUN_017946f0(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 *local_60;
  undefined8 local_48;
  int local_3c;
  longlong *local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_60 = auStack_98;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0xd20),&PTR_FUN_00c5d110);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10);
    local_3c = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_3c);
        if (*(char *)(lVar3 + 0x21) != '\0') {
          uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),local_3c);
          FUN_004ae7e0(local_20,uVar2);
        }
        local_3c = local_3c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xd28) + 0x10);
    local_3c = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd28),local_3c);
        FUN_004ae7e0(local_20,uVar2);
        local_3c = local_3c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (*(int *)(local_20 + 0x10) == 0) {
    FUN_01794960(0,local_60);
  }
  else {
    if (*(int *)(local_20 + 0x10) == 1) {
      local_30[0] = *(undefined8 *)PTR_DAT_02004c38;
    }
    else {
      local_30[0] = FUN_0179ba70(param_1);
      if ((int)local_30[0] == 0x7fffffff) {
        local_30[0] = FUN_01794620(auStack_98,local_20);
      }
    }
    cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0xd20),&PTR_FUN_00c5d110);
    if ((cVar1 == '\0') && (0 < *(int *)(local_20 + 0x10))) {
      local_78 = 2;
      local_48 = FUN_00c5c340(&DAT_00c5bba8,1,*(undefined8 *)(param_1 + 0xd10),local_20);
      FUN_00c5c790(*(undefined8 *)(param_1 + 0xd50),local_48);
    }
    FUN_01795670(param_1,1);
    iVar4 = *(int *)(local_20 + 0x10);
    local_3c = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_38 = (longlong *)FUN_004aeac0(local_20,local_3c);
        if (param_2 == '\0') {
          (**(code **)(*local_38 + 0x68))(local_38,local_30);
        }
        else {
          (**(code **)(*local_38 + 0x60))(local_38,local_30);
        }
        local_3c = local_3c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
    FUN_00410f20(local_20);
  }
  return;
}

