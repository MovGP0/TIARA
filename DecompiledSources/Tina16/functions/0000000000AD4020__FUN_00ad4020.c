/* Ghidra address: 00ad4020 */
/* Ghidra symbol: FUN_00ad4020 */


char FUN_00ad4020(longlong param_1)

{
  short sVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_9b;
  short local_9a;
  longlong local_98;
  char local_8d;
  int local_8c;
  longlong local_88;
  int local_80;
  int local_7c;
  longlong local_78;
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  int local_58;
  int local_54;
  undefined1 local_4d;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  int *local_38;
  longlong local_30;
  char local_21;
  undefined8 local_20 [2];
  
  local_c0 = auStack_108;
  local_30 = 0;
  local_38 = (int *)0x0;
  local_40 = 0;
  local_20[0] = 0;
  local_21 = '\0';
  local_4c = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8) + 0x28);
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x7c) = local_4c;
  FUN_00ad1170(*(undefined8 *)(param_1 + 0x30));
  FUN_00414480(&local_30);
  uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x30) + 0x20);
  if (uVar4 < 0x40) {
    if ((uVar4 == 0x3f) || (uVar4 == 0x21)) goto LAB_00ad411a;
    if (uVar4 != 0x2f) goto LAB_00ad41bc;
    local_21 = '\x01';
    FUN_00ad1170(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    if ((0x19 < uVar4 - 0x41) && (0x19 < uVar4 - 0x61)) {
LAB_00ad41bc:
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x44) = 2;
      FUN_00a74c70(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28),0x3c,local_4c);
      goto LAB_00ad4694;
    }
LAB_00ad411a:
    local_21 = '\0';
    local_54 = 0;
    if (local_30 != 0) {
      local_54 = *(int *)(local_30 + -4);
    }
    FUN_004169f0(&local_30,local_54 + 1);
    local_60 = FUN_00414de0(&local_30);
    local_58 = 0;
    if (local_30 != 0) {
      local_58 = *(int *)(local_30 + -4);
    }
    *(undefined2 *)(local_60 + -2 + (longlong)local_58 * 2) =
         *(undefined2 *)(*(longlong *)(param_1 + 0x30) + 0x20);
    FUN_00ad1170(*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x44) = 1;
  while( true ) {
    while (uVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x30) + 0x20), uVar4 < 0x41) {
      if (uVar4 != 0x2f) {
        if (uVar4 - 0x30 < 10) goto LAB_00ad4321;
        goto code_r0x00ad43c0;
      }
      local_64 = 0;
      if (local_30 != 0) {
        local_64 = *(int *)(local_30 + -4);
      }
      if (0 < local_64) goto code_r0x00ad43c0;
      local_68 = 0;
      if (local_30 != 0) {
        local_68 = *(int *)(local_30 + -4);
      }
      FUN_004169f0(&local_30,local_68 + 1);
      local_78 = FUN_00414de0(&local_30);
      local_6c = 0;
      if (local_30 != 0) {
        local_6c = *(int *)(local_30 + -4);
      }
      *(undefined2 *)(local_78 + -2 + (longlong)local_6c * 2) =
           *(undefined2 *)(*(longlong *)(param_1 + 0x30) + 0x20);
      FUN_00ad1170(*(undefined8 *)(param_1 + 0x30));
    }
    if (((0x19 < uVar4 - 0x41) && (uVar4 != 0x5f)) && (0x19 < uVar4 - 0x61)) break;
LAB_00ad4321:
    local_7c = 0;
    if (local_30 != 0) {
      local_7c = *(int *)(local_30 + -4);
    }
    FUN_004169f0(&local_30,local_7c + 1);
    local_88 = FUN_00414de0(&local_30);
    local_80 = 0;
    if (local_30 != 0) {
      local_80 = *(int *)(local_30 + -4);
    }
    *(undefined2 *)(local_88 + -2 + (longlong)local_80 * 2) =
         *(undefined2 *)(*(longlong *)(param_1 + 0x30) + 0x20);
    FUN_00ad1170(*(undefined8 *)(param_1 + 0x30));
  }
code_r0x00ad43c0:
  local_8c = 0;
  if (local_30 != 0) {
    local_8c = *(int *)(local_30 + -4);
  }
  if (0 < local_8c) {
    local_44 = 0xffffffff;
    FUN_00414480(local_20);
    FUN_0043e5a0(local_20,local_30);
    local_8d = (**(code **)(**(longlong **)PTR_DAT_020016b8 + 0x140))
                         (*(longlong **)PTR_DAT_020016b8,local_20[0],&local_44);
    FUN_00414480(local_20);
    if (local_8d != '\0') {
      if (local_21 == '\0') {
        lVar5 = (**(code **)(**(longlong **)PTR_DAT_020016b8 + 0x30))
                          (*(longlong **)PTR_DAT_020016b8,local_44);
        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x44) = *(undefined1 *)(lVar5 + 8);
      }
      else {
        lVar5 = (**(code **)(**(longlong **)PTR_DAT_020016b8 + 0x30))
                          (*(longlong **)PTR_DAT_020016b8,local_44);
        cVar3 = *(char *)(lVar5 + 9);
        *(char *)(*(longlong *)(param_1 + 0x30) + 0x44) = cVar3;
        if (cVar3 == '\a') {
          *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x44) = 1;
        }
      }
    }
  }
  local_98 = *(longlong *)(param_1 + 0x30);
  while( true ) {
    local_9a = *(short *)(local_98 + 0x20);
    if ((((ushort)(local_9a - 9U) < 2) || ((ushort)(local_9a - 0xcU) < 2)) || (local_9a == 0x20)) {
      local_9b = '\x01';
    }
    else {
      local_9b = '\0';
    }
    if (local_9b == '\0') break;
    FUN_00ad1170(local_98);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  while( true ) {
    uVar6 = FUN_00414480(&local_38);
    uVar7 = FUN_00414480(&local_40);
    local_e8 = &local_48;
    cVar3 = FUN_00ad38d0(auStack_108,&local_4d,uVar6,uVar7);
    if (cVar3 == '\0') break;
    local_a8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0xe8);
    local_b0 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x48);
    lVar5 = FUN_004aeac0(local_a8,*(int *)(local_a8 + 0x10) + -1);
    local_e8 = local_38;
    local_e0 = local_40;
    local_d8 = *(undefined4 *)(lVar5 + 0x70);
    local_b8 = FUN_00a723e0(&DAT_00a68e68,1,local_4d,(double)local_48);
    FUN_004ae7e0(local_b0,local_b8);
  }
  while (sVar1 = *(short *)(*(longlong *)(param_1 + 0x30) + 0x20), sVar1 != 0) {
    if (sVar1 == 0x2f) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x45) = 1;
    }
    else if (sVar1 == 0x3e) break;
    FUN_00ad1170(*(undefined8 *)(param_1 + 0x30));
  }
  bVar8 = *(char *)(*(longlong *)(param_1 + 0x30) + 0x44) - 0x10;
  if (bVar8 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x30) >> 8),1) <<
             (bVar8 & 0x1f) & 0xa0U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (!bVar9) {
    FUN_00ad1170(*(undefined8 *)(param_1 + 0x30));
  }
LAB_00ad4694:
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  return local_21;
}

