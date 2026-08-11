/* Ghidra address: 0145e3a0 */
/* Ghidra symbol: FUN_0145e3a0 */


void FUN_0145e3a0(longlong param_1,undefined4 param_2)

{
  FUN_019b9b30(param_1);
  FUN_00ef4850(param_1);
  FUN_01444810(1,param_1,param_2,0);
  FUN_00efccb0(param_1);
  if (1 < *(int *)(param_1 + 0xe70)) {
    FUN_00ef4260(0xe,param_1);
  }
  *(undefined1 *)(param_1 + 0xb4) = 2;
  *(undefined4 *)(param_1 + 0xb38) = 1;
  if (*(char *)(param_1 + 0x92) == '\0') {
    FUN_00efdf60(0x4056800000000000,param_1);
    if (((*(char *)(param_1 + 0x92) == '\0') && (*(longlong *)(param_1 + 0x18) != 0)) &&
       (*(longlong *)(param_1 + 0x20) != 0)) {
      *(uint *)(param_1 + 0x48) = (uint)*(byte *)(param_1 + 0x45);
      *(uint *)(param_1 + 0x4c) = (uint)*(byte *)(param_1 + 0x44);
      FUN_01448b70(*(undefined8 *)(param_1 + 0x18),param_1 + 0x48,0x3eb0c6f7a0b5ed8d,param_1 + 0x368
                   ,param_1 + 0x4b0,param_1);
      FUN_019b9a90(0x4014000000000000,param_1,0);
      FUN_01448b70(*(undefined8 *)(param_1 + 0x20),param_1 + 0x4c,0x3eb0c6f7a0b5ed8d,param_1 + 0xd8,
                   param_1 + 0x220,param_1);
      FUN_019b9a90(0x4014000000000000,param_1,0);
      FUN_01448900(param_1);
    }
  }
  FUN_019b9b60(param_1);
  if (*(char *)(param_1 + 0x92) != '\0') {
    FUN_00ef81f0(param_1 + 0x30);
    FUN_00ef81f0(param_1 + 0x38);
    FUN_00efa3b0(param_1 + 0x18);
    FUN_00efa3b0(param_1 + 0x20);
  }
  return;
}

