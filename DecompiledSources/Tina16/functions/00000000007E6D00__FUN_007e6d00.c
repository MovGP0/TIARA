/* Ghidra address: 007e6d00 */
/* Ghidra symbol: FUN_007e6d00 */


void FUN_007e6d00(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined2 local_58;
  longlong local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  *(undefined8 *)(param_2 + 0x18) = 0;
  local_34 = -1;
  local_30 = -1;
  iVar4 = -1;
  local_40 = param_2;
  iVar2 = thunk_FUN_041b99e8(*(undefined8 *)(param_2 + 0x10));
  local_38 = 0;
  local_2c = iVar2;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = thunk_FUN_03af2864(*(undefined8 *)(local_40 + 0x10),local_38,0x400);
      local_58 = *(undefined2 *)(local_40 + 8);
      cVar1 = FUN_007e6b30(auStack_78,*(undefined8 *)(local_40 + 0x10),uVar3,local_38);
      if (cVar1 != '\0') {
        if ((uVar3 & 2) == 0) {
          if (local_34 < 0) {
            local_34 = local_38;
            *(undefined8 *)(local_40 + 0x18) = 2;
          }
          else {
            *(undefined8 *)(local_40 + 0x18) = 3;
          }
          if ((uVar3 & 0x80) == 0) {
            if (-1 < local_30) {
              iVar4 = local_38;
            }
          }
          else {
            local_30 = local_38;
          }
        }
        else if (local_34 < 0) {
          local_34 = -2;
        }
      }
      local_38 = local_38 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_34 < -1) {
    *(undefined8 *)(local_40 + 0x18) = 0x10000;
  }
  else {
    if ((local_34 < 0) && (local_38 = 0, iVar2 = local_2c, -1 < local_2c + -1)) {
      do {
        uVar3 = thunk_FUN_03af2864(*(undefined8 *)(local_40 + 0x10),local_38,0x400);
        local_58 = *(undefined2 *)(local_40 + 8);
        cVar1 = FUN_007e6bb0(auStack_78,*(undefined8 *)(local_40 + 0x10),uVar3,local_38);
        if (cVar1 != '\0') {
          if ((uVar3 & 2) != 0) {
            *(undefined8 *)(local_40 + 0x18) = 0x10000;
            return;
          }
          if (local_34 < 0) {
            local_34 = local_38;
            *(undefined8 *)(local_40 + 0x18) = 2;
          }
          else {
            *(undefined8 *)(local_40 + 0x18) = 3;
          }
          if ((uVar3 & 0x80) == 0) {
            if (-1 < local_30) {
              iVar4 = local_38;
            }
          }
          else {
            local_30 = local_38;
          }
        }
        local_38 = local_38 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (*(longlong *)(local_40 + 0x18) == 2) {
      *(ulonglong *)(local_40 + 0x18) = (longlong)local_34 | 0x20000;
    }
    else if (*(longlong *)(local_40 + 0x18) == 3) {
      if (iVar4 < 0) {
        iVar4 = local_34;
      }
      *(ulonglong *)(local_40 + 0x18) = (longlong)iVar4 | 0x30000;
    }
  }
  return;
}

