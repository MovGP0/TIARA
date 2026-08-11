/* Ghidra address: 00b60b30 */
/* Ghidra symbol: FUN_00b60b30 */


void FUN_00b60b30(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  longlong local_70;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined1 *local_50;
  int local_48;
  undefined2 local_3a;
  longlong local_38;
  undefined4 local_2c;
  longlong local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_50 = auStack_98;
  local_58 = 0;
  local_38 = 0;
  iVar1 = FUN_00b19370(*(undefined8 *)(param_1 + 0x90));
  if (iVar1 != 0) {
    if (*(longlong *)(param_1 + 0x88) == 0) {
      FUN_00b5c860(param_1);
    }
    iVar1 = FUN_00b59a10();
    local_60 = iVar1 + -1;
    local_10 = 0;
    if (-1 < local_60) {
      do {
        local_60 = iVar1;
        FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_10);
        iVar1 = FUN_00b4e330();
        local_5c = iVar1 + -1;
        local_14 = 0;
        if (-1 < local_5c) {
          do {
            local_5c = iVar1;
            lVar2 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8),local_10);
            local_28 = FUN_00b4fc70(*(undefined8 *)(lVar2 + 0x10),local_14);
            FUN_00b4f280(local_28,&local_38);
            if (local_38 != 0) {
              FUN_00416880(&local_58,local_38);
              local_2c = FUN_0043fc00(local_58);
              FUN_00b19380(*(undefined8 *)(param_1 + 0x90),&local_38,local_2c);
              local_18 = (uint)*(ushort *)(local_28 + 0x48);
              local_1c = (uint)*(ushort *)(local_28 + 0x4a);
              local_3a = 0;
              uVar3 = FUN_00414df0(&local_38);
              FUN_00409a70(uVar3,&local_3a,2);
              local_48 = 0;
              if (local_38 != 0) {
                local_48 = *(int *)(local_38 + -4);
              }
              FUN_00415ad0(&local_38,local_38,3,local_48 + -2);
              local_78 = local_3a;
              local_70 = local_38;
              local_c = FUN_00b31150(*(undefined8 *)(param_1 + 0x88),(undefined2)local_10,
                                     (undefined2)local_18,(undefined1)local_1c);
              if (local_c == 0) {
                FUN_00b4f190(local_28,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x20));
              }
              if (local_c != 0) {
                if (*(char *)(param_1 + 0x34) == '\0') {
                  FUN_00b4f190(local_28,0);
                }
                else {
                  uVar3 = FUN_00b146c0(&PTR_FUN_00b141e0,1,0xd);
                  FUN_004134c0(uVar3);
                }
              }
            }
            local_14 = local_14 + 1;
            local_5c = local_5c + -1;
            iVar1 = local_5c;
          } while (local_5c != 0);
        }
        local_10 = local_10 + 1;
        local_60 = local_60 + -1;
        iVar1 = local_60;
      } while (local_60 != 0);
    }
  }
  FUN_00414480(&local_58);
  FUN_004144d0(&local_38);
  return;
}

