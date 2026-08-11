/* Ghidra address: 01999150 */
/* Ghidra symbol: FUN_01999150 */


undefined8 FUN_01999150(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x50) < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x10)) {
    uVar2 = FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x50));
    bVar1 = FUN_0198a580(uVar2);
    if (bVar1 < 6) {
      return 0;
    }
  }
  return 1;
}

