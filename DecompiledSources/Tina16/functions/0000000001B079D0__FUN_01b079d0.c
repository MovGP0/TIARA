/* Ghidra address: 01b079d0 */
/* Ghidra symbol: FUN_01b079d0 */


void FUN_01b079d0(longlong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x118));
  FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x128));
  FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x138));
  FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x140));
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  FUN_01b07800(param_1,uVar1);
  if (*(char *)(param_1 + 0x5db) != '\x06') {
    if (*(byte *)(param_1 + 0x98) < 0x10) {
      bVar2 = ((int)CONCAT62((int6)((ulonglong)uVar1 >> 0x10),1) <<
               (*(byte *)(param_1 + 0x98) & 0x1f) & 0x162U) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x148));
      if (*(char *)(param_1 + 0x98) == '\b') {
        FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x150));
      }
    }
  }
  FUN_017c5570(param_1 + 0x178,param_1 + 0x238);
  FUN_017c5380(param_1 + 0x1b8,param_1 + 0x1f8,param_1 + 0x180,param_1 + 0x188,param_1 + 400,
               param_1 + 0x198);
  return;
}

