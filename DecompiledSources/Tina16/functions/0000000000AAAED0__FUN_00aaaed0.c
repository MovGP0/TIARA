/* Ghidra address: 00aaaed0 */
/* Ghidra symbol: FUN_00aaaed0 */


longlong FUN_00aaaed0(longlong param_1,char param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  int local_3c;
  int local_38;
  int local_34;
  longlong local_30;
  int local_20;
  int local_1c;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar2 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  FUN_00610ca0(local_res8,0);
  if (param_3 != 0) {
    iVar7 = *(int *)(param_3 + 0x10);
    local_1c = 0;
    if (-1 < iVar7 + -1) {
      do {
        local_30 = FUN_004aeac0(param_3,local_1c);
        cVar1 = *(char *)(local_30 + 8);
        if (cVar1 == '\x05') {
          FUN_00414ad0(local_res8 + 0x38,*(undefined8 *)(local_30 + 0x28));
        }
        else if (cVar1 == '\x06') {
          uVar3 = FUN_00a602d0(*(undefined8 *)(local_30 + 0x28),0,local_res8 + 0x34);
          *(undefined1 *)(local_res8 + 0x30) = uVar3;
        }
        else if (cVar1 == '\x1e') {
          local_34 = *(int *)(local_30 + 0x18);
          local_38 = local_34;
          if (99 < local_34) {
            local_38 = 100;
          }
          if (local_38 < 0) {
            local_3c = 0;
          }
          else {
            local_3c = local_38;
          }
          uVar6 = FUN_00a72300(local_3c,*(undefined8 *)(local_30 + 0x28));
          *(undefined8 *)(local_res8 + 0x24) = uVar6;
        }
        local_1c = local_1c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  if (param_4 != 0) {
    local_20 = FUN_00a55160(param_4);
    if (local_20 != 0x1fffffff) {
      *(undefined1 *)(local_res8 + 0x30) = 1;
      *(int *)(local_res8 + 0x34) = local_20;
    }
    FUN_00a53050(param_4,local_res8 + 0x38);
    if (*(longlong *)(local_res8 + 0x38) != 0) {
      uVar4 = FUN_00a54390(param_4);
      uVar5 = FUN_00a543b0(param_4);
      FUN_00a53850(param_4,uVar4,uVar5,local_res8 + 0x40);
    }
    FUN_00a54fc0(param_4,local_res8 + 0x58,local_res8 + 0x59,local_res8 + 0x5a);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

