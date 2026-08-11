/* Ghidra address: 00b7d090 */
/* Ghidra symbol: FUN_00b7d090 */


void FUN_00b7d090(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  byte local_38 [24];
  
  FUN_0040d200(local_38,0x10,0);
  FUN_00409a70(param_2,local_38,(param_3 & 0xffffffff) / 8);
  uVar2 = 0;
  do {
    *(uint *)(param_1 + 0x98 + (ulonglong)uVar2 * 4) =
         (uint)local_38[uVar2 * 2] * 0x100 + (uint)local_38[uVar2 * 2 + 1];
    uVar2 = uVar2 + 1;
  } while (uVar2 != 8);
  uVar2 = 0;
  do {
    uVar1 = FUN_00b7cd70(param_1,*(undefined4 *)(param_1 + 0x98 + (ulonglong)uVar2 * 4),
                         *(undefined4 *)(param_1 + 0x98 + ((ulonglong)(uVar2 + 1) % 8) * 4));
    *(uint *)(param_1 + 0x98 + (ulonglong)(uVar2 + 8) * 4) = uVar1;
    *(uint *)(param_1 + 0x98 + (ulonglong)(uVar2 + 0x10) * 4) = uVar1 & 0x1ff;
    *(uint *)(param_1 + 0x98 + (ulonglong)(uVar2 + 0x18) * 4) =
         *(uint *)(param_1 + 0x98 + (ulonglong)(uVar2 + 8) * 4) >> 9;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 8);
  return;
}

