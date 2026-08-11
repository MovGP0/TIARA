/* Ghidra address: 00d47570 */
/* Ghidra symbol: FUN_00d47570 */


void FUN_00d47570(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_00788e40(param_1);
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    uVar2 = FUN_00781840();
    uVar1 = FUN_00779380(uVar2,0x1c);
    FUN_00788cc0(param_1,uVar1);
    uVar2 = FUN_00781840();
    uVar1 = FUN_007793c0(uVar2,0xff000008);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  return;
}

