/* Ghidra address: 0180e4b0 */
/* Ghidra symbol: FUN_0180e4b0 */


void FUN_0180e4b0(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_40._0_4_ = (int)uVar2;
  local_48._0_4_ = (int)uVar1;
  iVar4 = (int)local_40 - (int)local_48;
  local_40._4_4_ = (int)(uVar2 >> 0x20);
  local_48._4_4_ = (int)(uVar1 >> 0x20);
  iVar5 = local_40._4_4_ - local_48._4_4_;
  uVar6 = iVar4 / 2;
  local_48 = uVar1;
  local_40 = uVar2;
  if (*(char *)(param_1 + 0x90) != '\0') {
    if (*(char *)(param_1 + 0x88) == '\0') {
      FUN_0180e4a0(param_1,&local_48,&local_40);
    }
    else {
      FUN_0180e4a0(param_1,(longlong)&local_48 + 4,(longlong)&local_40 + 4);
    }
  }
  uVar3 = (int)uVar6 >> 0x1f;
  if (*(char *)(param_1 + 0x88) == '\0') {
    local_70 = FUN_00423990((int)local_48 + iVar4 * *(int *)(param_1 + 0x3c),local_48._4_4_ + uVar6)
    ;
    local_68 = FUN_00423990((int)local_48 + (iVar4 - uVar6) * *(int *)(param_1 + 0x3c),
                            local_48._4_4_);
    iVar7 = iVar5 - uVar6;
    local_60 = FUN_00423990((int)local_48 + iVar7 * *(int *)(param_1 + 0x3c),
                            local_48._4_4_ + *(int *)(param_1 + 0x98));
    local_58 = FUN_00423990((int)local_48 +
                            (iVar5 - *(int *)(param_1 + 0x98)) * *(int *)(param_1 + 0x3c),
                            local_48._4_4_ + uVar6);
    local_50 = FUN_00423990((int)local_48 + iVar4 * *(int *)(param_1 + 0x3c),local_48._4_4_ + uVar6)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0xd8))
              (*(longlong **)(param_1 + 0x70),&local_70,4);
    local_70 = FUN_00423990((int)local_48 + iVar5 * *(int *)(param_1 + 0x3c),
                            (local_48._4_4_ + iVar4) - uVar6);
    local_68 = FUN_00423990((int)local_48 + iVar7 * *(int *)(param_1 + 0x3c),local_48._4_4_ + iVar4)
    ;
    local_60 = FUN_00423990((int)local_48 + iVar7 * *(int *)(param_1 + 0x3c),
                            (local_48._4_4_ + iVar4) - *(int *)(param_1 + 0x98));
    local_58 = FUN_00423990((int)local_48 +
                            (iVar5 - *(int *)(param_1 + 0x98)) * *(int *)(param_1 + 0x3c),
                            (local_48._4_4_ + iVar4) - ((uVar6 ^ uVar3) - uVar3));
    local_50 = FUN_00423990((int)local_48 + iVar5 * *(int *)(param_1 + 0x3c),
                            (local_48._4_4_ + iVar4) - uVar6);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0xd8))
              (*(longlong **)(param_1 + 0x70),&local_70,4);
  }
  else {
    local_70 = FUN_00423990((int)local_48 + uVar6,local_48._4_4_ + iVar5 * *(int *)(param_1 + 0x3c))
    ;
    iVar7 = iVar5 - uVar6;
    local_68 = FUN_00423990(local_48 & 0xffffffff,local_48._4_4_ + iVar7 * *(int *)(param_1 + 0x3c))
    ;
    local_60 = FUN_00423990(local_48 & 0xffffffff,
                            local_48._4_4_ +
                            (iVar7 - *(int *)(param_1 + 0x98)) * *(int *)(param_1 + 0x3c));
    local_58 = FUN_00423990((int)local_48 + uVar6,
                            local_48._4_4_ +
                            (iVar5 - *(int *)(param_1 + 0x98)) * *(int *)(param_1 + 0x3c));
    local_50 = FUN_00423990((int)local_48 + uVar6,local_48._4_4_ + iVar5 * *(int *)(param_1 + 0x3c))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0xd8))
              (*(longlong **)(param_1 + 0x70),&local_70,4);
    local_70 = FUN_00423990(((int)local_48 + iVar4) - uVar6,
                            local_48._4_4_ + iVar5 * *(int *)(param_1 + 0x3c));
    local_68 = FUN_00423990((int)local_48 + iVar4,local_48._4_4_ + iVar7 * *(int *)(param_1 + 0x3c))
    ;
    local_60 = FUN_00423990((int)local_48 + iVar4,
                            local_48._4_4_ +
                            (iVar7 - *(int *)(param_1 + 0x98)) * *(int *)(param_1 + 0x3c));
    iVar7 = (uVar6 ^ uVar3) - uVar3;
    local_58 = FUN_00423990(((int)local_48 + iVar4) - iVar7,
                            local_48._4_4_ +
                            (iVar5 - *(int *)(param_1 + 0x98)) * *(int *)(param_1 + 0x3c));
    local_50 = FUN_00423990(((int)local_48 + iVar4) - iVar7,
                            local_48._4_4_ + iVar5 * *(int *)(param_1 + 0x3c));
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0xd8))
              (*(longlong **)(param_1 + 0x70),&local_70,4);
  }
  return;
}

