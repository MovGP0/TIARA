/* Ghidra address: 00d43740 */
/* Ghidra symbol: FUN_00d43740 */


void FUN_00d43740(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    uVar2 = FUN_00781840();
    uVar3 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    uVar1 = FUN_00779380(uVar2,(&DAT_01ecd3a8)[uVar3 & 0xff]);
    FUN_00788cc0(param_1,uVar1);
    uVar2 = FUN_00781840();
    uVar3 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    uVar1 = FUN_007793a0(uVar2,(&DAT_01ecd3aa)[uVar3 & 0xff]);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  return;
}

