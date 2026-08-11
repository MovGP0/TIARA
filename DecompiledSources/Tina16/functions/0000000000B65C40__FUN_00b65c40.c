/* Ghidra address: 00b65c40 */
/* Ghidra symbol: FUN_00b65c40 */


void FUN_00b65c40(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined1 local_3b;
  
  local_54 = 0;
  FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
               *(undefined4 *)(param_1 + 0x48));
  iVar1 = FUN_00b573b0();
  local_50 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                           *(undefined4 *)(param_1 + 0x48));
      lVar4 = FUN_00b57390(*(undefined8 *)(lVar4 + 0x28),local_50);
      if (*(char *)(lVar4 + 0x20) != '\0') {
        lVar4 = FUN_00b598d0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                             *(undefined4 *)(param_1 + 0x48));
        uVar5 = FUN_00b57390(*(undefined8 *)(lVar4 + 0x28),local_50);
        iVar2 = FUN_00b22360(uVar5);
        local_54 = local_54 + iVar2;
      }
      local_50 = local_50 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_54 != 0) {
    local_44 = 0;
    iVar1 = 0;
    if (local_54 < 0x400) {
      local_48 = local_54;
    }
    else {
      local_48 = 0x400;
    }
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xe5);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
                 CONCAT22((short)((uint)(local_48 * 8) >> 0x10),(short)(local_48 * 8) + 2));
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_48);
    FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                 *(undefined4 *)(param_1 + 0x48));
    iVar2 = FUN_00b573b0();
    local_50 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar4 = FUN_00b598d0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                             *(undefined4 *)(param_1 + 0x48));
        lVar4 = FUN_00b57390(*(undefined8 *)(lVar4 + 0x28),local_50);
        if (*(char *)(lVar4 + 0x20) != '\0') {
          iVar3 = FUN_00b22360();
          local_4c = 0;
          if (-1 < iVar3 + -1) {
            do {
              if (iVar1 == local_48) {
                local_44 = local_44 + iVar1;
                iVar1 = 0;
                local_48 = local_54 - local_44;
                if (0x3ff < local_48) {
                  local_48 = 0x400;
                }
                FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0xe5);
                FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),
                             CONCAT22((short)((uint)(local_48 * 8) >> 0x10),
                                      (short)(local_48 * 8) + 2));
                FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_48);
              }
              FUN_00b22330(lVar4,&local_40,local_4c);
              FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_40);
              FUN_00b22330(lVar4,&local_40,local_4c);
              FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_3e);
              FUN_00b22330(lVar4,&local_40,local_4c);
              FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_3c);
              FUN_00b22330(lVar4,&local_40,local_4c);
              FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_3b);
              iVar1 = iVar1 + 1;
              local_4c = local_4c + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        local_50 = local_50 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

