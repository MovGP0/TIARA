/* Ghidra address: 005a17d0 */
/* Ghidra symbol: FUN_005a17d0 */


void FUN_005a17d0(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_78 [36];
  int local_54;
  undefined1 *local_50;
  char local_41;
  longlong *local_40;
  uint local_34;
  longlong local_30;
  undefined1 local_28 [16];
  longlong local_18;
  longlong local_10;
  
  local_50 = auStack_78;
  FUN_00417580(local_28,&DAT_0059bd38);
  cVar2 = FUN_005a46d0(*(undefined8 *)(param_1 + 8),param_2,&local_30);
  if (cVar2 != '\0') {
    local_54 = *(int *)(local_30 + 0x10) + -1;
    local_34 = 0;
    iVar1 = *(int *)(local_30 + 0x10);
    if (-1 < local_54) {
      do {
        local_54 = iVar1;
        FUN_00417740(local_28,&DAT_0059bd38);
        if (*(uint *)(local_30 + 0x10) <= local_34) {
          FUN_00594f90();
        }
        FUN_00417c40(local_28,*(longlong *)(local_30 + 8) + (longlong)(int)local_34 * 0x20,
                     &DAT_0059bd38);
        local_40 = &local_18;
        if ((local_10 == param_3[1]) && (local_18 == *param_3)) {
          local_41 = '\x01';
        }
        else {
          local_41 = '\0';
        }
        FUN_00417740(local_28,&DAT_0059bd38);
        if (local_41 != '\0') {
          FUN_005a1c80(local_30,local_34,param_4);
          break;
        }
        local_34 = local_34 + 1;
        local_54 = local_54 + -1;
        iVar1 = local_54;
      } while (local_54 != 0);
    }
  }
  FUN_00417740(local_28,&DAT_0059bd38);
  return;
}

