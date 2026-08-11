/* Ghidra address: 004bdcb0 */
/* Ghidra symbol: FUN_004bdcb0 */


void FUN_004bdcb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  bool local_2a;
  bool local_29;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  uint local_c;
  
  local_40 = auStack_68;
  if (DAT_02011648 != 0) {
    local_18 = FUN_004f2c60(DAT_02011648);
    local_c = *(int *)(local_18 + 0x10) - 1;
    if (-1 < (int)local_c) {
      do {
        if (*(uint *)(local_18 + 0x10) <= local_c) {
          FUN_00594f90();
        }
        local_20 = *(longlong *)(*(longlong *)(local_18 + 8) + (longlong)(int)local_c * 8);
        if ((param_1 == 0) || (*(longlong *)(local_20 + 0x10) == param_1)) {
          if (param_2 == 0) {
            local_2a = true;
          }
          else {
            local_28 = *(longlong *)(local_20 + 0x20);
            if (param_2 == local_28) {
              local_29 = true;
            }
            else if ((param_2 == 0) || (local_28 == 0)) {
              local_29 = false;
            }
            else {
              iVar1 = FUN_0043e420(param_2,local_28);
              local_29 = iVar1 == 0;
            }
            local_2a = local_29;
          }
          if (local_2a != false) {
            FUN_00599670(local_18 + 8,local_c,5);
            FUN_00410f20(local_20);
          }
        }
        local_c = local_c - 1;
      } while (local_c != 0xffffffff);
    }
    FUN_00412130(*(undefined8 *)(DAT_02011648 + 0x10));
  }
  return;
}

