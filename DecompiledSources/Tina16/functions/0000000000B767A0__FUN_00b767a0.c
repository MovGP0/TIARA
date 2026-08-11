/* Ghidra address: 00b767a0 */
/* Ghidra symbol: FUN_00b767a0 */


void FUN_00b767a0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  byte local_48 [40];
  
  FUN_0040d200(local_48,0x20,0);
  FUN_00409a70(param_2,local_48,(param_3 & 0xffffffff) / 8);
  uVar2 = 0;
  do {
    uVar1 = uVar2 * 4;
    *(uint *)(param_1 + 0x98 + (ulonglong)uVar2 * 4) =
         (uint)local_48[uVar1 + 3] << 0x18 | (uint)local_48[uVar1 + 2] << 0x10 |
         (uint)local_48[uVar1 + 1] << 8 | (uint)local_48[uVar1];
    uVar2 = uVar2 + 1;
  } while (uVar2 != 8);
  return;
}

