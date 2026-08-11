/* Ghidra address: 01bd8850 */
/* Ghidra symbol: FUN_01bd8850 */


void FUN_01bd8850(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 *local_70;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 *local_58;
  undefined1 *local_50;
  longlong local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_70 = auStack_c8;
  local_a8._0_4_ = param_5;
  FUN_0065aa90(param_1,param_2,param_3,param_4);
  if (*(char *)(param_1 + 0xa9) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x88))
              (*(longlong **)(param_1 + 0x4a0),*(undefined4 *)(param_1 + 0x98));
    (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x70))
              (*(longlong **)(param_1 + 0x4a0),*(undefined4 *)(param_1 + 0x9c));
    uVar3 = thunk_FUN_0417695f();
    local_30 = thunk_FUN_040ef593(uVar3);
    uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4a0));
    uVar3 = FUN_005ffa40(uVar3);
    local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(param_1 + 0x9c));
    local_a0 = local_30;
    local_98 = *(undefined4 *)(param_1 + 0x90);
    local_90 = *(undefined4 *)(param_1 + 0x94);
    local_88 = 0xcc0020;
    thunk_FUN_0415fcd2(uVar3,0,0,*(undefined4 *)(param_1 + 0x98));
    uVar3 = thunk_FUN_0417695f();
    thunk_FUN_041a9b5c(uVar3,local_30);
    if (*(char *)(param_1 + 0x4a8) == '\0') {
      iVar5 = *(int *)(param_1 + 0x9c);
      local_38 = 0;
      if (-1 < iVar5 + -1) {
        do {
          local_40 = FUN_0060a050(*(undefined8 *)(param_1 + 0x4a0),local_38);
          iVar6 = *(int *)(param_1 + 0x98);
          local_34 = 0;
          if (-1 < iVar6 + -1) {
            do {
              if (-1 < local_38 - local_34) {
                lVar4 = (longlong)local_34;
                local_50 = (undefined1 *)(local_40 + lVar4 * 3);
                local_59 = local_50[2];
                local_5a = local_50[1];
                local_5b = *local_50;
                uVar2 = (uint)CONCAT12(local_5b,CONCAT11(local_5a,local_59));
                *(uint *)(param_1 + 0x4ac) = uVar2;
                local_a8 = param_1 + 0x4b4;
                FUN_01bd8780(auStack_c8,uVar2,param_1 + 0x4b0,param_1 + 0x4b2);
                if (0x39 < *(ushort *)(param_1 + 0x4b2)) {
                  iVar1 = *(int *)(param_1 + 0x98);
                  if (iVar1 < local_38) {
                    if (local_38 < *(int *)(param_1 + 0x9c)) {
                      FUN_01bd8720(auStack_c8,local_40 + lVar4 * 3,local_34 * 0xf + -0x3a);
                    }
                    else {
                      FUN_01bd8720(auStack_c8,local_40 + lVar4 * 3,
                                   (iVar1 - local_34) * -0xf +
                                   ((*(int *)(param_1 + 0x9c) - local_38) + -8) * -0xf + -0x3a);
                    }
                  }
                  else {
                    FUN_01bd8720(auStack_c8,local_40 + lVar4 * 3,
                                 local_34 * 0xf + (iVar1 - local_38) * 10 + -0x3a);
                  }
                }
              }
              local_34 = local_34 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_38 = local_38 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    else if (*(char *)(param_1 + 0x4a8) == '\x01') {
      iVar5 = *(int *)(param_1 + 0x9c);
      local_38 = 0;
      if (-1 < iVar5 + -1) {
        do {
          local_40 = FUN_0060a050(*(undefined8 *)(param_1 + 0x4a0),local_38);
          iVar6 = (*(int *)(param_1 + 0x98) - local_38) + -1;
          local_34 = local_38;
          if (local_38 <= iVar6) {
            iVar6 = (iVar6 - local_38) + 1;
            do {
              lVar4 = (longlong)local_34;
              local_58 = (undefined1 *)(local_40 + lVar4 * 3);
              local_5c = local_58[2];
              local_5d = local_58[1];
              local_5e = *local_58;
              uVar2 = (uint)CONCAT12(local_5e,CONCAT11(local_5d,local_5c));
              *(uint *)(param_1 + 0x4ac) = uVar2;
              local_a8 = param_1 + 0x4b4;
              FUN_01bd8780(auStack_c8,uVar2,param_1 + 0x4b0,param_1 + 0x4b2);
              if (0x39 < *(ushort *)(param_1 + 0x4b2)) {
                iVar1 = *(int *)(param_1 + 0x9c);
                if (iVar1 < local_34) {
                  if (local_34 < *(int *)(param_1 + 0x98) - iVar1) {
                    FUN_01bd8720(auStack_c8,local_40 + lVar4 * 3,local_38 * 0xf + -0x3a);
                  }
                  else {
                    FUN_01bd8720(auStack_c8,local_40 + lVar4 * 3,
                                 (iVar1 - local_38) * -0xf +
                                 ((*(int *)(param_1 + 0x98) - local_34) + -8) * -0xf + -0x3a);
                  }
                }
                else {
                  FUN_01bd8720(auStack_c8,local_40 + lVar4 * 3,
                               local_38 * 0xf + (iVar1 - local_34) * 10 + -0x3a);
                }
              }
              local_34 = local_34 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          local_38 = local_38 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return;
}

