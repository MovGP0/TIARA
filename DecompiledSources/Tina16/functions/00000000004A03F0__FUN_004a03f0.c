/* Ghidra address: 004a03f0 */
/* Ghidra symbol: FUN_004a03f0 */


longlong FUN_004a03f0(longlong param_1,char param_2,longlong param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res8;
  longlong local_res18;
  undefined1 auStack_c8 [40];
  undefined1 *local_a0;
  undefined4 local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_28;
  uint local_1c;
  
  local_a0 = auStack_c8;
  local_res8 = param_1;
  puVar1 = auStack_c8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_a0;
  }
  local_a0 = puVar1;
  FUN_00410e60(local_res8,0);
  uVar3 = FUN_004dfb90(&PTR_FUN_0048d528,1);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  FUN_00411e10(DAT_02011618,0xffffffff);
  local_res18 = param_3;
  if (param_3 == 0) {
    local_res18 = *(longlong *)(DAT_02011618 + 0x10);
  }
  iVar4 = *(int *)(*(longlong *)(DAT_02011618 + 8) + 0x10);
  local_1c = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_38 = *(longlong *)(DAT_02011618 + 8);
      if (*(uint *)(local_38 + 0x10) <= local_1c) {
        FUN_00594f90();
      }
      local_28 = *(longlong *)(*(longlong *)(local_38 + 8) + (longlong)(int)local_1c * 8);
      cVar2 = FUN_0049f120(local_28,local_res18);
      if (cVar2 != '\0') {
        local_40 = *(longlong *)(local_res8 + 8);
        local_48 = local_28;
        local_4c = FUN_00597e50(local_40 + 8,&local_48);
      }
      local_1c = local_1c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (param_4 != '\0') {
    iVar4 = *(int *)(*(longlong *)(DAT_02011618 + 8) + 0x10);
    local_1c = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_68 = *(longlong *)(DAT_02011618 + 8);
        if (*(uint *)(local_68 + 0x10) <= local_1c) {
          FUN_00594f90();
        }
        local_28 = *(longlong *)(*(longlong *)(local_68 + 8) + (longlong)(int)local_1c * 8);
        if (*(char *)(local_28 + 0x20) != '\0') {
          local_70 = *(longlong *)(local_res8 + 8);
          local_78 = local_28;
          local_7c = FUN_00597e50(local_70 + 8,&local_78);
        }
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  *(longlong *)(local_res8 + 0x10) = local_res18;
  FUN_00412130(DAT_02011618);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

