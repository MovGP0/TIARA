/* Ghidra address: 0074aff0 */
/* Ghidra symbol: FUN_0074aff0 */


void FUN_0074aff0(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  undefined1 auStack_e8 [32];
  int local_c8;
  int local_c0;
  int local_b8;
  undefined4 local_b0;
  undefined1 *local_a0;
  longlong *local_98;
  int local_88;
  int local_84 [15];
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_a0 = auStack_e8;
  if ((*(int *)(*(longlong *)(param_1 + 0x498) + 0x10) != 0) && (*(char *)(param_1 + 0x4b0) == '\0')
     ) {
    local_40 = thunk_FUN_040ef593(0);
    uVar4 = FUN_005fc8c0(*(undefined8 *)(param_1 + 0xb8));
    local_48 = thunk_FUN_041a19a1(local_40,uVar4);
    thunk_FUN_04172119(local_40,local_84);
    thunk_FUN_041a19a1(local_40,local_48);
    thunk_FUN_041a9b5c(0,local_40);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x498) + 0x10);
    local_28 = *(int *)(param_1 + 0x4ac);
    local_24 = (iVar6 + local_28 + -1) / local_28;
    local_28 = (*(int *)(param_1 + 0x98) + -10) / local_28;
    local_34 = (*(int *)(param_1 + 0x9c) - local_84[0]) + -5;
    local_2c = local_34 / local_24;
    uVar1 = (ulonglong)(uint)((int)((longlong)local_34 % (longlong)local_24) >> 0x1f) << 0x20 |
            (longlong)local_34 % (longlong)local_24 & 0xffffffffU;
    local_30 = local_84[0] + (int)((longlong)uVar1 / 2) + 1;
    local_20 = thunk_FUN_03a7cbba(iVar6,(longlong)uVar1 % 2 & 0xffffffff);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x498) + 0x10);
    local_34 = 0;
    if (-1 < iVar6 + -1) {
      do {
        local_98 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x498),local_34);
        (**(code **)(*local_98 + 0x140))(local_98,*(undefined1 *)(param_1 + 0xb1));
        local_88 = (local_34 / local_24) * local_28 + 8;
        pcVar5 = (code *)FUN_00411550(local_98,CONCAT62((uint6)((ulonglong)
                                                                ((longlong)local_34 %
                                                                (longlong)local_24) >> 0x10) &
                                                        0xffff,0xffc5));
        cVar2 = (*pcVar5)(local_98);
        if (cVar2 != '\0') {
          iVar3 = FUN_0064d0b0(param_1);
          local_88 = (iVar3 - local_88) - local_28;
        }
        uVar4 = FUN_0065b870(local_98);
        local_c8 = (local_34 % local_24) * local_2c + local_30;
        local_c0 = local_28;
        local_b8 = local_2c;
        local_b0 = 0x14;
        local_20 = thunk_FUN_041c80a8(local_20,uVar4,0);
        FUN_0064dbe0(local_98,1);
        local_34 = local_34 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    thunk_FUN_040267d3(local_20);
  }
  return;
}

