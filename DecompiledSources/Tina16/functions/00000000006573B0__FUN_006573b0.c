/* Ghidra address: 006573b0 */
/* Ghidra symbol: FUN_006573b0 */


void FUN_006573b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 local_60 [16];
  undefined1 *local_50;
  longlong local_48;
  longlong local_38;
  undefined8 local_30;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_50 = auStack_98;
  puVar1 = auStack_98;
  if (((*(char *)(param_1 + 0x393) != '\0') &&
      (puVar1 = auStack_98, *(char *)(param_1 + 0x392) != '\0')) &&
     (puVar1 = auStack_98, *(longlong *)(param_1 + 0x340) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x340) + 0x40))(*(longlong **)(param_1 + 0x340),param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  if (*(longlong *)(param_1 + 0x370) != 0) {
    local_20 = 0;
    if ((param_3 != 0) &&
       (local_20 = FUN_004aeba0(*(longlong *)(param_1 + 0x370),param_3), local_20 < 0)) {
      local_20 = 0;
    }
    local_24 = *(int *)(*(longlong *)(param_1 + 0x370) + 0x10);
    if (local_20 < local_24) {
      do {
        local_38 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x370),local_20);
        if (((*(char *)(local_38 + 0xa9) != '\0') &&
            (((*(ushort *)(local_38 + 0x34) & 0x10) == 0 ||
             ((*(uint *)(local_38 + 0xa4) & 0x800) == 0)))) ||
           (((*(ushort *)(local_38 + 0x34) & 0x10) != 0 &&
            (((*(uint *)(local_38 + 0xa4) & 0x800) == 0 &&
             ((*(uint *)(local_38 + 0xa0) & 0x400) == 0)))))) {
          local_78 = *(int *)(local_38 + 0x94) + *(int *)(local_38 + 0x9c);
          FUN_004238d0(local_60,*(int *)(local_38 + 0x90),*(int *)(local_38 + 0x94),
                       *(int *)(local_38 + 0x90) + *(int *)(local_38 + 0x98));
          iVar2 = thunk_FUN_04177e28(param_2,local_60);
          if (iVar2 != 0) {
            if ((*(uint *)(param_1 + 0xa4) & 0x80) != 0) {
              *(uint *)(local_38 + 0xa4) = *(uint *)(local_38 + 0xa4) | 0x80;
            }
            local_1c = thunk_FUN_03b57162(param_2);
            FUN_0064ae10(param_2,*(undefined4 *)(local_38 + 0x90),*(undefined4 *)(local_38 + 0x94));
            local_78 = *(int *)(local_38 + 0x9c);
            FUN_00428be0(param_2,0,0,*(undefined4 *)(local_38 + 0x98));
            FUN_0064fca0(local_38,0xf,param_2,0);
            thunk_FUN_0402759f(param_2,local_1c);
            *(uint *)(local_38 + 0xa4) = *(uint *)(local_38 + 0xa4) & 0xffffff7f;
          }
        }
        local_20 = local_20 + 1;
      } while (local_20 < local_24);
    }
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x378) + 0x10);
    local_20 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_48 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),local_20);
        if (((*(char *)(local_48 + 0x390) != '\0') && ((*(uint *)(local_48 + 0xa0) & 0x10) != 0)) &&
           ((((*(ushort *)(local_48 + 0x34) & 0x10) == 0 && (*(char *)(local_48 + 0xa9) != '\0')) ||
            ((((*(ushort *)(local_48 + 0x34) & 0x10) != 0 &&
              ((*(uint *)(local_48 + 0xa0) & 0x400) == 0)) &&
             ((*(uint *)(local_48 + 0xa4) & 0x800) == 0)))))) {
          uVar3 = FUN_005fbf20(0xff000010);
          local_30 = thunk_FUN_0412d81c(uVar3);
          local_78 = *(int *)(local_48 + 0x94) + *(int *)(local_48 + 0x9c);
          FUN_004238d0(local_60,*(int *)(local_48 + 0x90) + -1,*(int *)(local_48 + 0x94) + -1,
                       *(int *)(local_48 + 0x90) + *(int *)(local_48 + 0x98));
          FUN_00429590(param_2,local_60,local_30);
          thunk_FUN_0416f828(local_30);
          uVar3 = FUN_005fbf20(0xff000014);
          local_30 = thunk_FUN_0412d81c(uVar3);
          local_78 = *(int *)(local_48 + 0x94) + *(int *)(local_48 + 0x9c) + 1;
          FUN_004238d0(local_60,*(int *)(local_48 + 0x90),*(int *)(local_48 + 0x94),
                       *(int *)(local_48 + 0x90) + *(int *)(local_48 + 0x98) + 1);
          FUN_00429590(param_2,local_60,local_30);
          thunk_FUN_0416f828(local_30);
        }
        local_20 = local_20 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

