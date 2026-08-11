/* Ghidra address: 017d7620 */
/* Ghidra symbol: FUN_017d7620 */


longlong FUN_017d7620(longlong param_1,char param_2,undefined4 param_3,undefined1 param_4,
                     longlong param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  int local_1c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  *(undefined4 *)(local_res8 + 8) = param_3;
  *(undefined1 *)(local_res8 + 0x94) = param_4;
  *(longlong *)(local_res8 + 0x10) = param_5;
  if (param_5 == 0) {
    *(undefined1 *)(local_res8 + 0x18) = 1;
    *(undefined8 *)(local_res8 + 0x30) = *(undefined8 *)(PTR_DAT_02001120 + 0xf8);
    *(undefined8 *)(local_res8 + 0x38) = *(undefined8 *)(PTR_DAT_02001120 + 0x100);
    *(undefined8 *)(local_res8 + 0x40) = *(undefined8 *)(PTR_DAT_02001120 + 0x1b0);
    *(undefined8 *)(local_res8 + 0x48) = 0x47d2ced32a16a1b1;
    *(undefined8 *)(local_res8 + 0x50) = 0x49e5e531a0a1c873;
  }
  else {
    *(undefined1 *)(local_res8 + 0x18) = *(undefined1 *)(param_5 + 0xe0);
    *(undefined8 *)(local_res8 + 0x30) = *(undefined8 *)(param_5 + 0x6d0);
    *(undefined8 *)(local_res8 + 0x38) = *(undefined8 *)(param_5 + 0x6d8);
    *(undefined8 *)(local_res8 + 0x40) = *(undefined8 *)(param_5 + 0x450);
    *(undefined8 *)(local_res8 + 0x48) = *(undefined8 *)(param_5 + 0x460);
    *(undefined8 *)(local_res8 + 0x50) = *(undefined8 *)(param_5 + 0x458);
  }
  if (*(char *)(local_res8 + 0x18) == '\0') {
    uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 8) * 8));
    *(undefined8 *)(local_res8 + 0x1b8) = uVar2;
    if (*(char *)(local_res8 + 0x94) == '\x01') {
      uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 8) * 8));
      *(undefined8 *)(local_res8 + 0x1c0) = uVar2;
    }
  }
  if (*(char *)(local_res8 + 0x18) == '\x01') {
    if (*(char *)(local_res8 + 0x94) == '\0') {
      uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 8) * 8));
      *(undefined8 *)(local_res8 + 0x1c8) = uVar2;
    }
    else {
      uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 8) << 4));
      *(undefined8 *)(local_res8 + 0x1c8) = uVar2;
    }
  }
  if (*(char *)(local_res8 + 0x18) == '\0') {
    uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 8) * 0x18));
    *(undefined8 *)(local_res8 + 0x20) = uVar2;
    uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 8) * 0x18));
    *(undefined8 *)(local_res8 + 0x28) = uVar2;
    uVar2 = FUN_004095c0((longlong)(*(int *)(local_res8 + 8) * 2));
    *(undefined8 *)(local_res8 + 0x58) = uVar2;
    uVar2 = FUN_004095c0((longlong)(*(int *)(local_res8 + 8) * 2));
    *(undefined8 *)(local_res8 + 0x60) = uVar2;
    uVar2 = FUN_004095c0((longlong)((*(int *)(local_res8 + 8) + 1) * 4));
    *(undefined8 *)(local_res8 + 0x88) = uVar2;
    uVar2 = FUN_004095c0((longlong)(*(int *)(local_res8 + 8) * 2));
    *(undefined8 *)(local_res8 + 0x68) = uVar2;
    uVar2 = FUN_004095c0((longlong)(*(int *)(local_res8 + 8) * 2));
    *(undefined8 *)(local_res8 + 0x70) = uVar2;
    uVar2 = FUN_004095c0((longlong)(*(int *)(local_res8 + 8) * 2));
    *(undefined8 *)(local_res8 + 0x78) = uVar2;
    uVar2 = FUN_004095c0((longlong)(*(int *)(local_res8 + 8) * 2));
    *(undefined8 *)(local_res8 + 0x80) = uVar2;
    iVar4 = *(int *)(local_res8 + 8) + -1;
    local_1c = 1;
    if (0 < iVar4) {
      do {
        lVar3 = (longlong)local_1c;
        local_30 = (undefined8 *)(*(longlong *)(local_res8 + 0x20) + lVar3 * 0x18);
        uVar2 = FUN_00409570(0x4b0);
        *local_30 = uVar2;
        uVar2 = FUN_017d7240(*(int *)(local_res8 + 8) * 2,0xff);
        local_30[1] = uVar2;
        *(undefined2 *)((longlong)local_30 + 0x14) = 0x32;
        local_38 = (undefined8 *)(*(longlong *)(local_res8 + 0x28) + lVar3 * 0x18);
        uVar2 = FUN_004095c0(100);
        *local_38 = uVar2;
        uVar2 = FUN_017d7240(*(int *)(local_res8 + 8) * 2,0xff);
        local_38[1] = uVar2;
        *(undefined2 *)((longlong)local_38 + 0x14) = 0x32;
        *(undefined2 *)(*(longlong *)(local_res8 + 0x68) + lVar3 * 2) = (undefined2)local_1c;
        *(undefined2 *)(*(longlong *)(local_res8 + 0x70) + lVar3 * 2) = (undefined2)local_1c;
        *(undefined2 *)(*(longlong *)(local_res8 + 0x78) + lVar3 * 2) = (undefined2)local_1c;
        *(undefined2 *)(*(longlong *)(local_res8 + 0x80) + lVar3 * 2) = (undefined2)local_1c;
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (*(longlong *)(local_res8 + 0x10) != 0) {
    *(undefined4 *)(*(longlong *)(local_res8 + 0x10) + 0x12c0) = 1;
  }
  if (*(char *)(local_res8 + 0x18) == '\x01') {
    thunk_FUN_04110bff(local_res8 + 0x1d0);
  }
  if (*(char *)(local_res8 + 0x18) == '\x02') {
    uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(local_res8 + 0xa0) = uVar2;
    FUN_004aef40(uVar2,*(undefined4 *)(local_res8 + 8));
    iVar4 = *(int *)(local_res8 + 8);
    local_1c = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_017d72c0(&DAT_017d51e8,1);
        FUN_004ae7e0(*(undefined8 *)(local_res8 + 0xa0),uVar2);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 8) * 4));
    *(undefined8 *)(local_res8 + 0xc0) = uVar2;
    thunk_FUN_0415743c(local_res8 + 0xe8);
    *(undefined8 *)(local_res8 + 0xe8) = *(undefined8 *)(PTR_DAT_02004010 + 0xf8);
    uVar2 = FUN_017d72c0(&DAT_017d51e8,1);
    *(undefined8 *)(local_res8 + 0x1b0) = uVar2;
    *(undefined4 *)(local_res8 + 0xb0) = 1;
    *(undefined4 *)(*(longlong *)(local_res8 + 0x10) + 0x12c0) = 2;
  }
  *(undefined1 *)(local_res8 + 0x92) = 0;
  *(undefined4 *)(local_res8 + 0x1d8) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

