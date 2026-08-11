/* Ghidra address: 00d44f10 */
/* Ghidra symbol: FUN_00d44f10 */


void FUN_00d44f10(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_00781840();
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    uVar3 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    uVar1 = FUN_00779380(uVar2,(&DAT_01ecd3c6)[uVar3 & 0xff]);
    FUN_005fdab0(*(undefined8 *)(param_1 + 0x38),uVar1);
    uVar3 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    uVar1 = FUN_007793a0(uVar2,(&DAT_01ecd3c8)[uVar3 & 0xff]);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  return;
}

