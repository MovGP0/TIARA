/* Ghidra address: 0068cdd0 */
/* Ghidra symbol: FUN_0068cdd0 */


void FUN_0068cdd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_148 [32];
  int local_128;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 *local_100;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 *local_60;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_30;
  
  local_100 = auStack_148;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x4a0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar2 == 0) {
    local_30 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
    FUN_005fdab0(local_30,*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 200));
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe0))(*(longlong **)(param_1 + 0x30),&local_110)
    ;
    uVar3 = FUN_005fdb10(local_30);
    thunk_FUN_03984819(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),&local_110,uVar3);
    FUN_00410f20(local_30);
  }
  else {
    local_40 = &local_b0;
    local_60 = &local_d0;
    local_50[0] = 0xbc2b;
    local_48 = FUN_0065b870(*(undefined8 *)(param_1 + 0x30));
    local_b0 = 2;
    local_a4 = 1;
    local_a0 = 0;
    local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8);
    local_ac = FUN_0065b870(*(undefined8 *)(param_1 + 0x30));
    local_98 = FUN_0065b870(*(undefined8 *)(param_1 + 0x30));
    local_70[0] = 0xbc2c;
    local_68 = FUN_0065b870(*(undefined8 *)(param_1 + 0x30));
    local_d0 = 2;
    local_cc = FUN_0065b870(*(undefined8 *)(param_1 + 0x30));
    local_e4 = 0;
    local_e8 = FUN_0068bee0(*(undefined8 *)(param_1 + 0x30));
    thunk_FUN_041d932d(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),local_e0);
    local_ec = *(int *)(*(longlong *)(param_1 + 0x30) + 0x9c);
    local_f0 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x98);
    local_f8 = FUN_0068bbb0(*(undefined8 *)(param_1 + 0x30));
    if (local_e4 < local_ec) {
      do {
        local_c8 = local_e8;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x4a0);
        iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (local_e8 < iVar2) {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x4a0);
          local_b8 = (**(code **)(*plVar1 + 0x30))(plVar1,local_e8);
        }
        local_c4 = local_f0;
        local_c0 = local_f8;
        local_78 = local_b8;
        local_a8 = local_e8;
        (**(code **)(**(longlong **)(param_1 + 0x30) + -0x40))
                  (*(longlong **)(param_1 + 0x30),local_70);
        if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x4cc) == '\0') {
          local_f4 = local_f8;
        }
        else {
          local_f4 = local_c0;
        }
        local_128 = local_e4 + local_f4;
        FUN_004238d0(&local_110,0,local_e4,local_c4);
        local_88 = local_110;
        uStack_80 = uStack_108;
        (**(code **)(**(longlong **)(param_1 + 0x30) + -0x40))
                  (*(longlong **)(param_1 + 0x30),local_50);
        local_e4 = local_e4 + local_f4;
        local_e8 = local_e8 + 1;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x4a0);
        iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      } while ((local_e8 < iVar2) && (local_e4 < local_ec));
    }
  }
  return;
}

