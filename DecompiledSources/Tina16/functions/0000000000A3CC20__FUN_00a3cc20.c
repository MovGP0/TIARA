/* Ghidra address: 00a3cc20 */
/* Ghidra symbol: FUN_00a3cc20 */


void FUN_00a3cc20(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_90 = 0;
  if ((param_2 < 1) || (param_3 < 1)) {
    FUN_0041ddd0(&local_90,PTR_PTR_02005c70);
    FUN_00a39bd0(param_1,&PTR_FUN_00a2e5b8,local_90);
  }
  else {
    local_20 = FUN_00a39e90(param_1);
    local_38 = thunk_FUN_04137b5f(*(undefined8 *)(local_20 + 0x30));
    *(int *)(local_20 + 0x48) = param_2;
    *(int *)(local_20 + 0x4c) = param_3;
    local_a8 = 0;
    local_a0 = 0;
    local_30 = thunk_FUN_041c0f30(local_38,local_20 + 0x44,0,&local_40);
    thunk_FUN_041a19a1(local_38,local_30);
    FUN_005ffb10(param_1[0x29],local_38);
    uVar1 = (longlong)(int)((uint)*(ushort *)(local_20 + 0x52) * param_2 + 0x1f) &
            0xffffffffffffffe0;
    local_28 = (int)((longlong)uVar1 / 8);
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1,(longlong)uVar1 % 8 & 0xffffffff);
    iVar2 = FUN_00a3cbe0(auStack_c8,param_3 + -1,iVar2 + -1);
    local_24 = 0;
    if (-1 < iVar2) {
      iVar2 = iVar2 + 1;
      do {
        local_60 = FUN_00a3c240(param_1,local_24);
        iVar3 = FUN_00a3cbe0(auStack_c8,local_28,*(undefined4 *)(local_20 + 0x498));
        local_68 = (longlong)iVar3;
        FUN_00409a70(local_60,(local_40 + (param_3 + -1) * local_28) -
                              (longlong)(local_24 * local_28),local_68);
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if ((*(char *)(local_20 + 0x491) == '\x06') || (*(char *)(local_20 + 0x491) == '\x04')) {
      local_48 = FUN_004095c0((longlong)(param_2 * param_3));
      FUN_0040d200(local_48,(longlong)(param_2 * param_3),0xff);
      iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      iVar2 = FUN_00a3cbe0(auStack_c8,param_3 + -1,iVar2 + -1);
      local_24 = 0;
      if (-1 < iVar2) {
        iVar2 = iVar2 + 1;
        do {
          local_70 = FUN_00a3c1b0(param_1,local_24);
          uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
          iVar3 = FUN_00a3cbe0(auStack_c8,param_2,uVar4);
          local_78 = (longlong)iVar3;
          FUN_00409a70(local_70,local_48 + local_24 * param_2,local_78);
          local_24 = local_24 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_004095f0(*(undefined8 *)(local_20 + 0x480));
      *(longlong *)(local_20 + 0x480) = local_48;
    }
    if (*(char *)(local_20 + 0x490) == '\x10') {
      local_50 = FUN_004095c0((longlong)(param_2 * param_3));
      FUN_0040d200(local_50,(longlong)(param_2 * param_3),0);
      iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      iVar2 = FUN_00a3cbe0(auStack_c8,param_3 + -1,iVar2 + -1);
      local_24 = 0;
      if (-1 < iVar2) {
        iVar2 = iVar2 + 1;
        do {
          local_80 = FUN_00a3c1f0(param_1,local_24);
          uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
          iVar3 = FUN_00a3cbe0(auStack_c8,param_2,uVar4);
          local_88 = (longlong)iVar3;
          FUN_00409a70(local_80,local_50 + local_24 * param_2,local_88);
          local_24 = local_24 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_004095f0(*(undefined8 *)(local_20 + 0x470));
      *(longlong *)(local_20 + 0x470) = local_50;
    }
    thunk_FUN_0416f828(*(undefined8 *)(local_20 + 0x28));
    thunk_FUN_041a2fd8(*(undefined8 *)(local_20 + 0x30));
    *(int *)(local_20 + 0x498) = local_28;
    *(int *)(local_20 + 0x488) = param_2;
    *(int *)(local_20 + 0x48c) = param_3;
    *(longlong *)(local_20 + 0x478) = local_40;
    *(undefined8 *)(local_20 + 0x28) = local_30;
    *(undefined8 *)(local_20 + 0x30) = local_38;
  }
  FUN_00414480(&local_90);
  return;
}

