/* Ghidra address: 00f46a40 */
/* Ghidra symbol: FUN_00f46a40 */


longlong FUN_00f46a40(longlong param_1,char param_2,longlong param_3,char param_4,longlong param_5,
                     undefined8 param_6,longlong param_7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_res8;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 *local_60;
  longlong local_50;
  int *local_48;
  int local_34;
  longlong local_30;
  int local_24;
  undefined8 local_20;
  
  local_60 = auStack_b8;
  local_res8 = param_1;
  puVar2 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_60;
  }
  local_60 = puVar2;
  FUN_00410e60(local_res8,0);
  *(longlong *)(local_res8 + 8) = param_3;
  if (param_3 == 0) {
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Nil in NodeMap.Create");
    FUN_004134c0(uVar6);
  }
  local_98 = PTR_DAT_02004010[0x814];
  local_90 = *PTR_DAT_020037e8;
  local_88 = PTR_DAT_02004010[0x815];
  local_80 = *PTR_DAT_02001560;
  local_78 = *PTR_DAT_02005310;
  local_70 = 0x1c7;
  FUN_0198d580(*(undefined8 *)(local_res8 + 8),local_res8 + 0x10,*PTR_DAT_02002480,
               PTR_DAT_02004010[0x816]);
  if (param_4 != '\0') {
    local_48 = (int *)(local_res8 + 0x10);
    if ((param_5 != 0) || (param_7 != 0)) {
      iVar4 = *(int *)(param_5 + 0x10);
      *local_48 = iVar4;
      *(int *)(local_res8 + 0x18) = iVar4;
      uVar1 = *(undefined4 *)(param_5 + 0x14);
      *(undefined4 *)(local_res8 + 0x14) = uVar1;
      *(undefined4 *)(local_res8 + 0x1c) = uVar1;
    }
    for (; local_30 = param_7, param_5 != 0; param_5 = *(longlong *)(param_5 + 0x20)) {
      local_24 = 0;
      do {
        lVar8 = (longlong)local_24;
        iVar4 = *(int *)(param_5 + 0x10 + lVar8 * 8);
        if (iVar4 < *local_48) {
          *local_48 = iVar4;
        }
        iVar4 = *(int *)(param_5 + 0x10 + lVar8 * 8);
        if (*(int *)(local_res8 + 0x18) < iVar4) {
          *(int *)(local_res8 + 0x18) = iVar4;
        }
        iVar4 = *(int *)(param_5 + 0x14 + lVar8 * 8);
        if (iVar4 < *(int *)(local_res8 + 0x14)) {
          *(int *)(local_res8 + 0x14) = iVar4;
        }
        iVar4 = *(int *)(param_5 + 0x14 + lVar8 * 8);
        if (*(int *)(local_res8 + 0x1c) < iVar4) {
          *(int *)(local_res8 + 0x1c) = iVar4;
        }
        local_24 = local_24 + 1;
      } while (local_24 != 2);
      local_24 = 2;
    }
    for (; local_20 = 0, local_30 != 0; local_30 = *(longlong *)(local_30 + 0x38)) {
      local_24 = 0;
      do {
        lVar8 = (longlong)local_24;
        iVar4 = *(int *)(local_30 + 0xc + lVar8 * 8);
        if (iVar4 < *local_48) {
          *local_48 = iVar4;
        }
        iVar4 = *(int *)(local_30 + 0xc + lVar8 * 8);
        if (*(int *)(local_res8 + 0x18) < iVar4) {
          *(int *)(local_res8 + 0x18) = iVar4;
        }
        iVar4 = *(int *)(local_30 + 0x10 + lVar8 * 8);
        if (iVar4 < *(int *)(local_res8 + 0x14)) {
          *(int *)(local_res8 + 0x14) = iVar4;
        }
        iVar4 = *(int *)(local_30 + 0x10 + lVar8 * 8);
        if (*(int *)(local_res8 + 0x1c) < iVar4) {
          *(int *)(local_res8 + 0x1c) = iVar4;
        }
        local_24 = local_24 + 1;
      } while (local_24 != 5);
      local_24 = 5;
    }
  }
  FUN_00b95880(local_res8 + 0x10,0x28,0x28);
  if (*(int *)(local_res8 + 0x10) < 0) {
    *(undefined4 *)(local_res8 + 0x10) = 0;
  }
  if (*(int *)(local_res8 + 0x14) < 0) {
    *(undefined4 *)(local_res8 + 0x14) = 0;
  }
  FUN_01b1cd00(local_res8 + 0x10,local_res8 + 0x14);
  FUN_01b1cd00(local_res8 + 0x18,local_res8 + 0x1c);
  uVar3 = *(int *)(local_res8 + 0x18) - *(int *)(local_res8 + 0x10);
  uVar7 = (int)uVar3 >> 0x1f;
  *(int *)(local_res8 + 0x20) = (int)((uVar3 ^ uVar7) - uVar7) / 8 + 1;
  uVar3 = *(int *)(local_res8 + 0x1c) - *(int *)(local_res8 + 0x14);
  uVar7 = (int)uVar3 >> 0x1f;
  iVar4 = (uVar3 ^ uVar7) - uVar7;
  iVar5 = iVar4 / 8 + 1;
  *(int *)(local_res8 + 0x24) = iVar5;
  if (0xfff0 < *(int *)(local_res8 + 0x20) * iVar5) {
    uVar6 = FUN_0044d490(&PTR_FUN_00434e60,
                         CONCAT71((uint7)((ulonglong)((longlong)iVar4 % 8) >> 8) & 0xffffff,1),
                         L"Grid is too big");
    FUN_004134c0(uVar6);
  }
  uVar6 = FUN_004095c0((longlong)(*(int *)(local_res8 + 0x20) * *(int *)(local_res8 + 0x24)));
  *(undefined8 *)(local_res8 + 0x28) = uVar6;
  FUN_0040d200(uVar6,(longlong)(*(int *)(local_res8 + 0x20) * *(int *)(local_res8 + 0x24)),0);
  *(undefined2 *)(local_res8 + 0x30) = 0;
  local_50 = *(longlong *)(local_res8 + 8);
  iVar4 = *(int *)(local_50 + 0x10);
  local_34 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar6 = FUN_00b94e60(local_50,local_34);
      FUN_00f463d0(auStack_b8,uVar6);
      local_34 = local_34 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

