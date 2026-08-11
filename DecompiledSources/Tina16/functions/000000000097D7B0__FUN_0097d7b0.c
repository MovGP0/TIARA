/* Ghidra address: 0097d7b0 */
/* Ghidra symbol: FUN_0097d7b0 */


longlong FUN_0097d7b0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_70;
  undefined1 local_68;
  undefined1 *local_60;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_2c;
  longlong local_28;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_60 = auStack_a8;
  local_1c = local_20;
  if (param_1 != 0) {
    local_20 = *(uint *)(param_1 + -4) >> 1;
    local_60 = auStack_a8;
    local_1c = local_20;
  }
  for (; local_1c != 0; local_1c = local_1c - 1) {
    local_14 = (uint)*(ushort *)(param_1 + -2 + (longlong)(int)local_1c * 2);
    if (local_14 != 0x30) {
      if (local_14 - 0x31 < 9) {
        local_28 = 1;
        local_2c = 1;
        iVar2 = local_18;
        if (0 < local_18) {
          do {
            local_28 = local_28 << 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_10 = local_10 + (int)(local_14 - 0x30) * local_28;
      }
      else if (local_14 - 0x41 < 6) {
        local_38 = 1;
        local_3c = 1;
        iVar2 = local_18;
        if (0 < local_18) {
          do {
            local_38 = local_38 << 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_10 = local_10 + (int)(local_14 - 0x37) * local_38;
      }
      else if (local_14 - 0x61 < 6) {
        local_48 = 1;
        local_4c = 1;
        iVar2 = local_18;
        if (0 < local_18) {
          do {
            local_48 = local_48 << 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_10 = local_10 + (int)(local_14 - 0x57) * local_48;
      }
      else {
        local_68 = 0xf;
        local_88 = 0;
        local_70 = param_1;
        uVar1 = FUN_0044d530(&PTR_FUN_00436080,1,L"%S is not a hexadecimal number.",&local_70);
        FUN_004134c0(uVar1);
      }
    }
    local_18 = local_18 + 1;
  }
  return local_10;
}

