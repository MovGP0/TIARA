/* Ghidra address: 00bf9930 */
/* Ghidra symbol: FUN_00bf9930 */


void FUN_00bf9930(longlong param_1,undefined8 *param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_128 [40];
  undefined1 *local_100;
  undefined1 local_f1;
  longlong local_f0;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  int local_d8;
  char local_d1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_a0;
  int local_94;
  int local_90;
  undefined8 local_8c;
  int local_7c;
  int local_78;
  undefined1 local_71;
  undefined1 local_68 [72];
  
  local_100 = auStack_128;
  local_a0 = 0;
  local_d0 = *param_2;
  local_c8 = param_2[1];
  FUN_00417580(local_68,&DAT_00bf6f40);
  local_78 = FUN_00c11080(param_1,param_3);
  local_7c = FUN_00c11080(param_1,param_4);
  local_71 = 0;
  FUN_00414b50(&local_a0,&LAB_00bf9d80);
  local_d1 = '\0';
  if (0 < *(int *)(param_1 + 0x51c)) {
    local_d8 = *(int *)(param_1 + 0x530) + *(int *)(param_1 + 0x51c) * *(int *)(param_1 + 0x4d4);
    if (((int)local_d0 <= local_d8) && (local_d8 <= (int)local_c8)) {
      local_d1 = '\x01';
      FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x78),
                   *(undefined4 *)(param_1 + 0x520));
      FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x78),1);
    }
  }
  local_e0 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
  if ((int)local_d0 < *(int *)(param_1 + 0x910) + 2) {
    local_e4 = *(int *)(param_1 + 0x910);
    local_e8 = local_e4;
    if (local_e4 < (int)local_d0) {
      local_e8 = (int)local_d0;
    }
    local_90 = (int)((ulonglong)local_d0 >> 0x20);
    _local_94 = CONCAT44(local_90,local_e8);
    local_8c._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
    local_8c = CONCAT44(local_8c._4_4_,local_e4 + 2);
    plVar1 = *(longlong **)(param_1 + 0x538);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x168))(plVar1);
    }
    uVar4 = FUN_00bf7050(auStack_128);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),uVar4);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))
              (*(longlong **)(param_1 + 0x490),&local_94);
    local_d0 = CONCAT44(local_d0._4_4_,(undefined4)local_8c);
  }
  if (local_78 <= local_7c) {
    FUN_00bf70d0(auStack_128);
    local_f0 = FUN_00bf2c10(param_1);
    local_f1 = *(undefined1 *)(*(longlong *)(local_f0 + 0x18) + 0x31);
    (**(code **)(**(longlong **)(param_1 + 0x620) + 0x60))(*(longlong **)(param_1 + 0x620),local_f1)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x620) + 0x30))(*(longlong **)(param_1 + 0x620),local_e0)
    ;
    FUN_00bf8d00(auStack_128);
    (**(code **)(**(longlong **)(param_1 + 0x620) + 0x38))(*(longlong **)(param_1 + 0x620));
  }
  local_8c = local_c8;
  uVar3 = local_8c;
  local_90 = ((param_4 - *(int *)(param_1 + 0x534)) + 1) * *(int *)(param_1 + 0x52c);
  local_94 = (int)local_d0;
  local_8c._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
  bVar2 = local_90 < local_8c._4_4_;
  local_8c = uVar3;
  if (bVar2) {
    plVar1 = *(longlong **)(param_1 + 0x538);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x168))(plVar1);
    }
    uVar4 = FUN_00bf7050(auStack_128);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),uVar4);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))
              (*(longlong **)(param_1 + 0x490),&local_94);
    if (local_d1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x490) + 200))
                (*(longlong **)(param_1 + 0x490),local_d8,local_90);
      (**(code **)(**(longlong **)(param_1 + 0x490) + 0xc0))
                (*(longlong **)(param_1 + 0x490),local_d8,local_8c._4_4_ + 1);
    }
  }
  FUN_00bf8270(auStack_128);
  FUN_00414480(&local_a0);
  FUN_00417740(local_68,&DAT_00bf6f40);
  return;
}

