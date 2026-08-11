/* Ghidra address: 00b22480 */
/* Ghidra symbol: FUN_00b22480 */


ulonglong FUN_00b22480(longlong param_1)

{
  undefined8 unaff_RSI;
  ulonglong uVar1;
  ushort local_20;
  ushort local_1e;
  byte local_1c;
  byte local_1b;
  
  uVar1 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  FUN_00b22330(*(undefined8 *)(param_1 + 0x80),&local_20,*(undefined4 *)(param_1 + 0x5c));
  *(uint *)(param_1 + 0x58) = (uint)local_20 - (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xa8))
  ;
  if (*(int *)(param_1 + 0x58) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int *)(param_1 + 0x58) < 0x10000) {
    FUN_00b22330(*(undefined8 *)(param_1 + 0x80),&local_20,*(undefined4 *)(param_1 + 0x5c));
    *(uint *)(param_1 + 0x54) =
         (uint)local_1e - (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0xa8));
    if (*(int *)(param_1 + 0x54) < 0) {
      uVar1 = 0;
    }
    else {
      if (0xffff < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x54) = 0xffff;
      }
      FUN_00b22330(*(undefined8 *)(param_1 + 0x80),&local_20,*(undefined4 *)(param_1 + 0x5c));
      *(uint *)(param_1 + 0x50) =
           (uint)local_1c - (*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0xb0));
      if (*(int *)(param_1 + 0x50) < 0) {
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      if (*(int *)(param_1 + 0x50) < 0x100) {
        FUN_00b22330(*(undefined8 *)(param_1 + 0x80),&local_20,*(undefined4 *)(param_1 + 0x5c));
        *(uint *)(param_1 + 0x4c) =
             (uint)local_1b - (*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0xb0));
        if (*(int *)(param_1 + 0x4c) < 0) {
          uVar1 = 0;
        }
        else if (0xff < *(int *)(param_1 + 0x4c)) {
          *(undefined4 *)(param_1 + 0x4c) = 0xff;
        }
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 0xffffffff;
}

