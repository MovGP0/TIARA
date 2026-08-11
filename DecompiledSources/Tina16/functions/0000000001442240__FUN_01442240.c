/* Ghidra address: 01442240 */
/* Ghidra symbol: FUN_01442240 */


void FUN_01442240(undefined1 param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  bool bVar4;
  byte local_98 [32];
  byte local_78 [32];
  byte local_58 [40];
  
  uVar2 = (ulonglong)param_2;
  pbVar3 = *(byte **)(param_3 + 8);
  if (pbVar3 != (byte *)0x0) {
    if (*(char *)(param_3 + 0x54) == '\0') {
      local_58[0] = 0;
      local_58[1] = 0xa0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      local_58[6] = 0;
      local_58[7] = 0;
      local_58[8] = 0;
      local_58[9] = 0;
      local_58[10] = 0;
      local_58[0xb] = 0;
      local_58[0xc] = 0;
      local_58[0xd] = 0;
      local_58[0xe] = 0;
      local_58[0xf] = 0;
      local_58[0x10] = 0;
      local_58[0x11] = 0;
      local_58[0x12] = 0;
      local_58[0x13] = 0;
      local_58[0x14] = 0;
      local_58[0x15] = 0;
      local_58[0x16] = 0;
      local_58[0x17] = 0;
      local_58[0x18] = 0;
      local_58[0x19] = 0;
      local_58[0x1a] = 0;
      local_58[0x1b] = 0;
      local_58[0x1c] = 0;
      local_58[0x1d] = 0;
      local_58[0x1e] = 0;
      local_58[0x1f] = 0;
    }
    else if (*(char *)(param_3 + 0x54) == '\x01') {
      local_58[0] = 0;
      local_58[1] = 0x40;
      local_58[2] = 1;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      local_58[6] = 0;
      local_58[7] = 0;
      local_58[8] = 0;
      local_58[9] = 0;
      local_58[10] = 0;
      local_58[0xb] = 0;
      local_58[0xc] = 0;
      local_58[0xd] = 0;
      local_58[0xe] = 0;
      local_58[0xf] = 0;
      local_58[0x10] = 0;
      local_58[0x11] = 0;
      local_58[0x12] = 0;
      local_58[0x13] = 0;
      local_58[0x14] = 0;
      local_58[0x15] = 0;
      local_58[0x16] = 0;
      local_58[0x17] = 0;
      local_58[0x18] = 0;
      local_58[0x19] = 0;
      local_58[0x1a] = 0;
      local_58[0x1b] = 6;
      local_58[0x1c] = 0;
      local_58[0x1d] = 0;
      local_58[0x1e] = 0;
      local_58[0x1f] = 0;
    }
    for (; *(longlong *)(pbVar3 + 0xb0) != 0; pbVar3 = *(byte **)(pbVar3 + 0xb0)) {
      FUN_0040f630(local_78,param_1,0x20);
      local_78[(longlong)(uVar2 & 0xff) >> 3] =
           local_78[(longlong)(uVar2 & 0xff) >> 3] | '\x01' << (uVar2 & 7);
      uVar1 = *(uint *)(pbVar3 + 4);
      if (uVar1 < 0x100) {
        bVar4 = (local_78[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        FUN_0040f630(local_98,param_1,0x20);
        local_98[(longlong)(uVar2 & 0xff) >> 3] =
             local_98[(longlong)(uVar2 & 0xff) >> 3] | '\x01' << (uVar2 & 7);
        uVar1 = *(uint *)(pbVar3 + 8);
        if (uVar1 < 0x100) {
          bVar4 = (local_98[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1) != 0;
        }
        else {
          bVar4 = false;
        }
        if ((bVar4) &&
           ((local_58[(longlong)(ulonglong)*pbVar3 >> 3] >> ((ulonglong)*pbVar3 & 7) & 1) != 0))
        break;
      }
    }
    FUN_0040f630(local_78,param_1,0x20);
    local_78[(longlong)(uVar2 & 0xff) >> 3] =
         local_78[(longlong)(uVar2 & 0xff) >> 3] | '\x01' << (uVar2 & 7);
    uVar1 = *(uint *)(pbVar3 + 4);
    if (uVar1 < 0x100) {
      bVar4 = (local_78[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0040f630(local_98,param_1,0x20);
      local_98[(longlong)(uVar2 & 0xff) >> 3] =
           local_98[(longlong)(uVar2 & 0xff) >> 3] | '\x01' << (uVar2 & 7);
      uVar1 = *(uint *)(pbVar3 + 8);
      if (uVar1 < 0x100) {
        bVar4 = (local_98[(longlong)(ulonglong)uVar1 >> 3] >> ((ulonglong)uVar1 & 7) & 1) != 0;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) &&
         ((local_58[(longlong)(ulonglong)*pbVar3 >> 3] >> ((ulonglong)*pbVar3 & 7) & 1) != 0)) {
        *(undefined2 *)(param_3 + 0x90) = **(undefined2 **)(pbVar3 + 0xa8);
        return;
      }
    }
    *(undefined2 *)(param_3 + 0x90) = 9;
  }
  return;
}

