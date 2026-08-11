/* Ghidra address: 0060c660 */
/* Ghidra symbol: FUN_0060c660 */


void FUN_0060c660(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_128 [32];
  int *local_108;
  undefined4 *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_d0 [16];
  undefined1 *local_c0;
  undefined8 local_b0;
  longlong *local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  local_c0 = auStack_128;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005f92e8);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    local_a8 = param_2;
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    (**(code **)(*local_a8 + 0xe0))(local_a8,uVar2,uVar3);
    FUN_0060bbf0(local_a8,7);
    FUN_0060a2b0(local_a8,1);
    lVar6 = FUN_00609e10(local_a8);
    FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),0);
    plVar7 = (longlong *)FUN_00609e10(local_a8);
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    local_108._0_4_ = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004238d0(local_d0,0,0,uVar2);
    (**(code **)(*plVar7 + 0xa8))(plVar7,local_d0);
    uVar8 = FUN_00609e10(local_a8);
    uVar8 = FUN_005ffa40(uVar8);
    uVar9 = FUN_0060ce20(param_1);
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    local_108 = (int *)CONCAT44(local_108._4_4_,uVar2);
    local_100 = (undefined4 *)CONCAT44(local_100._4_4_,uVar3);
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 3;
    thunk_FUN_041a8a5c(uVar8,0,0,uVar9);
    local_94 = 0x2c;
    local_88 = 1;
    local_8c = (**(code **)(*param_1 + 0x60))(param_1);
    local_90 = (**(code **)(*param_1 + 0x48))(param_1);
    local_84 = 0;
    local_86 = 0x20;
    local_58 = (int *)FUN_00409570((longlong)(local_90 * 4 * local_8c));
    local_b0 = (**(code **)(*local_a8 + 0xe8))(local_a8);
    uVar8 = FUN_00609e10(local_a8);
    uVar8 = FUN_005ffa40(uVar8);
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    local_108 = local_58;
    local_100 = &local_94;
    local_f8 = 0;
    iVar4 = thunk_FUN_0416e0b3(uVar8,local_b0,0,uVar2);
    iVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar4 == iVar5) {
      uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      cVar1 = FUN_0060c600(auStack_128,local_58,uVar2,uVar3);
      if (cVar1 == '\0') {
        local_50 = (int *)FUN_00409570((longlong)(local_90 * 4 * local_8c));
        uVar8 = FUN_0060ce20(param_1);
        thunk_FUN_03ea2ad7(uVar8,local_48);
        uVar8 = FUN_00609e10(local_a8);
        uVar8 = FUN_005ffa40(uVar8);
        uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
        local_108 = local_50;
        local_100 = &local_94;
        local_f8 = 0;
        iVar4 = thunk_FUN_0416e0b3(uVar8,local_38,0,uVar2);
        iVar5 = (**(code **)(*param_1 + 0x48))(param_1);
        if (iVar4 == iVar5) {
          local_60 = local_58;
          local_68 = local_50;
          local_9c = 0;
          iVar4 = local_8c;
          if (-1 < local_8c + -1) {
            do {
              local_98 = 0;
              iVar5 = local_90;
              if (-1 < local_90 + -1) {
                do {
                  if (*local_68 == 0) {
                    *(undefined1 *)((longlong)local_60 + 3) = 0xff;
                  }
                  else {
                    *local_60 = 0;
                  }
                  local_60 = local_60 + 1;
                  local_68 = local_68 + 1;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          uVar8 = (**(code **)(*local_a8 + 0xe8))(local_a8);
          uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
          local_108 = local_58;
          local_100 = &local_94;
          local_f8 = 0;
          thunk_FUN_040d2f89(0,uVar8,0,uVar2);
        }
        thunk_FUN_0416f828(local_38);
        thunk_FUN_0416f828(local_30);
        FUN_004095f0(local_50);
      }
    }
    FUN_004095f0(local_58);
  }
  return;
}

