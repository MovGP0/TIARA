/* Ghidra address: 015b0d50 */
/* Ghidra symbol: FUN_015b0d50 */


void FUN_015b0d50(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  undefined1 auStack_48 [36];
  int local_24;
  byte *local_20;
  byte *local_18;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_10 = 0;
  local_18 = &DAT_01f6ec68;
  FUN_015b0c60(auStack_48);
  while (local_c <= *(int *)(*(longlong *)(param_1 + 0x60) + 0x88)) {
    *(byte *)(param_1 + 0x20) =
         *(byte *)(param_1 + 0x20) ^
         (&DAT_01f6c3e1)
         [(int)(*(uint *)(param_1 + 0x20 +
                         (longlong)(*(int *)(*(longlong *)(param_1 + 0x60) + 0x88) + -7) * 4) >> 8 &
               0xff)] ^ *local_18;
    *(byte *)(param_1 + 0x21) =
         *(byte *)(param_1 + 0x21) ^
         (&DAT_01f6c3e1)
         [(int)(*(uint *)(param_1 + 0x20 +
                         (longlong)(*(int *)(*(longlong *)(param_1 + 0x60) + 0x88) + -7) * 4) >>
                0x10 & 0xff)];
    *(byte *)(param_1 + 0x22) =
         *(byte *)(param_1 + 0x22) ^
         (&DAT_01f6c3e1)
         [(int)(*(uint *)(param_1 + 0x20 +
                         (longlong)(*(int *)(*(longlong *)(param_1 + 0x60) + 0x88) + -7) * 4) >>
               0x18)];
    local_20 = (byte *)(param_1 + 0x23);
    *local_20 = *local_20 ^
                (&DAT_01f6c3e1)
                [(int)(*(uint *)(param_1 + 0x20 +
                                (longlong)(*(int *)(*(longlong *)(param_1 + 0x60) + 0x88) + -7) * 4)
                      & 0xff)];
    local_18 = local_18 + 1;
    if (*(int *)(*(longlong *)(param_1 + 0x60) + 0x88) == 0xe) {
      local_24 = 1;
      do {
        puVar1 = (uint *)(param_1 + 0x20 + (longlong)local_24 * 4);
        *puVar1 = *puVar1 ^ *(uint *)(param_1 + 0x20 + (longlong)(local_24 + -1) * 4);
        local_24 = local_24 + 1;
      } while (local_24 != 4);
      *(byte *)(param_1 + 0x30) =
           *(byte *)(param_1 + 0x30) ^ (&DAT_01f6c3e1)[(int)(*(uint *)(param_1 + 0x2c) & 0xff)];
      *(byte *)(param_1 + 0x31) =
           *(byte *)(param_1 + 0x31) ^ (&DAT_01f6c3e1)[(int)(*(uint *)(param_1 + 0x2c) >> 8 & 0xff)]
      ;
      *(byte *)(param_1 + 0x32) =
           *(byte *)(param_1 + 0x32) ^
           (&DAT_01f6c3e1)[(int)(*(uint *)(param_1 + 0x2c) >> 0x10 & 0xff)];
      local_20 = (byte *)(param_1 + 0x33);
      *local_20 = *local_20 ^ (&DAT_01f6c3e1)[(int)(*(uint *)(param_1 + 0x2c) >> 0x18)];
      local_24 = 5;
      do {
        puVar1 = (uint *)(param_1 + 0x20 + (longlong)local_24 * 4);
        *puVar1 = *puVar1 ^ *(uint *)(param_1 + 0x20 + (longlong)(local_24 + -1) * 4);
        local_24 = local_24 + 1;
      } while (local_24 != 8);
      local_24 = 8;
    }
    else {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x88) + -7;
      local_24 = 1;
      if (0 < iVar2) {
        do {
          puVar1 = (uint *)(param_1 + 0x20 + (longlong)local_24 * 4);
          *puVar1 = *puVar1 ^ *(uint *)(param_1 + 0x20 + (longlong)(local_24 + -1) * 4);
          local_24 = local_24 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    FUN_015b0c60(auStack_48);
  }
  return;
}

