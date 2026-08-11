/* Ghidra address: 01bd3f80 */
/* Ghidra symbol: FUN_01bd3f80 */


void FUN_01bd3f80(longlong param_1)

{
  byte bVar1;
  undefined8 local_20;
  
  bVar1 = *(byte *)(param_1 + 0x36c);
  if (bVar1 < 2) {
    local_20 = CONCAT44((*(int *)(param_1 + 0x9c) / 2 - *(int *)(param_1 + 0x368)) + DAT_01fe0380,
                        (*(int *)(param_1 + 0x98) / 2 - *(int *)(param_1 + 0x368) / 2) +
                        DAT_01fe0380);
  }
  else if ((byte)(bVar1 - 2) < 2) {
    local_20 = CONCAT44((*(int *)(param_1 + 0x9c) / 2 - *(int *)(param_1 + 0x368) / 2) +
                        DAT_01fe0380,
                        (*(int *)(param_1 + 0x98) / 2 - *(int *)(param_1 + 0x368)) + DAT_01fe0380);
  }
  if (*(char *)(param_1 + 0x38d) == '\0') {
    FUN_00635a10(*(undefined8 *)(param_1 + 0x310),bVar1,&local_20,*(undefined4 *)(param_1 + 0x368));
  }
  else if (*(char *)(param_1 + 0x38d) == '\x01') {
    FUN_00635c00(*(undefined8 *)(param_1 + 0x310),bVar1,&local_20,*(undefined4 *)(param_1 + 0x368));
  }
  return;
}

