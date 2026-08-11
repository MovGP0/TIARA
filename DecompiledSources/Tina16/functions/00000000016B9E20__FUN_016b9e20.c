/* Ghidra address: 016b9e20 */
/* Ghidra symbol: FUN_016b9e20 */


undefined8 FUN_016b9e20(longlong param_1,undefined8 param_2,byte param_3,char param_4,char param_5)

{
  byte bVar1;
  int iVar2;
  byte local_50 [32];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_004144d0(param_2);
  iVar2 = 0;
  do {
    if (iVar2 < 1) {
      local_50[0] = 1;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[7] = 0;
      local_50[8] = 0;
      local_50[9] = 0;
      local_50[10] = 0;
      local_50[0xb] = 0;
      local_50[0xc] = 0;
      local_50[0xd] = 0;
      local_50[0xe] = 0;
      local_50[0xf] = 0;
      local_50[0x10] = 0;
      local_50[0x11] = 0;
      local_50[0x12] = 0;
      local_50[0x13] = 0;
      local_50[0x14] = 0;
      local_50[0x15] = 0;
      local_50[0x16] = 0;
      local_50[0x17] = 0;
      local_50[0x18] = 0;
      local_50[0x19] = 0;
      local_50[0x1a] = 0;
      local_50[0x1b] = 0;
      local_50[0x1c] = 0;
      local_50[0x1d] = 0;
      local_50[0x1e] = 0;
      local_50[0x1f] = 0;
      local_50[(longlong)(ulonglong)param_3 >> 3] =
           local_50[(longlong)(ulonglong)param_3 >> 3] | '\x01' << ((ulonglong)param_3 & 7);
      if ((local_50[(longlong)(ulonglong)*(byte *)(param_1 + 0x9a0) >> 3] >>
           ((ulonglong)*(byte *)(param_1 + 0x9a0) & 7) & 1) != 0) {
        FUN_004144d0(local_30);
        return param_2;
      }
    }
    if (*(char *)(param_1 + 0x9a0) == param_4) {
      iVar2 = iVar2 + 1;
      *(undefined1 *)(param_1 + 0x9a0) = 0x28;
    }
    if ((0 < iVar2) && (*(char *)(param_1 + 0x9a0) == param_5)) {
      iVar2 = iVar2 + -1;
      *(undefined1 *)(param_1 + 0x9a0) = 0x29;
    }
    bVar1 = *(char *)(param_1 + 0x9a0) - 8;
    if (0x1f < bVar1 || (1 << (bVar1 & 0x1f) & 0x1000002U) == 0) {
      FUN_004153d0(local_30,*(char *)(param_1 + 0x9a0),0);
      FUN_004155b0(param_2,local_30[0]);
    }
    FUN_016b9d20(param_1);
  } while( true );
}

